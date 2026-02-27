#include "global.h"
#include "gflib.h"
#include "random.h"
#include "overworld.h"
#include "constants/maps.h"
#include "load_save.h"
#include "item_menu.h"
#include "tm_case.h"
#include "berry_pouch.h"
#include "quest_log.h"
#include "wild_encounter.h"
#include "event_data.h"
#include "mail_data.h"
#include "play_time.h"
#include "money.h"
#include "battle_records.h"
#include "pokemon_size_record.h"
#include "pokemon_storage_system.h"
#include "roamer.h"
#include "item.h"
#include "constants/items.h"
#include "player_pc.h"
#include "berry.h"
#include "easy_chat.h"
#include "union_room_chat.h"
#include "mystery_gift.h"
#include "renewable_hidden_items.h"
#include "trainer_tower.h"
#include "script.h"
#include "berry_powder.h"
#include "pokemon_jump.h"
#include "event_scripts.h"
#include "debug.h"
#include "randomizer.h"
#include "constants/flags.h"
#ifdef DEBUG_TEST_SETUP
#include "pokemon.h"
#include "constants/species.h"
#include "constants/pokemon.h"
#include "constants/moves.h"
#include "constants/heal_locations.h"
#include "malloc.h"
#endif

// this file's functions
static void ResetMiniGamesResults(void);
#ifdef DEBUG_TEST_SETUP
static void DebugTestSetup(void);
#endif

// EWRAM vars
EWRAM_DATA bool8 gDifferentSaveFile = FALSE;

void SetTrainerId(u32 trainerId, u8 *dst)
{
    dst[0] = trainerId;
    dst[1] = trainerId >> 8;
    dst[2] = trainerId >> 16;
    dst[3] = trainerId >> 24;
}

void CopyTrainerId(u8 *dst, u8 *src)
{
    s32 i;
    for (i = 0; i < 4; i++)
        dst[i] = src[i];
}

static void InitPlayerTrainerId(void)
{
    u32 trainerId = (Random() << 0x10) | GetGeneratedTrainerIdLower();
    SetTrainerId(trainerId, gSaveBlock2Ptr->playerTrainerId);
}

static void SetDefaultOptions(void)
{
    gSaveBlock2Ptr->optionsTextSpeed = OPTIONS_TEXT_SPEED_INSTANT;
    gSaveBlock2Ptr->optionsWindowFrameType = 0;
    gSaveBlock2Ptr->optionsSound = OPTIONS_SOUND_MONO;
    gSaveBlock2Ptr->optionsBattleStyle = OPTIONS_BATTLE_STYLE_SHIFT;
    gSaveBlock2Ptr->optionsBattleSceneOff = FALSE;
    gSaveBlock2Ptr->regionMapZoom = FALSE;
    gSaveBlock2Ptr->optionsButtonMode = OPTIONS_BUTTON_MODE_HELP;
    gSaveBlock2Ptr->optionsAutoRun = OPTIONS_AUTORUN_OFF;
}

static void ClearPokedexFlags(void)
{
    memset(&gSaveBlock2Ptr->pokedex.owned, 0, sizeof(gSaveBlock2Ptr->pokedex.owned));
    memset(&gSaveBlock2Ptr->pokedex.seen, 0, sizeof(gSaveBlock2Ptr->pokedex.seen));
}

static void ClearBattleTower(void)
{
    CpuFill32(0, &gSaveBlock2Ptr->battleTower, sizeof(gSaveBlock2Ptr->battleTower));
}

static void WarpToPlayersRoom(void)
{
    SetWarpDestination(MAP_GROUP(PALLET_TOWN_PLAYERS_HOUSE_2F), MAP_NUM(PALLET_TOWN_PLAYERS_HOUSE_2F), -1, 6, 6);
    WarpIntoMap();
}

void Sav2_ClearSetDefault(void)
{
    ClearSav2();
    SetDefaultOptions();
}

void ResetMenuAndMonGlobals(void)
{
    gDifferentSaveFile = FALSE;
    ZeroPlayerPartyMons();
    ZeroEnemyPartyMons();
    ResetBagCursorPositions();
    ResetTMCaseCursorPos();
    BerryPouch_CursorResetToTop();
    ResetQuestLog();
    SeedWildEncounterRng(Random());
    ResetSpecialVars();
}

void NewGameInitData(void)
{
    bool8 nuzlockePrev = FlagGet(FLAG_NUZLOCKE);
    bool8 hardPrev = FlagGet(FLAG_HARD);
    bool8 expSharePrev = FlagGet(FLAG_EXP_SHARE_PARTY);
    bool8 perfectIvsPrev = FlagGet(FLAG_PERFECT_IVS);
    bool8 wildRandPrev = FlagGet(FLAG_WILD_RANDOMIZER);
    // DISABLED — Trainer and Ability/Move randomizers
    // bool8 trainerRandPrev = FlagGet(FLAG_TRAINER_RANDOMIZER);
    // bool8 abilityRandPrev = FlagGet(FLAG_ABILITY_RANDOMIZER);
    bool8 starterRandPrev = FlagGet(FLAG_STARTER_RANDOMIZER);
    u32 randSeedPrev = GetRandomizerSeed();
    u16 shinyRatePrev = VarGet(VAR_SHINY_RATE);  // A function lower down here clears these, so retain and reset at the end
    u16 expMultPrev = VarGet(VAR_EXP_MULTIPLIER);
    u16 catchRateMultPrev = VarGet(VAR_CATCH_RATE_MULT);
    u8 rivalName[PLAYER_NAME_LENGTH + 1];
    StringCopy(rivalName, gSaveBlock1Ptr->rivalName);
    gDifferentSaveFile = TRUE;
    gSaveBlock2Ptr->encryptionKey = 0;
    ZeroPlayerPartyMons();
    ZeroEnemyPartyMons();
    ClearBattleTower();
    ClearSav1();
    ClearMailData();
    gSaveBlock2Ptr->specialSaveWarpFlags = 0;
    gSaveBlock2Ptr->gcnLinkFlags = 0;
    gSaveBlock2Ptr->unkFlag1 = TRUE;
    gSaveBlock2Ptr->unkFlag2 = FALSE;
    InitPlayerTrainerId();
    PlayTimeCounter_Reset();
    ClearPokedexFlags();
    InitEventData();
    ResetFameChecker();
    SetMoney(&gSaveBlock1Ptr->money, 3000);
    ResetGameStats();
    ClearPlayerLinkBattleRecords();
    InitHeracrossSizeRecord();
    InitMagikarpSizeRecord();
    EnableNationalPokedex_RSE();
    EnableNationalPokedex();
    gPlayerPartyCount = 0;
    ZeroPlayerPartyMons();
    ResetPokemonStorageSystem();
    ClearRoamerData();
    gSaveBlock1Ptr->registeredItem = 0;
    ClearBag();
    NewGameInitPCItems();
    AddBagItem(ITEM_PORTABLE_PC, 1);
    ClearEnigmaBerries();
    InitEasyChatPhrases();
    ResetTrainerFanClub();
    UnionRoomChat_InitializeRegisteredTexts();
    ResetMiniGamesResults();
    ClearMysteryGift();
    SetAllRenewableItemFlags();
    WarpToPlayersRoom();
    RunScriptImmediately(EventScript_ResetAllMapFlags);
#ifdef DEBUG_TEST_SETUP
    // DEBUG TEST SETUP - REMOVE BEFORE RELEASE
    if (gDebugDoFullSetup)
        DebugTestSetup();
#endif
    StringCopy(gSaveBlock1Ptr->rivalName, rivalName);
    ResetTrainerTowerResults();
    nuzlockePrev ? FlagSet(FLAG_NUZLOCKE) : FlagClear(FLAG_NUZLOCKE);
    hardPrev ? FlagSet(FLAG_HARD) : FlagClear(FLAG_HARD);
    expSharePrev ? FlagSet(FLAG_EXP_SHARE_PARTY) : FlagClear(FLAG_EXP_SHARE_PARTY);
    perfectIvsPrev ? FlagSet(FLAG_PERFECT_IVS) : FlagClear(FLAG_PERFECT_IVS);
    wildRandPrev ? FlagSet(FLAG_WILD_RANDOMIZER) : FlagClear(FLAG_WILD_RANDOMIZER);
    // DISABLED — Trainer and Ability/Move randomizers
    // trainerRandPrev ? FlagSet(FLAG_TRAINER_RANDOMIZER) : FlagClear(FLAG_TRAINER_RANDOMIZER);
    // abilityRandPrev ? FlagSet(FLAG_ABILITY_RANDOMIZER) : FlagClear(FLAG_ABILITY_RANDOMIZER);
    starterRandPrev ? FlagSet(FLAG_STARTER_RANDOMIZER) : FlagClear(FLAG_STARTER_RANDOMIZER);
    SetRandomizerSeed(randSeedPrev);
    VarSet(VAR_SHINY_RATE, shinyRatePrev);
    VarSet(VAR_EXP_MULTIPLIER, expMultPrev);
    VarSet(VAR_CATCH_RATE_MULT, catchRateMultPrev);
}

#ifdef DEBUG_TEST_SETUP
// DEBUG TEST SETUP - REMOVE BEFORE RELEASE
static void DebugTestSetup(void)
{
    struct Pokemon *mon;

    // --- Debug Warp NPCs ---
    FlagClear(FLAG_HIDE_DEBUG_WARPERS);

    // --- Story Progress Flags ---
    FlagSet(FLAG_SYS_POKEMON_GET);
    FlagSet(FLAG_SYS_POKEDEX_GET);
    FlagSet(FLAG_SYS_B_DASH);
    FlagSet(FLAG_BEAT_RIVAL_IN_OAKS_LAB);

    // All 8 badges
    FlagSet(FLAG_BADGE01_GET);
    FlagSet(FLAG_BADGE02_GET);
    FlagSet(FLAG_BADGE03_GET);
    FlagSet(FLAG_BADGE04_GET);
    FlagSet(FLAG_BADGE05_GET);
    FlagSet(FLAG_BADGE06_GET);
    FlagSet(FLAG_BADGE07_GET);
    FlagSet(FLAG_BADGE08_GET);

    // All 8 gym leaders defeated
    FlagSet(FLAG_DEFEATED_BROCK);
    FlagSet(FLAG_DEFEATED_MISTY);
    FlagSet(FLAG_DEFEATED_LT_SURGE);
    FlagSet(FLAG_DEFEATED_ERIKA);
    FlagSet(FLAG_DEFEATED_KOGA);
    FlagSet(FLAG_DEFEATED_SABRINA);
    FlagSet(FLAG_DEFEATED_BLAINE);
    FlagSet(FLAG_DEFEATED_LEADER_GIOVANNI);

    // Hide early-game objects that should be gone
    FlagSet(FLAG_HIDE_BULBASAUR_BALL);
    FlagSet(FLAG_HIDE_SQUIRTLE_BALL);
    FlagSet(FLAG_HIDE_CHARMANDER_BALL);
    FlagSet(FLAG_HIDE_PEWTER_CITY_GYM_GUIDE);

    // Scene vars — advance past intro sequences
    VarSet(VAR_MAP_SCENE_PALLET_TOWN_OAK, 7);
    VarSet(VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6);
    VarSet(VAR_MAP_SCENE_PALLET_TOWN_PLAYERS_HOUSE_2F, 2);
    VarSet(VAR_MAP_SCENE_PALLET_TOWN_PLAYERS_HOUSE_1F, 1);

    // --- Money ---
    SetMoney(&gSaveBlock1Ptr->money, 10000);

    // --- Party ---
    {
        u32 maxIv = 31;
        u32 zeroIv = 0;
        mon = AllocZeroed(sizeof(struct Pokemon));

        // Charmander — perfect HP and Speed, 0 rest
        CreateMonWithNature(mon, SPECIES_CHARMANDER, 50, 0, NATURE_ADAMANT);
        SetMonData(mon, MON_DATA_HP_IV, &maxIv);
        SetMonData(mon, MON_DATA_ATK_IV, &zeroIv);
        SetMonData(mon, MON_DATA_DEF_IV, &zeroIv);
        SetMonData(mon, MON_DATA_SPEED_IV, &maxIv);
        SetMonData(mon, MON_DATA_SPATK_IV, &zeroIv);
        SetMonData(mon, MON_DATA_SPDEF_IV, &zeroIv);
        CalculateMonStats(mon);
        GiveMonToPlayer(mon);

        // Bulbasaur — perfect Defense and Sp.Def, 0 rest
        CreateMonWithNature(mon, SPECIES_BULBASAUR, 50, 0, NATURE_HARDY);
        SetMonData(mon, MON_DATA_HP_IV, &zeroIv);
        SetMonData(mon, MON_DATA_ATK_IV, &zeroIv);
        SetMonData(mon, MON_DATA_DEF_IV, &maxIv);
        SetMonData(mon, MON_DATA_SPEED_IV, &zeroIv);
        SetMonData(mon, MON_DATA_SPATK_IV, &zeroIv);
        SetMonData(mon, MON_DATA_SPDEF_IV, &maxIv);
        CalculateMonStats(mon);
        GiveMonToPlayer(mon);

        // Squirtle — perfect Attack and Sp.Atk, 0 rest
        CreateMonWithNature(mon, SPECIES_SQUIRTLE, 50, 0, NATURE_MODEST);
        SetMonData(mon, MON_DATA_HP_IV, &zeroIv);
        SetMonData(mon, MON_DATA_ATK_IV, &maxIv);
        SetMonData(mon, MON_DATA_DEF_IV, &zeroIv);
        SetMonData(mon, MON_DATA_SPEED_IV, &zeroIv);
        SetMonData(mon, MON_DATA_SPATK_IV, &maxIv);
        SetMonData(mon, MON_DATA_SPDEF_IV, &zeroIv);
        CalculateMonStats(mon);
        GiveMonToPlayer(mon);

        // Pidgeot — high level for Fly testing (keep all 31 IVs)
        CreateMonWithNature(mon, SPECIES_PIDGEOT, 50, 0, NATURE_JOLLY);
        SetMonMoveSlot(mon, MOVE_FLY, 0);
        SetMonData(mon, MON_DATA_HP_IV, &maxIv);
        SetMonData(mon, MON_DATA_ATK_IV, &maxIv);
        SetMonData(mon, MON_DATA_DEF_IV, &maxIv);
        SetMonData(mon, MON_DATA_SPEED_IV, &maxIv);
        SetMonData(mon, MON_DATA_SPATK_IV, &maxIv);
        SetMonData(mon, MON_DATA_SPDEF_IV, &maxIv);
        CalculateMonStats(mon);
        GiveMonToPlayer(mon);

        Free(mon);
    }

    // --- Fly Destinations ---
    FlagSet(FLAG_WORLD_MAP_PALLET_TOWN);
    FlagSet(FLAG_WORLD_MAP_VIRIDIAN_CITY);
    FlagSet(FLAG_WORLD_MAP_PEWTER_CITY);
    FlagSet(FLAG_WORLD_MAP_CERULEAN_CITY);
    FlagSet(FLAG_WORLD_MAP_LAVENDER_TOWN);
    FlagSet(FLAG_WORLD_MAP_VERMILION_CITY);
    FlagSet(FLAG_WORLD_MAP_CELADON_CITY);
    FlagSet(FLAG_WORLD_MAP_FUCHSIA_CITY);
    FlagSet(FLAG_WORLD_MAP_CINNABAR_ISLAND);
    FlagSet(FLAG_WORLD_MAP_INDIGO_PLATEAU_EXTERIOR);
    FlagSet(FLAG_WORLD_MAP_SAFFRON_CITY);
    FlagSet(FLAG_WORLD_MAP_ROUTE4_POKEMON_CENTER_1F);
    FlagSet(FLAG_WORLD_MAP_ROUTE10_POKEMON_CENTER_1F);
    FlagSet(FLAG_WORLD_MAP_ONE_ISLAND);
    FlagSet(FLAG_WORLD_MAP_TWO_ISLAND);
    FlagSet(FLAG_WORLD_MAP_THREE_ISLAND);
    FlagSet(FLAG_WORLD_MAP_FOUR_ISLAND);
    FlagSet(FLAG_WORLD_MAP_FIVE_ISLAND);
    FlagSet(FLAG_WORLD_MAP_SIX_ISLAND);
    FlagSet(FLAG_WORLD_MAP_SEVEN_ISLAND);

    // --- Bag Items ---
    AddBagItem(ITEM_POKE_BALL, 25);
    AddBagItem(ITEM_RARE_CANDY, 25);
    AddBagItem(ITEM_REPEL, 25);
    AddBagItem(ITEM_HM01, 1);
    AddBagItem(ITEM_HM02, 1);
    AddBagItem(ITEM_HM03, 1);
    AddBagItem(ITEM_HM04, 1);
    AddBagItem(ITEM_HM05, 1);
    AddBagItem(ITEM_HM06, 1);
    AddBagItem(ITEM_HM07, 1);
    AddBagItem(ITEM_TRI_PASS, 1);
    AddBagItem(ITEM_RAINBOW_PASS, 1);

    // --- Start Location ---
    if (DEBUG_START_LOCATION != SPAWN_PALLET_TOWN)
    {
        SetWarpDestinationToHealLocation(DEBUG_START_LOCATION);
        WarpIntoMap();
    }
}
#endif

static void ResetMiniGamesResults(void)
{
    CpuFill16(0, &gSaveBlock2Ptr->berryCrush, sizeof(struct BerryCrush));
    SetBerryPowder(&gSaveBlock2Ptr->berryCrush.berryPowderAmount, 0);
    ResetPokemonJumpRecords();
    CpuFill16(0, &gSaveBlock2Ptr->berryPick, sizeof(struct BerryPickingResults));
}
