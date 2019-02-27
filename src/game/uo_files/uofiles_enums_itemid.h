/**
* @file uofiles_enums_itemid.h
*
*/

#ifndef _INC_UOFILES_ENUMS_ITEMID_H
#define _INC_UOFILES_ENUMS_ITEMID_H


#define MULTI_QTY	0x2000	// total address space for multis.

enum ITEMID_TYPE	// InsideUO or UoFiddler are great for this stuff.
{
	ITEMID_NOTHING = 0,	// Used for lightning.
	ITEMID_NODRAW = 1,
	ITEMID_ANKH_S,
	ITEMID_ANKH_N,
	ITEMID_ANKH_W,
	ITEMID_ANKH_E,

	ITEMID_STONE_WALL = 0x0080,

	ITEMID_DOOR_SECRET_1 = 0x00E8,
	ITEMID_DOOR_SECRET_2 = 0x0314,
	ITEMID_DOOR_SECRET_3 = 0x0324,
	ITEMID_DOOR_SECRET_4 = 0x0334,
	ITEMID_DOOR_SECRET_5 = 0x0344,
	ITEMID_DOOR_SECRET_6 = 0x0354,

	ITEMID_DOOR_METAL_S = 0x0675,		// 1
	ITEMID_DOOR_METAL_S_2 = 0x0677,
	ITEMID_DOOR_METAL_S_3 = 0x067D,
	ITEMID_DOOR_BARRED = 0x0685,		// 2
	ITEMID_DOOR_RATTAN = 0x0695,		// 3
	ITEMID_DOOR_WOODEN_1 = 0x06A5,		// 4
	ITEMID_DOOR_WOODEN_1_o = 0x06A6,	// 4
	ITEMID_DOOR_WOODEN_1_2 = 0x06A7,
	ITEMID_DOOR_WOODEN_2 = 0x06B5,		// 5
	ITEMID_DOOR_METAL_L = 0x06C5,		// 6
	ITEMID_DOOR_WOODEN_3 = 0x06D5,		// 7
	ITEMID_DOOR_WOODEN_4 = 0x06E5,		// 8
	ITEMID_DOOR_HI = 0x06f4,

	ITEMID_DOOR_IRONGATE_1 = 0x0824,
	ITEMID_DOOR_WOODENGATE_1 = 0x0839,
	ITEMID_DOOR_IRONGATE_2 = 0x084C,
	ITEMID_DOOR_WOODENGATE_2 = 0x0866,

	ITEMID_ROCK_1_LO = 0x8e0,
	ITEMID_ROCK_1_HI = 0x8ea,

	ITEMID_BEEHIVE = 0x091a,

	ITEMID_FOOD_BACON = 0x0976,
	ITEMID_FOOD_FISH_RAW = 0x97a,
	ITEMID_FOOD_FISH = 0x097b,

	ITEMID_RBASKET = 0x0990,	//0x0E78,

	ITEMID_BOOZE_LIQU_B1 = 0x099b,
	ITEMID_BOOZE_LIQU_B2 = 0x099c,
	ITEMID_BOOZE_LIQU_B3 = 0x099d,
	ITEMID_BOOZE_LIQU_B4 = 0x099e,
	ITEMID_BOOZE_ALE_B1 = 0x099f,
	ITEMID_BOOZE_ALE_B2 = 0x09a0,
	ITEMID_BOOZE_ALE_B3 = 0x09a1,
	ITEMID_BOOZE_ALE_B4 = 0x09a2,

	ITEMID_PITCHER = 0x09a7,	// empty.
	ITEMID_BOX_METAL = 0x09a8,
	ITEMID_CRATE7 = 0x09a9,
	ITEMID_BOX_WOOD1 = 0x09aa,
	ITEMID_CHEST_SILVER2 = 0x09ab,
	ITEMID_BASKET = 0x09ac,
	ITEMID_POUCH2 = 0x09b0,
	ITEMID_BASKET2 = 0x09b1,
	ITEMID_BANK_BOX = 0x09b2, // another pack really but used as bank box.

	ITEMID_FOOD_EGGS_RAW = 0x09b5,
	ITEMID_FOOD_EGGS = 0x09b6,
	ITEMID_FOOD_BIRD1 = 0x09b7,
	ITEMID_FOOD_BIRD2 = 0x09b8,
	ITEMID_FOOD_BIRD1_RAW = 0x09b9,
	ITEMID_FOOD_BIRD2_RAW = 0x09ba,

	ITEMID_FOOD_SAUSAGE = 0x09c0,
	ITEMID_BOOZE_WINE_B1 = 0x09c4,
	ITEMID_BOOZE_WINE_B2 = 0x09c5,
	ITEMID_BOOZE_WINE_B3 = 0x09c6,
	ITEMID_BOOZE_WINE_B4 = 0x09c7,

	ITEMID_FOOD_HAM = 0x09C9,

	ITEMID_FISH_1 = 0x09CC,
	ITEMID_FISH_2 = 0x09CD,
	ITEMID_FISH_3 = 0x09CE,
	ITEMID_FISH_4 = 0x09CF,

	ITEMID_FRUIT_APPLE = 0x09d0,
	ITEMID_FRUIT_PEACH1 = 0x09d2,
	ITEMID_FRUIT_GRAPE = 0x09d7,

	ITEMID_FOOD_CAKE = 0x09e9,

	ITEMID_JAR_HONEY = 0x09EC,
	ITEMID_BOOZE_ALE_M1 = 0x09ee,
	ITEMID_BOOZE_ALE_M2 = 0x09ef,

	ITEMID_FOOD_MEAT_RAW = 0x09f1,
	ITEMID_FOOD_MEAT = 0x09f2,

	ITEMID_LANTERN = 0x0A25,

	ITEMID_BEDROLL_O_EW = 0x0a55,
	ITEMID_BEDROLL_O_NS,
	ITEMID_BEDROLL_C,
	ITEMID_BEDROLL_C_NS,
	ITEMID_BEDROLL_C_EW = 0x0a59,

	ITEMID_BED1_1 = 0x0a5a,
	// some things in here are not bed but sheets and blankets.
	ITEMID_BED1_X = 0x0a91,

	ITEMID_BOOKSHELF1 = 0x0a97, // book shelf
	ITEMID_BOOKSHELF2 = 0x0a98, // book shelf
	ITEMID_BOOKSHELF3 = 0x0a99, // book shelf
	ITEMID_BOOKSHELF4 = 0x0a9a, // book shelf
	ITEMID_BOOKSHELF5 = 0x0a9b, // book shelf
	ITEMID_BOOKSHELF6 = 0x0a9c, // book shelf
	ITEMID_BOOKSHELF7 = 0x0a9d, // book shelf
	ITEMID_BOOKSHELF8 = 0x0a9e, // book shelf

	ITEMID_WATER_TROUGH_1 = 0x0B41,
	ITEMID_WATER_TROUGH_2 = 0x0B44,

	ITEMID_PLANT_COTTON1 = 0x0c4f,// old
	ITEMID_PLANT_COTTON2 = 0x0c50,
	ITEMID_PLANT_COTTON3 = 0x0c51,
	ITEMID_PLANT_COTTON4 = 0x0c52,
	ITEMID_PLANT_COTTON5 = 0x0c53,
	ITEMID_PLANT_COTTON6 = 0x0c54,// young
	ITEMID_PLANT_WHEAT1 = 0x0c55,
	ITEMID_PLANT_WHEAT2 = 0x0c56,
	ITEMID_PLANT_WHEAT3 = 0x0c57,
	ITEMID_PLANT_WHEAT4 = 0x0c58,
	ITEMID_PLANT_WHEAT5 = 0x0c59,
	ITEMID_PLANT_WHEAT6 = 0x0c5a,
	ITEMID_PLANT_WHEAT7 = 0x0c5b,

	ITEMID_PLANT_VINE1 = 0x0c5e,
	ITEMID_PLANT_VINE2 = 0x0c5f,
	ITEMID_PLANT_VINE3 = 0x0c60,

	ITEMID_PLANT_TURNIP1 = 0x0c61,
	ITEMID_PLANT_TURNIP2 = 0x0c62,
	ITEMID_PLANT_TURNIP3 = 0x0c63,
	ITEMID_SPROUT_NORMAL = 0x0c68,
	ITEMID_PLANT_ONION = 0x0c6f,
	ITEMID_PLANT_CARROT = 0x0c76,
	ITEMID_PLANT_CORN1 = 0x0c7d,
	ITEMID_PLANT_CORN2 = 0x0c7e,

	ITEMID_FRUIT_WATERMELLON1 = 0x0c5c,
	ITEMID_FRUIT_WATERMELLON2 = 0x0c5d,
	ITEMID_FRUIT_GOURD1 = 0x0c64,
	ITEMID_FRUIT_GOURD2 = 0x0c65,
	ITEMID_FRUIT_GOURD3 = 0x0c66,
	ITEMID_FRUIT_GOURD4 = 0x0c67,
	ITEMID_SPROUT_NORMAL2 = 0x0c69,
	ITEMID_FRUIT_ONIONS1 = 0x0c6d,
	ITEMID_FRUIT_ONIONS2 = 0x0c6e,
	ITEMID_FRUIT_PUMPKIN1 = 0x0c6a,
	ITEMID_FRUIT_PUMPKIN2 = 0x0c6b,
	ITEMID_FRUIT_PUMPKIN3 = 0x0c6c,
	ITEMID_FRUIT_LETTUCE1 = 0x0c70,
	ITEMID_FRUIT_LETTUCE2 = 0x0c71,
	ITEMID_FRUIT_SQUASH1 = 0x0c72,
	ITEMID_FRUIT_SQUASH2 = 0x0c73,
	ITEMID_FRUIT_HONEYDEW_MELLON1 = 0x0c74,
	ITEMID_FRUIT_HONEYDEW_MELLON2 = 0x0c75,
	ITEMID_FRUIT_CARROT1 = 0x0c77,
	ITEMID_FRUIT_CARROT2 = 0x0c78,
	ITEMID_FRUIT_CANTALOPE1 = 0x0c79,
	ITEMID_FRUIT_CANTALOPE2 = 0x0c7a,
	ITEMID_FRUIT_CABBAGE1 = 0x0c7b,
	ITEMID_FRUIT_CABBAGE2 = 0x0c7c,
	ITEMID_FRUIT_CORN1 = 0x0c7f,
	ITEMID_FRUIT_CORN2 = 0x0c80,
	ITEMID_FRUIT_CORN3 = 0x0c81,
	ITEMID_FRUIT_CORN4 = 0x0c82,

	ITEMID_TREE_COCONUT = 0x0c95,
	ITEMID_TREE_DATE = 0x0c96,

	ITEMID_TREE_BANANA1 = 0x0ca8,
	ITEMID_TREE_BANANA2 = 0x0caa,
	ITEMID_TREE_BANANA3 = 0x0cab,

	ITEMID_TREE_LO = 0x0cca,
	ITEMID_TREE_HI = 0x0ce8,

	ITEMID_PLANT_GRAPE = 0x0d1a,	// fruit
	ITEMID_PLANT_GRAPE1 = 0x0d1b,
	ITEMID_PLANT_GRAPE2 = 0x0d1c,
	ITEMID_PLANT_GRAPE3 = 0x0d1d,
	ITEMID_PLANT_GRAPE4 = 0x0d1e,
	ITEMID_PLANT_GRAPE5 = 0x0d1f,
	ITEMID_PLANT_GRAPE6 = 0x0d20,
	ITEMID_PLANT_GRAPE7 = 0x0d21,
	ITEMID_PLANT_GRAPE8 = 0x0d22,
	ITEMID_PLANT_GRAPE9 = 0x0d23,
	ITEMID_PLANT_GRAPE10 = 0x0d24,

	ITEMID_FRUIT_TURNIP1 = 0x0d39,
	ITEMID_FRUIT_TURNIP2 = 0x0d3a,

	ITEMID_TREE2_LO = 0xd41,
	ITEMID_TREE2_HI = 0xd44,

	ITEMID_TREE3_LO = 0x0d57,
	ITEMID_TREE3_HI = 0x0d5b,

	ITEMID_TREE4_LO = 0x0d6e,
	ITEMID_TREE4_HI = 0x0d72,

	ITEMID_TREE5_LO = 0x0d84,
	ITEMID_TREE5_HI = 0x0d86,

	ITEMID_TREE_APPLE_BARK1 = 0x0d94,
	ITEMID_TREE_APPLE_EMPTY1 = 0x0d95,
	ITEMID_TREE_APPLE_FULL1 = 0x0d96,
	ITEMID_TREE_APPLE_FALL1 = 0x0d97,
	ITEMID_TREE_APPLE_BARK2 = 0x0d98,
	ITEMID_TREE_APPLE_EMPTY2 = 0x0d99,
	ITEMID_TREE_APPLE_FULL2 = 0x0d9a,
	ITEMID_TREE_APPLE_FALL2 = 0x0d9b,
	ITEMID_TREE_PEACH_BARK1 = 0x0d9c,
	ITEMID_TREE_PEACH_EMPTY1 = 0x0d9d,
	ITEMID_TREE_PEACH_FULL1 = 0x0d9e,
	ITEMID_TREE_PEACH_FALL1 = 0x0d9f,
	ITEMID_TREE_PEACH_BARK2 = 0x0da0,
	ITEMID_TREE_PEACH_EMPTY2 = 0x0da1,
	ITEMID_TREE_PEACH_FULL2 = 0x0da2,
	ITEMID_TREE_PEACH_FALL2 = 0x0da3,
	ITEMID_TREE_PEAR_BARK1 = 0x0da4,
	ITEMID_TREE_PEAR_EMPTY1 = 0x0da5,
	ITEMID_TREE_PEAR_FULL1 = 0x0da6,
	ITEMID_TREE_PEAR_FALL1 = 0x0da7,
	ITEMID_TREE_PEAR_BARK2 = 0x0da8,
	ITEMID_TREE_PEAR_EMPTY2 = 0x0da9,
	ITEMID_TREE_PEAR_FULL2 = 0x0daa,
	ITEMID_TREE_PEAR_FALL2 = 0x0dab,

	ITEMID_PLANT_WHEAT8 = 0x0dae,
	ITEMID_PLANT_WHEAT9 = 0x0daf,

	ITEMID_SIGN_BRASS_1 = 0x0bd1,
	ITEMID_SIGN_BRASS_2 = 0x0bd2,

	ITEMID_BED2_1 = 0x0db0,
	ITEMID_BED2_5 = 0x0db5,

	ITEMID_FISH_POLE1 = 0x0dbf,
	ITEMID_FISH_POLE2 = 0x0dc0,

	ITEMID_MOONGATE_RED = 0x0dda,

	ITEMID_FRUIT_COTTON = 0x0def,
	ITEMID_SCISSORS1 = 0x0dfc,
	ITEMID_SCISSORS2 = 0x0dfd,

	ITEMID_KINDLING1 = 0x0de1,
	ITEMID_KINDLING2 = 0x0de2,
	ITEMID_CAMPFIRE = 0x0de3,
	ITEMID_EMBERS = 0x0de9,

	ITEMID_WAND = 0x0df2,

	ITEMID_COTTON_RAW = 0x0def,
	ITEMID_WOOL = 0x0df8,
	ITEMID_COTTON = 0x0df9,
	ITEMID_FEATHERS2a = 0x0dfa,
	ITEMID_FEATHERS2b = 0x0dfb,

	ITEMID_GAME_BACKGAM = 0x0e1c,
	ITEMID_YARN1 = 0x0e1d,
	ITEMID_YARN2 = 0x0e1e,
	ITEMID_YARN3 = 0x0e1f,

	ITEMID_BANDAGES_BLOODY1 = 0x0e20,
	ITEMID_BANDAGES1 = 0x0e21,	// clean
	ITEMID_BANDAGES_BLOODY2 = 0x0e22,

	ITEMID_EMPTY_VIAL = 0x0e24,
	ITEMID_BOTTLE1_1 = 0x0e25,
	ITEMID_BOTTLE1_DYE = 0x0e27,
	ITEMID_BOTTLE1_8 = 0x0e2c,

	ITEMID_CRYSTAL_BALL1 = 0x0e2d,
	ITEMID_CRYSTAL_BALL4 = 0x0e30,

	ITEMID_SCROLL2_BLANK = 0x0e34,
	ITEMID_SCROLL2_B1 = 0x0e35,
	ITEMID_SCROLL2_B6 = 0x0e3a,
	ITEMID_SPELLBOOK2 = 0x0E3b,	// ??? looks like a spellbook but doesn open corectly !

	ITEMID_CRATE1 = 0x0e3c,	// n/s
	ITEMID_CRATE2 = 0x0e3d,	// e/w
	ITEMID_CRATE3 = 0x0e3e,
	ITEMID_CRATE4 = 0x0e3f,

	ITEMID_CHEST_METAL2_1 = 0x0e40,
	ITEMID_CHEST_METAL2_2 = 0x0e41,	// 2 tone chest.
	ITEMID_CHEST3 = 0x0e42,
	ITEMID_CHEST4 = 0x0e43,

	ITEMID_Cannon_Ball = 0x0e73,
	ITEMID_Cannon_Balls = 0x0e74,
	ITEMID_BACKPACK = 0x0E75,	// containers.
	ITEMID_BAG = 0x0E76,
	ITEMID_BARREL = 0x0E77,
	ITEMID_BASIN = 0x0e78,
	ITEMID_POUCH = 0x0E79,
	ITEMID_SBASKET = 0x0E7A,	// picknick basket
	ITEMID_CHEST_SILVER = 0x0E7C,	// all grey. BANK BOX
	ITEMID_BOX_WOOD2 = 0x0E7D,
	ITEMID_CRATE5 = 0x0E7E,
	ITEMID_KEG = 0x0E7F,
	ITEMID_BRASSBOX = 0x0E80,

	ITEMID_HERD_CROOK1 = 0x0E81,	// Shepherds Crook
	ITEMID_HERD_CROOK2 = 0x0e82,
	ITEMID_Pickaxe1 = 0x0e85,
	ITEMID_Pickaxe2 = 0x0e86,
	ITEMID_Pitchfork = 0x0e87,

	ITEMID_Cannon_N_1 = 0x0e8b,
	ITEMID_Cannon_N_3 = 0x0e8d,
	ITEMID_Cannon_W_1 = 0x0e8e,
	ITEMID_Cannon_W_3 = 0x0e90,
	ITEMID_Cannon_S_1 = 0x0e91,
	ITEMID_Cannon_S_3 = 0x0e93,
	ITEMID_Cannon_E_1 = 0x0e94,
	ITEMID_Cannon_E_3 = 0x0e96,

	ITEMID_MORTAR = 0x0e9b,

	ITEMID_MUSIC_DRUM = 0x0e9c,
	ITEMID_MUSIC_TAMB1,
	ITEMID_MUSIC_TAMB2,

	ITEMID_BBOARD_MSG = 0x0eb0,	// a message on the bboard

	ITEMID_MUSIC_HARP_S = 0x0eb1,
	ITEMID_MUSIC_HARP_L,
	ITEMID_MUSIC_LUTE1,
	ITEMID_MUSIC_LUTE2,

	ITEMID_SKELETON_1 = 0x0eca,
	ITEMID_SKELETON_2,
	ITEMID_SKELETON_3,
	ITEMID_SKELETON_4,
	ITEMID_SKELETON_5,
	ITEMID_SKELETON_6,
	ITEMID_SKELETON_7,
	ITEMID_SKELETON_8,
	ITEMID_SKELETON_9,

	ITEMID_GUILDSTONE1 = 0x0edd,
	ITEMID_GUILDSTONE2 = 0x0ede,

	ITEMID_WEB1_1 = 0x0ee3,
	ITEMID_WEB1_2 = 0x0ee4,
	ITEMID_WEB1_3 = 0x0ee5,
	ITEMID_WEB1_4 = 0x0ee6,

	ITEMID_BANDAGES2 = 0x0ee9,	// clean
	ITEMID_COPPER_C1 = 0x0eea,
	ITEMID_GOLD_C1 = 0x0eed,	// big pile
	ITEMID_GOLD_C2 = 0x0eee,
	ITEMID_GOLD_C3 = 0x0eef,
	ITEMID_SILVER_C1 = 0x0ef0,
	ITEMID_SILVER_C3 = 0x0ef2,

	ITEMID_SCROLL1_BLANK = 0x0ef3,
	ITEMID_SCROLL1_B1 = 0x0ef4,
	ITEMID_SCROLL1_B6 = 0x0ef9,
	ITEMID_SPELLBOOK = 0x0efa,

	ITEMID_BOTTLE2_1 = 0x0efb,
	ITEMID_BOTTLE2_DYE = 0x0eff,
	ITEMID_BOTTLE2_10 = 0x0f04,

	ITEMID_POTION_BLACK = 0x0f06,
	ITEMID_POTION_ORANGE,
	ITEMID_POTION_BLUE,
	ITEMID_POTION_WHITE,
	ITEMID_POTION_GREEN,
	ITEMID_POTION_RED,
	ITEMID_POTION_YELLOW,
	ITEMID_POTION_PURPLE = 0x0f0d,
	ITEMID_EMPTY_BOTTLE = 0x0f0e,

	ITEMID_GEM1 = 0x0f0f,
	ITEMID_GEMS = 0x0F20,
	ITEMID_GEML = 0x0F30,

	ITEMID_HAY = 0x0f36,	// sheif of hay.

	ITEMID_Shovel1 = 0x0f39,
	ITEMID_Shovel2 = 0x0f3a,
	ITEMID_Dung1 = 0x0f3b,
	ITEMID_Dung2 = 0x0f3c,

	ITEMID_FRUIT_HAY1 = 0x0f36,
	ITEMID_Arrow = 0x0f3f,	// Need these to use a bow.
	ITEMID_ArrowX = 0x0f42,
	ITEMID_DAGGER = 0x0F51,

	ITEMID_MOONGATE_BLUE = 0x0f6c,
	ITEMID_REAG_1 = 0x0f78,	// batwing

	ITEMID_REAG_BP = 0x0f7a,	// black pearl.
	ITEMID_REAG_BM = 0x0f7b,	//'Blood Moss'
	ITEMID_REAG_GA = 0x0f84,	//'Garlic'
	ITEMID_REAG_GI = 0x0f85,	//'Ginseng'
	ITEMID_REAG_MR = 0x0f86,	//'Mandrake Root'
	ITEMID_REAG_NS = 0x0f88,	//'Nightshade'
	ITEMID_REAG_SA = 0x0f8c,	//'Sulfurous Ash'
	ITEMID_REAG_SS = 0x0f8d,	//'Spider's Silk'

	ITEMID_REAG_26 = 0x0f91,	// Worms heart

	ITEMID_CLOTH_BOLT1 = 0x0f95,
	ITEMID_CLOTH_BOLT8 = 0x0f9c,
	ITEMID_SEWINGKIT = 0x0f9d,
	ITEMID_SCISSORS3 = 0x0f9e,
	ITEMID_SCISSORS4 = 0x0f9f,
	ITEMID_THREAD1 = 0x0fa0,
	ITEMID_THREAD2 = 0x0fa1,

	ITEMID_GAME_BOARD = 0x0fa6,
	ITEMID_GAME_DICE = 0x0fa7,

	ITEMID_DYE = 0x0FA9,
	ITEMID_DYEVAT = 0x0FAB,
	ITEMID_GAME_BACKGAM_2 = 0x0fad,
	ITEMID_BARREL_2 = 0x0FAE,
	ITEMID_ANVIL1 = 0x0FAF,
	ITEMID_ANVIL2 = 0x0FB0,
	ITEMID_FORGE_1 = 0x0FB1,

	ITEMID_BOOK1 = 0x0fbd,
	ITEMID_BOOK2 = 0x0fbe,

	ITEMID_BOOK3 = 0x0fef,
	ITEMID_BOOK8 = 0x0ff4,

	ITEMID_PITCHER_WATER = 0x0ff8,

	ITEMID_ARCHERYBUTTE_E = 0x100a,
	ITEMID_ARCHERYBUTTE_S = 0x100b,

	ITEMID_FRUIT_HAY2 = 0x100c,
	ITEMID_FRUIT_HAY3 = 0x100d,

	ITEMID_KEY_COPPER = 0x100e,
	// ...
	ITEMID_KEY_RING0 = 0x1011,
	ITEMID_KEY_MAGIC = 0x1012,
	ITEMID_KEY_RUSTY = 0x1013,

	ITEMID_SPINWHEEL1 = 0x1015,
	ITEMID_SPINWHEEL2 = 0x1019,
	ITEMID_WOOL2 = 0x101f,

	ITEMID_SHAFTS3a = 0x1024,
	ITEMID_SHAFTS3b = 0x1025,

	ITEMID_CHISELS_1 = 0x1026,
	ITEMID_CHISELS_2 = 0x1027,
	ITEMID_DOVETAIL_SAW_1 = 0x1028,
	ITEMID_DOVETAIL_SAW_2 = 0x1029,
	ITEMID_HAMMER_1 = 0x102a,
	ITEMID_HAMMER_2 = 0x102b,
	ITEMID_SAW_1 = 0x1034,
	ITEMID_SAW_2 = 0x1035,

	ITEMID_FOOD_BREAD = 0x103b,
	ITEMID_FOOD_DOUGH_RAW = 0x103d,
	ITEMID_FOOD_COOKIE_RAW = 0x103f,
	ITEMID_FLOUR = 0x1039,
	ITEMID_FOOD_PIZZA = 0x1040,
	ITEMID_FOOD_PIE = 0x1041,
	ITEMID_FOOD_PIE_RAW = 0x1042,

	ITEMID_CLOCK1 = 0x104B,
	ITEMID_CLOCK2 = 0x104C,

	ITEMID_SEXTANT_1 = 0x1057,
	ITEMID_SEXTANT_2 = 0x1058,
	ITEMID_LOOM1 = 0x105f,
	ITEMID_LOOM2 = 0x1063,

	ITEMID_LEATHER_1 = 0x1067,
	ITEMID_LEATHER_2 = 0x1068,

	ITEMID_DUMMY1 = 0x1070,	// normal training dummy.
	ITEMID_FX_DUMMY1 = 0x1071,
	ITEMID_DUMMY2 = 0x1074,
	ITEMID_FX_DUMMY2 = 0x1075,

	ITEMID_HIDES = 0x1078,
	ITEMID_HIDES_2 = 0x1079,
	ITEMID_FOOD_PIZZA_RAW = 0x1083,

	ITEMID_WEB2_1 = 0x10b8,
	ITEMID_WEB2_x = 0x10d7,

	ITEMID_TRAP_FACE1 = 0x10f5,
	ITEMID_TRAP_FX_FACE1 = 0x10f6,
	ITEMID_TRAP_FACE2 = 0x10fc,
	ITEMID_TRAP_FX_FACE2 = 0x10fd,

	ITEMID_FX_SPARKLES = 0x1153,	// magic sparkles.

	ITEMID_GRAVE_1 = 0x1165,
	ITEMID_GRAVE_32 = 0x1184,

	ITEMID_TRAP_CRUMBLEFLOOR = 0x11c0,

	ITEMID_BED3_1 = 0x11ce,
	ITEMID_BED3_X = 0x11d5,

	ITEMID_FURS = 0x11fa,

	ITEMID_BLOOD1 = 0x122a,
	ITEMID_BLOOD2 = 0x122b,
	ITEMID_BLOOD3 = 0x122c,
	ITEMID_BLOOD4 = 0x122d,
	ITEMID_BLOOD5 = 0x122e,
	ITEMID_BLOOD6 = 0x122f,

	ITEMID_ROCK_B_LO = 0x134f,	// boulder.
	ITEMID_ROCK_B_HI = 0x1362,
	ITEMID_ROCK_2_LO = 0x1363,
	ITEMID_ROCK_2_HI = 0x136d,

	ITEMID_BOW1 = 0x13b1,
	ITEMID_BOW2,

	ITEMID_SMITH_HAMMER = 0x13E4,

	ITEMID_HERD_CROOK3 = 0x13f4,
	ITEMID_HERD_CROOK4 = 0x13f5,

	ITEMID_BEE_WAX = 0x1423,
	ITEMID_GRAIN = 0x1449,

	ITEMID_BONE_ARMS = 0x144e,
	ITEMID_BONE_ARMOR = 0x144f,
	ITEMID_BONE_GLOVES = 0x1450,
	ITEMID_BONE_HELM = 0x1451,
	ITEMID_BONE_LEGS = 0x1452,

	ITEMID_TELESCOPE1 = 0x1459,	// Big telescope
	ITEMID_TELESCOPEX = 0x149a,

	ITEMID_MAP = 0x14EB,
	ITEMID_MAP_2 = 0x14ec,

	ITEMID_DEED1 = 0x14ef,
	ITEMID_DEED2 = 0x14f0,
	ITEMID_SHIP_PLANS1 = 0x14f1,
	ITEMID_SHIP_PLANS2 = 0x14f2,

	ITEMID_SPYGLASS_1 = 0x14f5,
	ITEMID_SPYGLASS_2 = 0x14f6,

	ITEMID_LOCKPICK1 = 0x14fb,
	ITEMID_LOCKPICK4 = 0x14fe,

	ITEMID_SHIRT1 = 0x1517,
	ITEMID_PANTS1 = 0x152E,
	ITEMID_PANTS_FANCY = 0x1539,

	ITEMID_HELM_BEAR = 0x1545,
	ITEMID_HELM_DEER = 0x1547,
	ITEMID_MASK_TREE = 0x1549,
	ITEMID_MASK_VOODOO = 0x154b,

	ITEMID_FOOD_LEG1_RAW = 0x1607,
	ITEMID_FOOD_LEG1 = 0x1608,
	ITEMID_FOOD_LEG2_RAW = 0x1609,
	ITEMID_FOOD_LEG2 = 0x160a,

	ITEMID_FOOD_COOKIES = 0x160b,
	ITEMID_BLOOD_SPLAT = 0x1645,

	ITEMID_LIGHT_SRC = 0x1647,

	ITEMID_WHIP1 = 0x166e,
	ITEMID_WHIP2 = 0x166f,

	ITEMID_SANDALS = 0x170d,
	ITEMID_SHOES = 0x170F,

	ITEMID_HAT_WIZ = 0x1718,
	ITEMID_HAT_JESTER = 0x171c,

	ITEMID_FRUIT_BANANA1 = 0x171f,
	ITEMID_FRUIT_BANANA2 = 0x1720,
	ITEMID_FRUIT_COCONUT2 = 0x1723,
	ITEMID_FRUIT_COCONUT3 = 0x1724,
	ITEMID_FRUIT_COCONUT1 = 0x1726,
	ITEMID_FRUIT_DATE1 = 0x1727,
	ITEMID_FRUIT_LEMON = 0x1728,
	ITEMID_FRUIT_LIME = 0x172a,
	ITEMID_FRUIT_PEACH2 = 0x172c,
	ITEMID_FRUIT_PEAR = 0x172d,

	ITEMID_CLOTH1 = 0x175d,
	ITEMID_CLOTH8 = 0x1764,

	ITEMID_KEY_RING1 = 0x1769,
	ITEMID_KEY_RING3 = 0x176a,
	ITEMID_KEY_RING5 = 0x176b,

	ITEMID_ROCK_3_LO = 0x1771,
	ITEMID_ROCK_3_HI = 0x177c,

	ITEMID_ALCH_SYM_1 = 0x181d,
	ITEMID_ALCH_SYM_2 = 0x181e,
	ITEMID_ALCH_SYM_3 = 0x181f,
	ITEMID_ALCH_SYM_4 = 0x1820,
	ITEMID_ALCH_SYM_5 = 0x1821,
	ITEMID_ALCH_SYM_6 = 0x1822,
	ITEMID_ALCH_SYM_7 = 0x1823,
	ITEMID_ALCH_SYM_8 = 0x1824,
	ITEMID_ALCH_SYM_9 = 0x1825,
	ITEMID_ALCH_SYM_10 = 0x1826,
	ITEMID_ALCH_SYM_11 = 0x1827,
	ITEMID_ALCH_SYM_12 = 0x1828,
    ITEMID_SKULL_CANDLE = 0x1853,

	ITEMID_FRUIT_MANDRAKE_ROOT1 = 0x18dd,
	ITEMID_FRUIT_MANDRAKE_ROOT2 = 0x18de,

	ITEMID_PLANT_MANDRAKE1 = 0x18df,
	ITEMID_PLANT_MANDRAKE2 = 0x18e0,
	ITEMID_PLANT_GARLIC1 = 0x18e1,
	ITEMID_PLANT_GARLIC2 = 0x18e2,
	ITEMID_FRUIT_GARLIC1 = 0x18e3,
	ITEMID_FRUIT_GARLIC2 = 0x18e4,
	ITEMID_PLANT_NIGHTSHADE1 = 0x18e5,
	ITEMID_PLANT_NIGHTSHADE2 = 0x18e6,
	ITEMID_FRUIT_NIGHTSHADE1 = 0x18e7,
	ITEMID_FRUIT_NIGHTSHADE2 = 0x18e8,
	ITEMID_PLANT_GENSENG1 = 0x18e9,
	ITEMID_PLANT_GENSENG2 = 0x18ea,
	ITEMID_FRUIT_GENSENG1 = 0x18eb,
	ITEMID_FRUIT_GENSENG2 = 0x18ec,

	ITEMID_Keg2 = 0x1940,

	ITEMID_MONGBATTARGET_S = 0x1950,

	ITEMID_BELLOWS_1 = 0x197a,
	ITEMID_BELLOWS_2 = 0x197b,
	ITEMID_BELLOWS_3 = 0x197c,
	ITEMID_BELLOWS_4 = 0x197d,
	ITEMID_FORGE_2 = 0x197e,
	ITEMID_FORGE_3 = 0x197f,
	ITEMID_FORGE_4 = 0x1980,
	ITEMID_FORGE_5 = 0x1981,
	ITEMID_FORGE_6 = 0x1982,
	ITEMID_FORGE_7 = 0x1983,
	ITEMID_FORGE_8 = 0x1984,
	ITEMID_FORGE_9 = 0x1985,
	ITEMID_BELLOWS_5 = 0x1986,
	ITEMID_BELLOWS_6 = 0x1987,
	ITEMID_BELLOWS_7 = 0x1988,
	ITEMID_BELLOWS_8 = 0x1989,
	ITEMID_FORGE_10 = 0x198a,
	ITEMID_FORGE_11 = 0x198b,
	ITEMID_FORGE_12 = 0x198c,
	ITEMID_FORGE_13 = 0x198d,
	ITEMID_FORGE_14 = 0x198e,
	ITEMID_FORGE_15 = 0x198f,
	ITEMID_FORGE_16 = 0x1990,
	ITEMID_FORGE_17 = 0x1991,
	ITEMID_BELLOWS_9 = 0x1992,
	ITEMID_BELLOWS_10 = 0x1993,
	ITEMID_BELLOWS_11 = 0x1994,
	ITEMID_BELLOWS_12 = 0x1995,
	ITEMID_FORGE_18 = 0x1996,
	ITEMID_FORGE_19 = 0x1997,
	ITEMID_FORGE_20 = 0x1998,
	ITEMID_FORGE_21 = 0x1999,
	ITEMID_FORGE_22 = 0x199a,
	ITEMID_FORGE_23 = 0x199b,
	ITEMID_FORGE_24 = 0x199c,
	ITEMID_FORGE_25 = 0x199d,
	ITEMID_BELLOWS_13 = 0x199e,
	ITEMID_BELLOWS_14 = 0x199f,
	ITEMID_BELLOWS_15 = 0x19a0,
	ITEMID_BELLOWS_16 = 0x19a1,
	ITEMID_FORGE_26 = 0x19a2,
	ITEMID_FORGE_27 = 0x19a3,
	ITEMID_FORGE_28 = 0x19a4,
	ITEMID_FORGE_29 = 0x19a5,
	ITEMID_FORGE_30 = 0x19a6,
	ITEMID_FORGE_31 = 0x19a7,
	ITEMID_FORGE_32 = 0x19a8,
	ITEMID_FORGE_33 = 0x19a9,

	ITEMID_FIRE = 0x19ab,

	ITEMID_ORE_1 = 0x19b7, // can't mine this, it's just leftover from smelting
	ITEMID_ORE_3 = 0x19b8,
	ITEMID_ORE_4 = 0x19b9,
	ITEMID_ORE_2 = 0x19ba,

	ITEMID_PLANT_HAY1 = 0x1a92,
	ITEMID_PLANT_HAY2,
	ITEMID_PLANT_HAY3,
	ITEMID_PLANT_HAY4,
	ITEMID_PLANT_HAY5 = 0x1a96,

	ITEMID_PLANT_FLAX1 = 0x1a99,
	ITEMID_PLANT_FLAX2 = 0x1a9a,
	ITEMID_PLANT_FLAX3 = 0x1a9b,

	ITEMID_FRUIT_FLAX1 = 0x1a9c,
	ITEMID_FRUIT_FLAX2 = 0x1a9d,
	ITEMID_FRUIT_HOPS = 0x1aa2,

	ITEMID_PLANT_HOPS1 = 0x1a9e,
	ITEMID_PLANT_HOPS2 = 0x1a9f,
	ITEMID_PLANT_HOPS3 = 0x1aa0,
	ITEMID_PLANT_HOPS4 = 0x1aa1,

	ITEMID_MOONGATE_FX_RED = 0x1ae5,
	ITEMID_MOONGATE_FX_BLUE = 0x1af3,

	ITEMID_LEAVES1 = 0x1b1f,
	ITEMID_LEAVES2 = 0x1b20,
	ITEMID_LEAVES3 = 0x1b21,
	ITEMID_LEAVES4 = 0x1b22,

	ITEMID_HOLE = 0x1b71,

	ITEMID_FEATHERS1 = 0x1bd1,
	ITEMID_FEATHERS3 = 0x1bd2,
	ITEMID_FEATHERS6 = 0x1bd3,
	ITEMID_SHAFTS1 = 0x1bd4,
	ITEMID_SHAFTS3 = 0x1bd5,
	ITEMID_SHAFTSX = 0x1bd6,
	ITEMID_BOARD1 = 0x1bd7,	// boards

	ITEMID_LOG_1 = 0x1bdd,
	ITEMID_LOG_2 = 0x1bde,
	ITEMID_LOG_3 = 0x1bdf,
	ITEMID_LOG_4 = 0x1be0,
	ITEMID_LOG_5 = 0x1be1,
	ITEMID_LOG_6 = 0x1be2,

	ITEMID_INGOT_COPPER = 0x1be3,
	ITEMID_INGOT_GOLD = 0x1be9,
	ITEMID_INGOT_IRON = 0x1bef,
	ITEMID_INGOT_SILVER = 0x1bf5,	//
	ITEMID_INGOTX = 0x1BFA,
	ITEMID_XBolt = 0x1bfb,
	ITEMID_XBoltX = 0x1BFE,

	ITEMID_PICKPOCKET_NS2 = 0x1e2c,
	ITEMID_PICKPOCKET_EW2 = 0x1e2d,

	ITEMID_Bulletin1 = 0x1e5e,	// secure trades are here also. bboard
	ITEMID_Bulletin2 = 0x1e5f,
	ITEMID_WorldGem = 0x1ea7,	// typically an uninitialized spawn item
	ITEMID_WorldGem_lg = 0x1f13,	// typically an initialized t_spawn_item

	ITEMID_PICKPOCKET_NS = 0x1ec0,
	ITEMID_PICKPOCKET_NS_FX,
	ITEMID_PICKPOCKET_EW = 0x1ec3,
	ITEMID_PICKPOCKET_EW_FX,

	ITEMID_GEM_LIGHT1 = 0x1ecd,
	ITEMID_GEM_LIGHT6 = 0x1ed2,

	ITEMID_DOOR_MAGIC_SI_NS = 0x1ed9,
	ITEMID_DOOR_MAGIC_GR_NS = 0x1ee2,
	ITEMID_DOOR_MAGIC_SI_EW = 0x1EEc,	// not 1eeb
	ITEMID_DOOR_MAGIC_GR_EW = 0x1ef4,

	ITEMID_ROBE = 0x1F03,
	ITEMID_RECALLRUNE = 0x1f14,

	ITEMID_BEDROLL_O_W = 0x1f24,	// open
	ITEMID_BEDROLL_O_E,
	ITEMID_BEDROLL_O_N,
	ITEMID_BEDROLL_O_S = 0x1f27,

	ITEMID_SCROLL_1 = 0x1f2d,	// Reactive armor.
	ITEMID_SCROLL_2,
	ITEMID_SCROLL_3,
	ITEMID_SCROLL_4,
	ITEMID_SCROLL_5,
	ITEMID_SCROLL_6,
	ITEMID_SCROLL_7,
	ITEMID_SCROLL_8,
	ITEMID_SCROLL_64 = 0x1f6c,	// summon water

	ITEMID_SCROLL_A = 0x1f6d,
	ITEMID_SCROLL_B = 0x1f6e,
	ITEMID_SCROLL_C = 0x1f6f,
	ITEMID_SCROLL_D = 0x1f70,
	ITEMID_SCROLL_E = 0x1f71,
	ITEMID_SCROLL_F = 0x1f72,

	ITEMID_BOOZE_LIQU_G1 = 0x1f85,
	ITEMID_BOOZE_LIQU_G2 = 0x1f86,
	ITEMID_BOOZE_LIQU_G3 = 0x1f87,
	ITEMID_BOOZE_LIQU_G4 = 0x1f88,
	ITEMID_BOOZE_WINE_G1 = 0x1f8d,
	ITEMID_BOOZE_WINE_G2 = 0x1f8e,
	ITEMID_BOOZE_WINE_G3 = 0x1f8f,
	ITEMID_BOOZE_WINE_G4 = 0x1f90,
	ITEMID_BOOZE_ALE_P1 = 0x1f95,
	ITEMID_BOOZE_ALE_P2 = 0x1f96,
	ITEMID_BOOZE_LIQU_P1 = 0x1f99,
	ITEMID_BOOZE_LIQU_P2 = 0x1f9a,
	ITEMID_BOOZE_WINE_P1 = 0x1f9b,
	ITEMID_BOOZE_WINE_P2 = 0x1f9c,

	ITEMID_DOOR_BAR_METAL = 0x1fed,

	ITEMID_CORPSE = 0x2006,	// This is all corpses.

	ITEMID_MEMORY = 0x2007,	// NonGen Marker.

	ITEMID_HAIR_SHORT = 0x203B,
	ITEMID_HAIR_LONG = 0x203C,
	ITEMID_HAIR_PONYTAIL = 0x203D,
	ITEMID_HAIR_MOHAWK = 0x2044,
	ITEMID_HAIR_PAGEBOY = 0x2045,
	ITEMID_HAIR_BUNS = 0x2046,
	ITEMID_HAIR_AFRO = 0x2047,
	ITEMID_HAIR_RECEDING = 0x2048,
	ITEMID_HAIR_2_PIGTAILS = 0x2049,
	ITEMID_HAIR_TOPKNOT = 0x204A,	// KRISNA

	ITEMID_BEARD_LONG = 0x203E,
	ITEMID_BEARD_SHORT = 0x203F,
	ITEMID_BEARD_GOATEE = 0x2040,
	ITEMID_BEARD_MOUSTACHE = 0x2041,
	ITEMID_BEARD_SH_M = 0x204B,
	ITEMID_BEARD_LG_M = 0x204C,
	ITEMID_BEARD_GO_M = 0x204D,	// VANDYKE

	ITEMID_DEATHSHROUD = 0x204E,
	ITEMID_GM_ROBE = 0x204f,

	ITEMID_RHAND_POINT_NW = 0x2053,	// point nw on the map.
	ITEMID_RHAND_POINT_W = 0x205a,

	ITEMID_HAND_POINT_NW = 0x206a,	// point nw on the map.
	ITEMID_HAND_POINT_W = 0x2071,

	ITEMID_SPELL_1 = 0x2080,
	ITEMID_SPELL_6 = 0x2085,	// light or night sight.
	ITEMID_SPELL_64 = 0x20bf,

	ITEMID_SPELL_CIRCLE1 = 0x20c0,
	ITEMID_SPELL_CIRCLE8 = 0x20c7,

	// Item equiv of creatures.
	ITEMID_TRACK_BEGIN = 0x20c8,
	ITEMID_TRACK_ETTIN = 0x20c8,
	ITEMID_TRACK_MAN_NAKED = 0x20cd,
	ITEMID_TRACK_ELEM_EARTH = 0x20d7,
	ITEMID_TRACK_OGRE = 0x20df,
	ITEMID_TRACK_TROLL = 0x20e9,
	ITEMID_TRACK_ELEM_AIR = 0x20ed,
	ITEMID_TRACK_ELEM_FIRE = 0x20f3,
	ITEMID_TRACK_SEASERP = 0x20fe,
	ITEMID_TRACK_WISP = 0x2100,
	ITEMID_TRACK_MAN = 0x2106,
	ITEMID_TRACK_WOMAN = 0x2107,
	ITEMID_TRACK_ELEM_WATER = 0x210b,
	ITEMID_TRACK_HORSE = 0x2120,
	ITEMID_TRACK_RABBIT = 0x2125,
	ITEMID_TRACK_PACK_HORSE = 0x2126,
	ITEMID_TRACK_PACK_LLAMA = 0x2127,
	ITEMID_TRACK_END = 0x213e,
	ITEMID_DOOR_WOOD_BLACK = 0x2420,

	ITEMID_DOOR_SLIDING_2 = 0x2a05,

	ITEMID_VENDOR_BOX = 0x2af8, // Vendor container
	ITEMID_DOOR_ELVEN_BARK = 0x31ac,
	ITEMID_DOOR_ELVEN_SIMPLE = 0x2d63,
	ITEMID_DOOR_ELVEN_ORNATE = 0x2d67,
	ITEMID_DOOR_ELVEN_PLAIN = 0x2d6F,

	ITEMID_SPININGWHEEL_ELVEN_S = 0x2DD9,
	ITEMID_SPININGWHEEL_ELVEN_E = 0x2DDA,

	ITEMID_SPININGWHEEL_ELVEN_S_ANIMATED = 0x2e3c,
	ITEMID_SPININGWHEEL_ELVEN_E_ANIMATED = 0x2e3e,

	// ML hair
	ITEMID_HAIR_ML_ELF = 0x2fbf,
	ITEMID_HAIR_ML_LFEAT = 0x2fc0,
	ITEMID_HAIR_ML_SHORT = 0x2fc1,
	ITEMID_HAIR_ML_MULLET = 0x2fc2,
	ITEMID_HAIR_ML_FLOWER = 0x2fcc,
	ITEMID_HAIR_ML_LONG2 = 0x2fcd,
	ITEMID_HAIR_ML_LONG3 = 0x2fce,
	ITEMID_HAIR_ML_BRAID = 0x2fcf,
	ITEMID_HAIR_ML_LONG4 = 0x2fd0,
	ITEMID_HAIR_ML_SPYKE = 0x2fd1,
	ITEMID_DOOR_MOON = 0x2fe4,

	ITEMID_DIRT_TILE = 0x31f4,

	ITEMID_ROCK_4_LO = 0x3421,
	ITEMID_ROCK_4_HI = 0x3435,
	ITEMID_ROCK_5_LO = 0x3486,
	ITEMID_ROCK_5_HI = 0x348f,
	ITEMID_ROCK_6_LO = 0x34ac,
	ITEMID_ROCK_6_HI = 0x34b4,

	// effects and games.
	ITEMID_FX_SPLASH = 0x352d,

	ITEMID_GAME1_CHECKER = 0x3584,	// white
	ITEMID_GAME1_BISHOP = 0x3585,
	ITEMID_GAME1_ROOK = 0x3586,
	ITEMID_GAME1_QUEEN = 0x3587,
	ITEMID_GAME1_KNIGHT = 0x3588,
	ITEMID_GAME1_PAWN = 0x3589,
	ITEMID_GAME1_KING = 0x358a,

	ITEMID_GAME2_CHECKER = 0x358b,	// brown
	ITEMID_GAME2_BISHOP = 0x358c,
	ITEMID_GAME2_ROOK = 0x358d,
	ITEMID_GAME2_QUEEN = 0x358e,
	ITEMID_GAME2_KNIGHT = 0x358f,
	ITEMID_GAME2_PAWN = 0x3590,
	ITEMID_GAME2_KING = 0x3591,

	ITEMID_GAME_HI = 0x35a1,	// ?
	ITEMID_DOOR_CRYSTAL = 0x367b,
	ITEMID_DOOR_SHADOW = 0x368b,

	ITEMID_FX_EXPLODE_3 = 0x36b0,
	ITEMID_FX_EXPLODE_1 = 0x36ca,
	ITEMID_FX_FIRE_BALL = 0x36d4,
	ITEMID_FX_MAGIC_ARROW = 0x36e4,
	ITEMID_FX_FIRE_BOLT = 0x36f4, // fire snake
	ITEMID_FX_FLAMESTRIKE = 0x3709,
	ITEMID_FX_TELE_VANISH = 0x3728,	// teleport vanish
	ITEMID_FX_SPELL_FAIL = 0x3735,
	ITEMID_FX_BLESS_EFFECT = 0x373a,
	ITEMID_FX_CURSE_EFFECT = 0x374a,
	ITEMID_FX_SPARKLE = 0x375a,
	ITEMID_FX_HEAL_EFFECT = 0x376a,
	ITEMID_FX_SPARKLE_2 = 0x3779,
	ITEMID_FX_ENERGY_BOLT = 0x379f,
	ITEMID_FX_GLOW = 0x37b9,
	ITEMID_FX_POISON_F_EW = 0x3915,
	ITEMID_FX_POISON_F_NS = 0x3920,
	ITEMID_FX_ENERGY_F_EW = 0x3947,
	ITEMID_FX_ENERGY_F_NS = 0x3956,
	ITEMID_FX_PARA_F_EW = 0x3967,
	ITEMID_FX_PARA_F_NS = 0x3979,
	ITEMID_FX_FIRE_F_EW = 0x398c,	// E/W
	ITEMID_FX_FIRE_F_NS = 0x3996,	// N/S

	ITEMID_FACE_1				= 0x3B44,
	ITEMID_FACE_2				= 0x3B45,
	ITEMID_FACE_3				= 0x3B46,
	ITEMID_FACE_4				= 0x3B47,
	ITEMID_FACE_5				= 0x3B48,
	ITEMID_FACE_6				= 0x3B49,
	ITEMID_FACE_7				= 0x3B4A,
	ITEMID_FACE_8				= 0x3B4B,
	ITEMID_FACE_9				= 0x3B4C,
	ITEMID_FACE_10				= 0x3B4D,
	ITEMID_FACE_ANIME			= 0x3B4E,
	ITEMID_FACE_HELLIAN			= 0x3B4F,
	ITEMID_FACE_JUKA			= 0x3B50,
	ITEMID_FACE_UNDEAD			= 0x3B51,
	ITEMID_FACE_MEER			= 0x3B52,
	ITEMID_FACE_ELDER			= 0x3B53,
	ITEMID_FACE_ORC				= 0x3B54,
	ITEMID_FACE_PIRATE			= 0x3B55,
	ITEMID_FACE_NATIVE_PAPUAN	= 0x3B56,
	ITEMID_FACE_VAMPIRE			= 0x3B57,

	ITEMID_SHIP_TILLER_1 = 0x3e4a,
	ITEMID_SHIP_TILLER_2 = 0x3e4b,
	ITEMID_SHIP_TILLER_3 = 0x3e4c,
	ITEMID_SHIP_TILLER_4 = 0x3e4d,
	ITEMID_SHIP_TILLER_5 = 0x3e4e,
	ITEMID_SHIP_TILLER_6,
	ITEMID_SHIP_TILLER_7 = 0x3e50,
	ITEMID_SHIP_TILLER_8,
	ITEMID_SHIP_TILLER_12 = 0x3e55,

	ITEMID_SHIP_PLANK_S2_O = 0x3e84,
	ITEMID_SHIP_PLANK_S2_C = 0x3e85,
	ITEMID_SHIP_PLANK_S_O = 0x3e86,
	ITEMID_SHIP_PLANK_S_C = 0x3e87,
	ITEMID_SHIP_PLANK_N_O = 0x3e89,
	ITEMID_SHIP_PLANK_N_C = 0x3e8a,
	ITEMID_SHIP_PILOT = 0x3e96,

	ITEMID_M_HORSE1 = 0x3E9F,	// horse item when ridden
	ITEMID_M_HORSE2 = 0x3EA0,
	ITEMID_M_HORSE3 = 0x3EA1,
	ITEMID_M_HORSE4 = 0x3EA2,
	ITEMID_M_OSTARD_DES = 0x3ea3,	// t2A
	ITEMID_M_OSTARD_Frenz = 0x3ea4,	// t2A
	ITEMID_M_OSTARD_For = 0x3ea5,	// t2A
	ITEMID_M_LLAMA = 0x3ea6,	// t2A

	ITEMID_SHIP_PLANK_E_C = 0x3ea9,
	ITEMID_SHIP_PLANK_W_C = 0x3eb1,
	ITEMID_SHIP_PLANK_E2_C = 0x3eb2,
	ITEMID_SHIP_PLANK_E_O = 0x3ed3,
	ITEMID_SHIP_PLANK_E2_O = 0x3ed4,
	ITEMID_SHIP_PLANK_W_O = 0x3ed5,

	ITEMID_SHIP_HATCH_E = 0x3e65,	// for an east bound ship.
	ITEMID_SHIP_HATCH_W = 0x3e93,
	ITEMID_SHIP_HATCH_N = 0x3eae,
	ITEMID_SHIP_HATCH_S = 0x3eb9,

	ITEMID_CORPSE_1 = 0x3d64,	// 'dead orc captain'
	ITEMID_CORPSE_2,	// 'corpse of orc'
	ITEMID_CORPSE_3,	// 'corpse of skeleton
	ITEMID_CORPSE_4,	// 'corpse'
	ITEMID_CORPSE_5,	// 'corpse'
	ITEMID_CORPSE_6,	// 'deer corpse'
	ITEMID_CORPSE_7,	// 'wolf corpse'
	ITEMID_CORPSE_8,	// 'corpse of rabbit'

	ITEMID_HEALING_STONE		= 0x4078,
	ITEMID_DOOR_GARGISH_GREEN	= 0x409B,

	ITEMID_DOOR_GARGISH_BROWN	= 0x410C,
	ITEMID_DOOR_SUN				= 0x41C2,
	ITEMID_DOOR_GARGISH_GREY	= 0x41CF,

	ITEMID_DOOR_QUEEN			= 0x4D1A,

	ITEMID_GARG_HORN_1 = 0x4258,
	ITEMID_GARG_HORN_2 = 0x4259,
	ITEMID_GARG_HORN_3 = 0x425A,
	ITEMID_GARG_HORN_4 = 0x425B,
	ITEMID_GARG_HORN_5 = 0x425C,
	ITEMID_GARG_HORN_6 = 0x425D,
	ITEMID_GARG_HORN_7 = 0x425E,
	ITEMID_GARG_HORN_8 = 0x425F,
	ITEMID_GARG_HORN_FEMALE_1 = 0x4261,
	ITEMID_GARG_HORN_FEMALE_2 = 0x4262,
	ITEMID_GARG_HORN_FEMALE_3 = 0x4273,
	ITEMID_GARG_HORN_FEMALE_4 = 0x4274,
	ITEMID_GARG_HORN_FEMALE_5 = 0x4275,
	ITEMID_GARG_HORN_FEMALE_6 = 0x42AA,
	ITEMID_GARG_HORN_FEMALE_7 = 0x42AB,
	ITEMID_GARG_HORN_FACIAL_1 = 0x42AD,
	ITEMID_GARG_HORN_FACIAL_2 = 0x42AE,
	ITEMID_GARG_HORN_FACIAL_3 = 0x42AF,
	ITEMID_GARG_HORN_FACIAL_4 = 0x42B0,
	ITEMID_GARG_HORN_FEMALE_8 = 0x42B1,

	ITEMID_DOOR_GARGISH_SET		= 0x436E,
	ITEMID_DOOR_RUINED			= 0x46DD,		
	ITEMID_DOOR_GARGISH_BLUE	= 0x4D1A,		
	ITEMID_DOOR_GARGISH_RED		= 0x50C8,		
	ITEMID_DOOR_GARGISH_PRISON	= 0x5142,

	ITEMID_FACE_1_GARG			= 0x5679,
	ITEMID_FACE_2_GARG			= 0x567A,
	ITEMID_FACE_3_GARG			= 0x567B,
	ITEMID_FACE_4_GARG			= 0x567C,
	ITEMID_FACE_5_GARG			= 0x567D,
	ITEMID_FACE_6_GARG			= 0x567E,

	ITEMID_DOOR_JUNGLE = 0x9AD7,
	ITEMID_DOOR_SHADOWGUARD = 0x9B3C,

	// Large composite objects here.
	ITEMID_MULTI_LEGACY = 0x4000, // ITEMID_MULTI for old clients (<7.0.0.0)
	ITEMID_MULTI_SA = 0x8000, // ITEMID_MULTI for sa clients (<7.0.8.44)
	ITEMID_MULTI = 0x10000,
	
    ITEMID_SHIP_SMALL_N			= ITEMID_MULTI + 0x0,
	ITEMID_SHIP_SMALL_DRAG_N	= ITEMID_MULTI + 0x4,
	ITEMID_SHIP_MEDIUM_N		= ITEMID_MULTI + 0x8,
	ITEMID_SHIP_MEDIUM_DRAG_N	= ITEMID_MULTI + 0xC,
	ITEMID_SHIP_LARGE_N			= ITEMID_MULTI + 0x10,
	ITEMID_SHIP_LARGE_DRAG_N	= ITEMID_MULTI + 0x14,
	ITEMID_GALLEON_ORC1_N		= ITEMID_MULTI + 0x18,
	ITEMID_GALLEON_ORC2_N		= ITEMID_MULTI + 0x1C,
	ITEMID_GALLEON_ORC3_N		= ITEMID_MULTI + 0x20,
	ITEMID_GALLEON_GARG1_N		= ITEMID_MULTI + 0x24,
	ITEMID_GALLEON_GARG2_N		= ITEMID_MULTI + 0x28,
	ITEMID_GALLEON_GARG3_N		= ITEMID_MULTI + 0x2C,
	ITEMID_GALLEON_TOKUNO1_N	= ITEMID_MULTI + 0x30,
	ITEMID_GALLEON_TOKUNO2_N	= ITEMID_MULTI + 0x34,
	ITEMID_GALLEON_TOKUNO3_N	= ITEMID_MULTI + 0x38,
	ITEMID_ROWBOAT_N			= ITEMID_MULTI + 0x3C,
	ITEMID_GALLEON_BRIT1_N		= ITEMID_MULTI + 0x40,
	ITEMID_GALLEON_BRIT2_W		= ITEMID_MULTI + 0x47,  // last ship

	ITEMID_HOUSE_SMALL_ST_PL    = ITEMID_MULTI + 0x64,
	ITEMID_HOUSE_FORGE          = ITEMID_MULTI + 0x65,
	ITEMID_HOUSE_STONE          = ITEMID_MULTI + 0x66,
	ITEMID_TENT_BLUE            = ITEMID_MULTI + 0x70,
	ITEMID_TENT_GREEN           = ITEMID_MULTI + 0x72,
	ITEMID_3ROOM                = ITEMID_MULTI + 0x74,	// 3 room house
	ITEMID_2STORY_STUKO         = ITEMID_MULTI + 0x76,
	ITEMID_2STORY_SAND          = ITEMID_MULTI + 0x78,
	ITEMID_TOWER                = ITEMID_MULTI + 0x7a,
	ITEMID_KEEP                 = ITEMID_MULTI + 0x7c,	// keep
	ITEMID_CASTLE               = ITEMID_MULTI + 0x7e,	// castle 7f also.
	ITEMID_LARGESHOP            = ITEMID_MULTI + 0x8c,	// in verdata.mul file.
    ITEMID_HOUSE_SMALL_SHOP_MB	= ITEMID_MULTI + 0xA2,
	ITEMID_MULTI_EXT_1          = ITEMID_MULTI + 0x0bb8,
	ITEMID_MULTI_EXT_2          = ITEMID_MULTI + 0x1388,	// minax tower.

	ITEMID_HOUSEFOUNDATION_7x7 = ITEMID_MULTI + 0x13ec,
	ITEMID_HOUSEFOUNDATION_7x8,
	ITEMID_HOUSEFOUNDATION_7x9,
	ITEMID_HOUSEFOUNDATION_7x10,
	ITEMID_HOUSEFOUNDATION_7x11,
	ITEMID_HOUSEFOUNDATION_7x12,
	ITEMID_HOUSEFOUNDATION_8x7 = ITEMID_MULTI + 0x13f8,
	ITEMID_HOUSEFOUNDATION_8x8,
	ITEMID_HOUSEFOUNDATION_8x9,
	ITEMID_HOUSEFOUNDATION_8x10,
	ITEMID_HOUSEFOUNDATION_8x11,
	ITEMID_HOUSEFOUNDATION_8x12,
	ITEMID_HOUSEFOUNDATION_8x13,
	ITEMID_HOUSEFOUNDATION_9x7 = ITEMID_MULTI + 0x1404,
	ITEMID_HOUSEFOUNDATION_9x8,
	ITEMID_HOUSEFOUNDATION_9x9,
	ITEMID_HOUSEFOUNDATION_9x10,
	ITEMID_HOUSEFOUNDATION_9x11,
	ITEMID_HOUSEFOUNDATION_9x12,
	ITEMID_HOUSEFOUNDATION_9x13,
	ITEMID_HOUSEFOUNDATION_10x7 = ITEMID_MULTI + 0x1410,
	ITEMID_HOUSEFOUNDATION_10x8,
	ITEMID_HOUSEFOUNDATION_10x9,
	ITEMID_HOUSEFOUNDATION_10x10,
	ITEMID_HOUSEFOUNDATION_10x11,
	ITEMID_HOUSEFOUNDATION_10x12,
	ITEMID_HOUSEFOUNDATION_10x13,
	ITEMID_HOUSEFOUNDATION_11x7 = ITEMID_MULTI + 0x141c,
	ITEMID_HOUSEFOUNDATION_11x8,
	ITEMID_HOUSEFOUNDATION_11x9,
	ITEMID_HOUSEFOUNDATION_11x10,
	ITEMID_HOUSEFOUNDATION_11x11,
	ITEMID_HOUSEFOUNDATION_11x12,
	ITEMID_HOUSEFOUNDATION_11x13,
	ITEMID_HOUSEFOUNDATION_12x7 = ITEMID_MULTI + 0x1428,
	ITEMID_HOUSEFOUNDATION_12x8,
	ITEMID_HOUSEFOUNDATION_12x9,
	ITEMID_HOUSEFOUNDATION_12x10,
	ITEMID_HOUSEFOUNDATION_12x11,
	ITEMID_HOUSEFOUNDATION_12x12,
	ITEMID_HOUSEFOUNDATION_12x13,
	ITEMID_HOUSEFOUNDATION_13x8 = ITEMID_MULTI + 0x1435,
	ITEMID_HOUSEFOUNDATION_13x9,
	ITEMID_HOUSEFOUNDATION_13x10,
	ITEMID_HOUSEFOUNDATION_13x11,
	ITEMID_HOUSEFOUNDATION_13x12,
	ITEMID_HOUSEFOUNDATION_13x13,
    ITEMID_HOUSEFOUNDATION_30x30 = ITEMID_MULTI + 0x147D,

	ITEMID_MULTISTAIRS_WOOD_SN = ITEMID_MULTI + 0x1db0,
	ITEMID_MULTISTAIRS_WOOD_WE,
	ITEMID_MULTISTAIRS_WOOD_NS,
	ITEMID_MULTISTAIRS_WOOD_EW,
	ITEMID_MULTISTAIRS_STONE_SN = ITEMID_MULTI + 0x1db4,
	ITEMID_MULTISTAIRS_STONE_WE,
	ITEMID_MULTISTAIRS_STONE_NS,
	ITEMID_MULTISTAIRS_STONE_EW,
	ITEMID_MULTISTAIRS_STONE2_SN = ITEMID_MULTI + 0x1db8,
	ITEMID_MULTISTAIRS_STONE2_WE,
	ITEMID_MULTISTAIRS_STONE2_NS,
	ITEMID_MULTISTAIRS_STONE2_EW,
	ITEMID_MULTISTAIRS_WOOD2_SN = ITEMID_MULTI + 0x1dbc,
	ITEMID_MULTISTAIRS_WOOD2_WE,
	ITEMID_MULTISTAIRS_WOOD2_NS,
	ITEMID_MULTISTAIRS_WOOD2_EW,
	ITEMID_MULTISTAIRS_STONE3_SN = ITEMID_MULTI + 0x1dc0,
	ITEMID_MULTISTAIRS_STONE3_WE,
	ITEMID_MULTISTAIRS_STONE3_NS,
	ITEMID_MULTISTAIRS_STONE3_EW,
	ITEMID_MULTISTAIRS_MARBLE_SN = ITEMID_MULTI + 0x1dc4,
	ITEMID_MULTISTAIRS_MARBLE_WE,
	ITEMID_MULTISTAIRS_MARBLE_NS,
	ITEMID_MULTISTAIRS_MARBLE_EW,
	ITEMID_MULTISTAIRS_STONE4_SN = ITEMID_MULTI + 0x1dc8,
	ITEMID_MULTISTAIRS_STONE4_WE,
	ITEMID_MULTISTAIRS_STONE4_NS,
	ITEMID_MULTISTAIRS_STONE4_EW,
	ITEMID_MULTISTAIRS_SANDSTONE_SN = ITEMID_MULTI + 0x1dcc,
	ITEMID_MULTISTAIRS_SANDSTONE_WE,
	ITEMID_MULTISTAIRS_SANDSTONE_NS,
	ITEMID_MULTISTAIRS_SANDSTONE_EW,
	ITEMID_MULTISTAIRS_STONE5_SN = ITEMID_MULTI + 0x1dd0,
	ITEMID_MULTISTAIRS_STONE5_WE,
	ITEMID_MULTISTAIRS_STONE5_NS,
	ITEMID_MULTISTAIRS_STONE5_EW,
	ITEMID_MULTISTAIRS_CARPET_SN = ITEMID_MULTI + 0x1dd4,
	ITEMID_MULTISTAIRS_CARPET_WE,
	ITEMID_MULTISTAIRS_CARPET_NS,
	ITEMID_MULTISTAIRS_CARPET_EW,
	ITEMID_MULTISTAIRS_CRYSTAL_SN = ITEMID_MULTI + 0x1dd8,
	ITEMID_MULTISTAIRS_CRYSTAL_WE,
	ITEMID_MULTISTAIRS_CRYSTAL_NS,
	ITEMID_MULTISTAIRS_CRYSTAL_EW,
	ITEMID_MULTISTAIRS_SHADOW_SN = ITEMID_MULTI + 0x1ddc,
	ITEMID_MULTISTAIRS_SHADOW_WE,
	ITEMID_MULTISTAIRS_SHADOW_NS,
	ITEMID_MULTISTAIRS_SHADOW_EW,

	ITEMID_MULTI_MAX = (ITEMID_MULTI + MULTI_QTY - 1),	// ??? this is higher than next !

	// These overlap for now damnit !!! fix this.
	// Special scriptable objects defined after this.
	ITEMID_QTY = 0x10000,

	// Put named items here.
	ITEMID_SCRIPT2 = ITEMID_QTY,				// Safe area for server admins.
	ITEMID_TEMPLATE = ITEMID_SCRIPT2 + 0x9FFF	// container item templates are beyond here.
};


#endif //_INC_UOFILES_ENUMS_ITEMID_H
