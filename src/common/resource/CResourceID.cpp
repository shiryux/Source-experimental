#include "CResourceID.h"
#include "../CLog.h"


static constexpr lpctstr _ptcWarnInvalidResource = "Expected a valid ResourceID, found invalid with index: 0%x (internal val: 0%x, warning code: %d).\n";
#define LOG_WARN_RES_INVALID(code)    g_Log.EventWarn(_ptcWarnInvalidResource, rid.GetResIndex(), rid.GetPrivateUID(), code);


// CResourceIDBase

CResourceIDBase::CResourceIDBase(RES_TYPE restype) // explicit
{
    // single instance type.
    ASSERT(restype <= RES_TYPE_MASK);
    m_dwInternalVal = UID_F_RESOURCE | (restype << RES_TYPE_SHIFT);
}

CResourceIDBase::CResourceIDBase(RES_TYPE restype, int iIndex) // explicit
{
    ASSERT(restype <= RES_TYPE_MASK);
    m_dwInternalVal = UID_F_RESOURCE | (restype << RES_TYPE_SHIFT) | (iIndex & RES_INDEX_MASK);
}

CResourceIDBase::CResourceIDBase(dword dwPrivateID) // explicit
{
    if (!CUIDBase::IsValidUID(dwPrivateID))
    {
        DEBUG_MSG(("Trying to set invalid dwPrivateID (0x%x) to CResourceIDBase. Resetting it.\n", dwPrivateID));
        Init();
        return;
    }
    m_dwInternalVal = UID_F_RESOURCE | dwPrivateID;
}

CResourceIDBase::CResourceIDBase(const CResourceIDBase& rid) : CUIDBase(rid) // copy constructor
{
    ASSERT(rid.IsResource());
    m_dwInternalVal |= UID_F_RESOURCE;
    ASSERT(IsResource());
}

CResourceIDBase& CResourceIDBase::operator = (const CResourceIDBase& rid)  // assignment operator
{
    ASSERT(rid.IsResource());
    CUIDBase::operator=(rid);
    m_dwInternalVal |= UID_F_RESOURCE;
    ASSERT(IsResource());
    return *this;
}

bool CResourceIDBase::IsUIDItem() const
{
    // replacement for CUIDBase::IsItem(), but don't be virtual, since we don't need that and the class size will increase due to the vtable

    // If it's both a resource and an item, and if it's the CResourceIDBase of a CRegion, it's a region from a multi
    if ((m_dwInternalVal & (UID_F_RESOURCE | UID_F_ITEM)) == (UID_F_RESOURCE | UID_F_ITEM))
        return IsValidUID();
    return false;
}

CItem* CResourceIDBase::ItemFindFromResource() const   // replacement for CUIDBase::ItemFind()
{
    // Used by multis: when they are realized, a new CRegionWorld is created with a CResourceID with an internal value = to the internal value of the multi, plus a | UID_F_RESOURCE.
    //  Remove the reserved UID_* flags (so also UID_F_RESOURCE), and find the item (in our case actually the multi) with that uid.
    return CUIDBase::ItemFind(m_dwInternalVal & UID_O_INDEX_MASK);
}


//CResourceID

CResourceID& CResourceID::operator = (const CResourceID& rid)   // assignment operator
{
    if (!rid.IsResource())
        LOG_WARN_RES_INVALID(1);

    CUIDBase::operator=(rid);
    ASSERT(IsResource());
    m_wPage = rid.m_wPage;
    return *this;
}

CResourceID& CResourceID::operator = (const CResourceIDBase& rid)
{
    if (!rid.IsResource())
        LOG_WARN_RES_INVALID(2);

    CUIDBase::operator=(rid);
    ASSERT(IsResource());
    m_wPage = 0;
    return *this;
}
