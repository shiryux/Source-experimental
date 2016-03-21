
#pragma once
#ifndef CSECTOR_H
#define CSECTOR_H

#include "../common/CSectorTemplate.h"
#include "../common/CScriptObj.h"
#include "CSectorEnviron.h"


class CChar;
class CItemStone;

class CSector : public CScriptObj, public CSectorBase	// square region of the world.
{
	// A square region of the world. ex: MAP0.MUL Dungeon Sectors are 256 by 256 meters
#define SECTOR_TICK_PERIOD (TICK_PER_SEC/4) // length of a pulse.

public:
	static const char *m_sClassName;
	static LPCTSTR const sm_szVerbKeys[];
	static LPCTSTR const sm_szLoadKeys[];

private:
	bool   m_fSaveParity;		// has the sector been saved relative to the char entering it ?
	CSectorEnviron m_Env;		// Current Environment

	BYTE m_RainChance;		// 0 to 100%
	BYTE m_ColdChance;		// Will be snow if rain chance success.
	BYTE m_ListenItems;		// Items on the ground that listen ?

private:
	WEATHER_TYPE GetWeatherCalc() const;
	BYTE GetLightCalc( bool fQuickSet ) const;
	void SetLightNow( bool fFlash = false );
	bool IsMoonVisible( unsigned int iPhase, int iLocalTime ) const;
	void SetDefaultWeatherChance();

public:
	CSector();
	~CSector();

private:
	CSector(const CSector& copy);
	CSector& operator=(const CSector& other);

public:
	void OnTick( int iPulse );

	// Time
	int GetLocalTime() const;
	LPCTSTR GetLocalGameTime() const;

	SEASON_TYPE GetSeason() const;
	void SetSeason( SEASON_TYPE season );

	// Weather
	WEATHER_TYPE GetWeather() const;
	bool IsRainOverriden() const;
	BYTE GetRainChance() const;
	bool IsColdOverriden() const;
	BYTE GetColdChance() const;
	void SetWeather( WEATHER_TYPE w );
	void SetWeatherChance( bool fRain, int iChance );

	// Light
	bool IsLightOverriden() const;
	BYTE GetLight() const;
	bool IsDark() const;
	bool IsNight() const;
	void LightFlash();
	void SetLight( int light );

	// Items in the sector

	size_t GetItemComplexity() const;
	bool IsItemInSector( const CItem * pItem ) const;
	void MoveItemToSector( CItem * pItem, bool fActive );

	void AddListenItem();
	void RemoveListenItem();
	bool HasListenItems() const;
	void OnHearItem( CChar * pChar, TCHAR * szText );

	// Chars in the sector.
	bool IsCharActiveIn( const CChar * pChar );
	bool IsCharDisconnectedIn( const CChar * pChar );
	size_t GetCharComplexity() const;
	size_t GetInactiveChars() const;
	size_t HasClients() const;
	CServTime GetLastClientTime() const;
	bool IsSectorSleeping() const;
	void SetSectorWakeStatus();	// Ships may enter a sector before it's riders !
	void ClientAttach( CChar * pChar );
	void ClientDetach( CChar * pChar );
	bool MoveCharToSector( CChar * pChar );

	// General.
	virtual bool r_LoadVal( CScript & s );
	virtual bool r_WriteVal( LPCTSTR pszKey, CGString & sVal, CTextConsole * pSrc );
	virtual void r_Write();
	virtual bool r_Verb( CScript & s, CTextConsole * pSrc );

	// AllThings Verbs
	bool v_AllChars( CScript & s, CTextConsole * pSrc );
	bool v_AllCharsIdle( CScript & s, CTextConsole * pSrc );
	bool v_AllItems( CScript & s, CTextConsole * pSrc );
	bool v_AllClients( CScript & s, CTextConsole * pSrc );

	// Other resources.
	void Restock();
	void RespawnDeadNPCs();

	void Close();
	LPCTSTR GetName() const { return( "Sector" ); }
};

#endif // CSECTOR_H
