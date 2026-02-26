# 1 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 2 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ LOCALID_PROF_OAK,        4
# 3 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ LOCALID_BULBASAUR_BALL,  5
# 4 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ LOCALID_SQUIRTLE_BALL,   6
# 5 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ LOCALID_CHARMANDER_BALL, 7
# 6 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ LOCALID_RIVAL,           8
# 7 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ LOCALID_POKEDEX_1,       9
# 8 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ LOCALID_POKEDEX_2,       10
# 9 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 10 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ PLAYER_STARTER_NUM,      VAR_TEMP_1
# 11 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ PLAYER_STARTER_SPECIES,  VAR_TEMP_2
# 12 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ RIVAL_STARTER_SPECIES,   VAR_TEMP_3
# 13 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ RIVAL_STARTER_ID,        VAR_TEMP_4
# 14 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 15 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ SHOWED_OAK_COMPLETE_DEX, FLAG_TEMP_2
# 16 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 17 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_MapScripts::
# 18 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_ProfessorOaksLab_OnTransition
# 19 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PalletTown_ProfessorOaksLab_OnWarp
# 20 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_ProfessorOaksLab_OnFrame
# 21 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.byte 0
# 22 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 23 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_OnTransition::
# 24 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_VISITED_OAKS_LAB
# 25 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_ProfessorOaksLab_EventScript_ReadyOakForStarterScene
# 26 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7, PalletTown_ProfessorOaksLab_EventScript_ReadyOakForNationalDexScene
# 27 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8, PalletTown_ProfessorOaksLab_EventScript_SetNationalDexSceneFinished
# 28 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_set FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL, PalletTown_ProfessorOaksLab_EventScript_SetSkipPokeBallCheck
# 29 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 30 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 31 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_SetSkipPokeBallCheck::
# 32 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_OAK_SKIP_22_RIVAL_CHECK
# 33 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 34 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 35 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_SetNationalDexSceneFinished::
# 36 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 9
# 37 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 38 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 39 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReadyOakForStarterScene::
# 40 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_PROF_OAK, 6, 11
# 41 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectmovementtype LOCALID_PROF_OAK, MOVEMENT_TYPE_FACE_UP
# 42 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	savebgm MUS_OAK
# 43 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 44 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 45 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReadyOakForNationalDexScene::
# 46 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_PROF_OAK, 6, 11
# 47 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectmovementtype LOCALID_PROF_OAK, MOVEMENT_TYPE_FACE_UP
# 48 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 49 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 50 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_OnWarp::
# 51 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_ProfessorOaksLab_EventScript_ReadyPlayerForStarterScene
# 52 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.2byte 0
# 53 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 54 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReadyPlayerForStarterScene::
# 55 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 56 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 57 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 58 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_OnFrame::
# 59 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_ProfessorOaksLab_ChooseStarterScene
# 60 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7, PalletTown_ProfessorOaksLab_EventScript_EnterForNationalDexScene
# 61 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.2byte 0
# 62 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 63 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_EnterForNationalDexScene:: @ 8169002 
# 64 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 65 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_FACING, DIR_NORTH
# 66 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 67 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakEnter
# 68 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 69 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_PROF_OAK
# 70 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_PROF_OAK, 6, 3
# 71 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectmovementtype LOCALID_PROF_OAK, MOVEMENT_TYPE_FACE_DOWN
# 72 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 73 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerEnter
# 74 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 75 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene
# 76 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 77 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 78 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene::
# 79 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakSightingsOfRareMons
# 80 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 81 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterNorth
# 82 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterSouth
# 83 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterEastWest
# 84 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterEastWest
# 85 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalJustLetMeHandleEverything
# 86 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 87 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakNeedYourHelpTooNeedToSeePokedexes
# 88 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakNorth
# 89 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakWest
# 90 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 91 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakTookBothPokedexUnits
# 92 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 93 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 94 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskNorth
# 95 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskSouth
# 96 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskEast
# 97 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskWest
# 98 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_POKEDEX_1
# 99 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_POKEDEX_2
# 100 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 101 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakNowTheseUnitsCanRecordMoreData
# 102 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 103 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_POKEDEX_1
# 104 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_POKEDEX_2
# 105 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 106 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth
# 107 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth
# 108 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast
# 109 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest
# 110 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 111 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 112 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_PlayersPokedexWasUpgraded
# 113 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 114 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 115 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 116 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special EnableNationalPokedex
# 117 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakMustReallyWorkToFillPokedex
# 118 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalIllCompleteThePokedex
# 119 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 120 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 121 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth
# 122 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 123 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 124 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 125 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_RIVAL
# 126 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 127 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8
# 128 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_HIDE_OAK_IN_HIS_LAB
# 129 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_IS_CHAMPION
# 130 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_HIDE_ADMIN
# 131 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_HIDE_ADMIN2
# 132 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_HIDE_OAK
# 133 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_JANINE
# 134 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 135 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 136 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 137 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterNorth::
# 138 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 5, 10
# 139 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_RIVAL
# 140 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 141 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth
# 142 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 143 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 144 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 145 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 146 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterEastWest::
# 147 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 6, 10
# 148 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_RIVAL
# 149 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 150 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 151 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 152 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 153 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 154 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 155 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 156 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterSouth::
# 157 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 6, 10
# 158 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_RIVAL
# 159 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 160 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 161 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 162 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 163 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 164 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 165 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakNorth::
# 166 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 167 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 168 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 169 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 170 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakWest::
# 171 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 172 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 173 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 174 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 175 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskNorth::
# 176 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 177 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 178 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 179 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 180 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskSouth::
# 181 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDeskSouth
# 182 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 183 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 184 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_PROF_OAK
# 185 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 186 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 187 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskEast::
# 188 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 189 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast
# 190 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_PROF_OAK
# 191 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 192 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 193 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskWest::
# 194 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 195 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 196 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 197 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 198 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk::
# 199 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 200 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 201 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 202 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 203 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_4
# 204 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 205 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 206 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDeskSouth::
# 207 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 208 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 209 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 210 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 211 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_4
# 212 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 213 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 214 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_ChooseStarterScene::
# 215 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 216 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 217 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakEnter
# 218 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 219 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_PROF_OAK
# 220 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_PROF_OAK, 6, 3
# 221 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectmovementtype LOCALID_PROF_OAK, MOVEMENT_TYPE_FACE_DOWN
# 222 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 223 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerEnter
# 224 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 225 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 226 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 227 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 228 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	savebgm MUS_DUMMY
# 229 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 230 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalFedUpWithWaiting
# 231 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 232 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 60
# 233 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThreeMonsChooseOne
# 234 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 235 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 236 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalReact
# 237 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 238 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalNoFairWhatAboutMe
# 239 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakBePatientRival
# 240 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2
# 241 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 242 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 243 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 244 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakEnter::
# 245 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 246 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 247 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 248 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 249 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 250 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 251 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 252 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 253 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerEnter::
# 254 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 255 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 256 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 257 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 258 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 259 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 260 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 261 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 262 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 263 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 264 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalReact::
# 265 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 266 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 267 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 268 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 269 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_LeaveStarterSceneTrigger::
# 270 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 271 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 272 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_FaceDown
# 273 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 274 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHeyDontGoAwayYet
# 275 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 276 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWalkUp
# 277 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 278 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 279 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 280 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 281 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWalkUp::
# 282 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 283 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 284 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 285 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerLeft::
# 286 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 287 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, 1
# 288 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
# 289 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 290 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 291 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerMid::
# 292 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 293 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, 2
# 294 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
# 295 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 296 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 297 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerRight::
# 298 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 299 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, 3
# 300 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
# 301 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 302 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 303 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattle::
# 304 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 305 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 306 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 307 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 308 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 309 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 310 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalLetsCheckOutMons
# 311 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 312 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_FaceDown
# 313 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 314 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 0, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander
# 315 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur
# 316 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle
# 317 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 318 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 319 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
@ The scripts for the rival approaching the player for battle are a bit bloated because
# 320 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
@ both the player and rival can be in 3 different positions, so theres 9 different approaches
# 321 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
@ NOTE: Names below refer to the Rival's mon (e.g. for RivalBattleSquirtle, player has Charmander)
# 322 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 323 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle::
# 324 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleLeft
# 325 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleMid
# 326 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleRight
# 327 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 328 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 329 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleLeft::
# 330 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleLeft
# 331 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 332 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
# 333 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 334 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 335 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleMid::
# 336 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleMid
# 337 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 338 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
# 339 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 340 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 341 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleRight::
# 342 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleRight
# 343 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 344 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
# 345 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 346 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 347 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle::
# 348 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_SQUIRTLE, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 349 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
# 350 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 351 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 352 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleLeft::
# 353 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 354 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 355 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 356 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 357 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 358 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 359 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 360 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 361 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleMid::
# 362 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 363 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 364 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 365 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 366 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 367 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 368 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 369 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleRight::
# 370 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 371 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 372 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 373 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 374 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 375 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 376 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander::
# 377 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderLeft
# 378 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderMid
# 379 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderRight
# 380 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 381 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 382 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderLeft::
# 383 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderLeft
# 384 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 385 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
# 386 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 387 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 388 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderMid::
# 389 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderMid
# 390 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 391 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
# 392 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 393 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 394 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderRight::
# 395 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderRight
# 396 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 397 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
# 398 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 399 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 400 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander::
# 401 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_CHARMANDER, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 402 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
# 403 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 404 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 405 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderLeft::
# 406 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 407 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 408 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 409 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 410 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 411 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 412 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 413 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 414 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 415 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderMid::
# 416 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 417 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 418 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 419 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 420 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 421 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 422 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 423 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 424 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderRight::
# 425 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 426 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 427 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 428 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 429 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 430 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 431 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 432 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur::
# 433 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurLeft
# 434 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurMid
# 435 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurRight
# 436 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 437 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 438 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurLeft::
# 439 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurLeft
# 440 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 441 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
# 442 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 443 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 444 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurMid::
# 445 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurMid
# 446 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 447 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
# 448 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 449 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 450 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurRight::
# 451 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurRight
# 452 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 453 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
# 454 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 455 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 456 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur::
# 457 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_BULBASAUR, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 458 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
# 459 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 460 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 461 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurLeft::
# 462 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 463 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 464 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 465 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 466 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 467 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 468 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 469 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurMid::
# 470 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 471 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 472 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 473 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 474 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 475 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 476 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurRight::
# 477 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 478 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 479 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 480 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 481 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 482 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle::
# 483 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special HealPlayerParty
# 484 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGoToughenMyMon
# 485 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 486 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 487 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleLeft
# 488 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleMid
# 489 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleRight
# 490 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_RIVAL
# 491 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playse SE_EXIT
# 492 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 493 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4
# 494 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_BEAT_RIVAL_IN_OAKS_LAB
# 495 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 496 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 497 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 498 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleLeft::
# 499 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleLeft
# 500 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle
# 501 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_RIVAL
# 502 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 503 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 504 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleMid::
# 505 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleMid
# 506 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle
# 507 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_RIVAL
# 508 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 509 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 510 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleRight::
# 511 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleRight
# 512 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattleRight
# 513 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_RIVAL
# 514 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 515 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 516 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleLeft::
# 517 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 518 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 519 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 520 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 521 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 522 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 523 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 524 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 525 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 526 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleRight::
# 527 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 528 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 529 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 530 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 531 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 532 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 533 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 534 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 535 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 536 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleMid::
# 537 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 538 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 539 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 540 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 541 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 542 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 543 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 544 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 545 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 546 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 547 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle::
# 548 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 549 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 550 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 551 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 552 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 553 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 554 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 555 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattleRight::
# 556 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 557 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 558 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 559 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 560 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 561 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 562 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 563 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Rival::
# 564 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 565 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 566 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_RivalChoseStarter
# 567 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_RivalWaitingForStarter
# 568 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGrampsIsntAround
# 569 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 570 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 571 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 572 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWaitingForStarter::
# 573 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGoChoosePlayer
# 574 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 575 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 576 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 577 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalChoseStarter::
# 578 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalMyMonLooksTougher
# 579 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 580 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 581 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 582 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ProfOak::
# 583 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 584 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 585 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set SHOWED_OAK_COMPLETE_DEX, PalletTown_ProfessorOaksLab_EventScript_OakJustShownCompleteDex
# 586 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 9, PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 587 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8, PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 588 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene
# 589 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_CERULEAN_CITY_RIVAL, 1, PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 590 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls
# 591 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 1, PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene
# 592 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4, PalletTown_ProfessorOaksLab_EventScript_OakBattleMonForItToGrow
# 593 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_OakCanReachNextTownWithMon
# 594 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakWhichOneWillYouChoose
# 595 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 596 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 597 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 598 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakJustShownCompleteDex::
# 599 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PokedexRating_Text_ThankYouMadeDreamReality
# 600 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 601 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 602 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 603 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakCanReachNextTownWithMon::
# 604 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCanReachNextTownWithMon
# 605 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 606 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 607 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 608 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBattleMonForItToGrow::
# 609 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakBattleMonForItToGrow
# 610 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 611 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 612 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 613 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene::
# 614 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHaveSomethingForMe
# 615 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 616 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 617 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_DeliveredOaksParcel
# 618 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 619 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 620 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 621 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeitem ITEM_OAKS_PARCEL
# 622 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCustomBallIOrdered
# 623 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 624 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGramps
# 625 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 626 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterNorth
# 627 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterSouth
# 628 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest
# 629 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest
# 630 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 631 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalWhatDidYouCallMeFor
# 632 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 633 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 634 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playse SE_PIN
# 635 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_ExclamationMark
# 636 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 637 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_Delay48
# 638 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 639 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalSouth
# 640 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalEast
# 641 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalWest
# 642 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalNorth
# 643 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHaveRequestForYouTwo
# 644 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 645 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskNorth
# 646 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskSouth
# 647 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskEast
# 648 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskWest
# 649 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakPokedexOnDesk
# 650 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 651 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 40
# 652 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakTakeTheseWithYou
# 653 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 654 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterUp
# 655 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 656 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_POKEDEX_1
# 657 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 10
# 658 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_POKEDEX_2
# 659 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 25
# 660 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth
# 661 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth
# 662 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast
# 663 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest
# 664 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 10
# 665 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 666 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 667 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedPokedexFromOak
# 668 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 669 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 670 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 671 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 672 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_SYS_GAME_CLEAR_OLD
# 673 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 674 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_CENTER_TEALA, 1
# 675 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCatchMonsForDataTakeThese
# 676 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	giveitem_msg PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls, ITEM_POKE_BALL, 5
# 677 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakExplainCatching
# 678 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	famechecker FAMECHECKER_OAK, 1
# 679 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCompleteMonGuideWasMyDream
# 680 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalLeaveItToMeGramps
# 681 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerNorth
# 682 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerSouth
# 683 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest
# 684 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest
# 685 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalTellSisNotToGiveYouMap
# 686 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 687 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 688 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth
# 689 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 690 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 691 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 692 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_RIVAL
# 693 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 694 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6
# 695 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 2
# 696 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1
# 697 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1
# 698 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 1
# 699 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 700 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 701 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 702 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth::
# 703 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 704 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 705 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 706 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 707 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth::
# 708 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOverSouth
# 709 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 710 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 711 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 712 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast::
# 713 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 714 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerFaceOakForDexEast
# 715 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 716 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 717 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 718 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest::
# 719 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 720 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 721 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 722 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 723 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerFaceOakForDexEast::
# 724 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 725 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 726 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 727 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 728 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 729 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver::
# 730 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 731 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 732 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 733 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 734 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesOverSouth::
# 735 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 736 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 737 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 738 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 739 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskNorth::
# 740 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 741 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 742 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 743 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 744 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskSouth::
# 745 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDeskSouth
# 746 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 747 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 748 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_PROF_OAK
# 749 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 750 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 751 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskEast::
# 752 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 753 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast
# 754 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_PROF_OAK
# 755 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 756 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 757 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskWest::
# 758 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 759 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 760 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 761 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 762 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast::
# 763 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 764 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 765 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 766 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 767 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 768 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk::
# 769 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 770 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 771 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 772 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 773 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 774 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk::
# 775 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 776 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 777 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 778 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 779 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 780 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 781 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakWalkToDeskSouth::
# 782 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 783 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 784 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 785 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 786 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 787 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 788 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 789 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls::
# 790 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8004, 0
# 791 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	specialvar VAR_RESULT, GetPokedexCount
# 792 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 793 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 794 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 795 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 796 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_0x8009, 1, PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls  @ Player only has starter
# 797 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 798 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 799 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 800 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RatePokedex::
# 801 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call PokedexRating_EventScript_RateInPerson
# 802 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_OAK_SAW_DEX_COMPLETION, PalletTown_ProfessorOaksLab_EventScript_DexCompleted
# 803 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 804 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 805 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 806 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexCompleted::
# 807 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 808 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 40
# 809 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PokedexRating_Text_Wroooaaarrr
# 810 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 811 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakExcitedNorth
# 812 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakExcitedSouth
# 813 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakExcitedEast
# 814 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakExcitedWest
# 815 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_FacePlayer
# 816 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 817 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 818 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 70
# 819 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PokedexRating_Text_ThankYouMadeDreamReality
# 820 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag SHOWED_OAK_COMPLETE_DEX
# 821 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 822 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 823 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 824 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Mew::
# 825 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PokedexRating_Text_ThankYouMadeDreamReality2
# 826 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_HIDE_OAK_IN_HIS_LAB
# 827 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject 4
# 828 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 829 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 830 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_AHHH
# 831 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 832 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 833 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 834 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedNorth::
# 835 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedNorth
# 836 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 837 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 838 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 839 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedSouth::
# 840 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedSouth
# 841 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 842 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 843 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 844 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedEast::
# 845 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedEast
# 846 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 847 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 848 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 849 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedWest::
# 850 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedWest
# 851 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 852 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 853 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 854 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedNorth::
# 855 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 856 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_down
# 857 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 858 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 859 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_down
# 860 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 861 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 862 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 863 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedSouth::
# 864 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 865 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_up
# 866 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 867 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 868 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_up
# 869 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 870 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 871 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 872 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedEast::
# 873 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 874 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_left
# 875 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 876 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 877 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_left
# 878 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 879 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 880 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 881 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedWest::
# 882 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 883 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_right
# 884 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 885 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 886 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_right
# 887 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 888 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 889 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 890 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
@ Unused
# 891 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_Search:
# 892 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 893 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 894 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 895 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 896 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 897 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 898 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 899 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 900 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 901 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 902 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 903 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 904 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 905 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 906 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 907 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 908 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 909 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 910 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 911 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 912 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 913 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 914 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 915 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 916 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 917 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 918 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
@ Unused
# 919 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_VerticalPacing:
# 920 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 921 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 922 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 923 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 924 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 925 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 926 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 927 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 928 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 929 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 930 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene::
# 931 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call PokedexRating_EventScript_RateInPerson
# 932 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 933 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_lt VAR_0x8009, 1, PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene
# 934 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_unset FLAG_WORLD_MAP_ONE_ISLAND, PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene
# 935 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 936 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakFavorToAskYouPlayer
# 937 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene
# 938 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 939 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 940 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene::
# 941 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_BillNeeds
# 942 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 943 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 944 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 945 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Text_BillNeeds::
# 946 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Oh and Bill still wants you\n"
# 947 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "to help him in the sevii islands!\p"
# 948 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "He's in the Cinnabar Island\n"
# 949 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "POKECENTER waiting for you!$"
# 950 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 951 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls::
# 952 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 953 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special QuestLog_CutRecording
# 954 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_OAK_SKIP_22_RIVAL_CHECK, PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 955 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL, PalletTown_ProfessorOaksLab_EventScript_PlayerAlreadyGotBalls
# 956 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	checkitem ITEM_POKE_BALL
# 957 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PalletTown_ProfessorOaksLab_EventScript_PlayerOutOfBalls
# 958 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 959 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 960 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 961 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerOutOfBalls::
# 962 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_ROUTE22, 2, PalletTown_ProfessorOaksLab_EventScript_GivePlayerMoreBalls
# 963 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 964 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 965 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 966 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_GivePlayerMoreBalls::
# 967 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakAddedNothingToPokedex
# 968 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	giveitem_msg PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls, ITEM_POKE_BALL, 5
# 969 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL
# 970 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 971 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 972 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 973 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait::
# 974 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakMonsAroundWorldWait
# 975 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 976 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 977 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 978 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerAlreadyGotBalls::
# 979 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakComeSeeMeSometime
# 980 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 981 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 982 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 983 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterNorth::
# 984 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 5, 10
# 985 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_RIVAL
# 986 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth
# 987 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 988 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 989 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 990 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 991 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest::
# 992 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 6, 10
# 993 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_RIVAL
# 994 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 995 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 996 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 997 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 998 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 999 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1000 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterSouth::
# 1001 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 6, 10
# 1002 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_RIVAL
# 1003 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 1004 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 1005 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1006 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1007 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1008 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalSouth::
# 1009 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_FacePlayer
# 1010 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1011 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 15
# 1012 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 1013 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1014 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1015 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1016 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalWest::
# 1017 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_FacePlayer
# 1018 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1019 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 15
# 1020 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 1021 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 1022 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1023 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1024 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1025 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalEast::
# 1026 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_FacePlayer
# 1027 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1028 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 15
# 1029 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 1030 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 1031 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1032 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1033 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1034 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerNorth::
# 1035 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 1036 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 1037 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1038 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1039 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1040 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerSouth::
# 1041 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 1042 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1043 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1044 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1045 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1046 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest::
# 1047 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 1048 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1049 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1050 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1051 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1052 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth::
# 1053 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 1054 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExit
# 1055 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1056 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1057 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1058 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExit::
# 1059 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExit
# 1060 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1061 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1062 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1063 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalNorth::
# 1064 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1065 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1066 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1067 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1068 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest::
# 1069 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_4
# 1070 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 1071 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1072 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1073 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth::
# 1074 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 1075 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1076 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1077 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1078 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1079 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1080 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 1081 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 1082 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1083 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1084 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalEnter::
# 1085 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1086 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1087 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1088 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1089 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1090 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1091 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1092 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1093 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExit::
# 1094 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1095 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1096 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1097 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1098 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1099 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1100 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1101 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1102 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall::
# 1103 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1104 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1105 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_NUM, 0
# 1106 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_BULBASAUR
# 1107 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_SPECIES, SPECIES_CHARMANDER
# 1108 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_ID, LOCALID_CHARMANDER_BALL
# 1109 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special Special_ApplyStarterRandomizer
# 1110 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1111 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1112 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1113 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1114 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1115 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1116 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice::
# 1117 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_FaceRight
# 1118 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1119 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_0x8004, PLAYER_STARTER_SPECIES
# 1120 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special Special_PreGenerateStarter
# 1121 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special Special_ShowStarterPicShinyAware
# 1122 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 1123 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_STARTER_RANDOMIZER, PalletTown_ProfessorOaksLab_EventScript_ConfirmRandomStarter
# 1124 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 0, PalletTown_ProfessorOaksLab_EventScript_ConfirmBulbasaur
# 1125 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 1, PalletTown_ProfessorOaksLab_EventScript_ConfirmSquirtle
# 1126 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmCharmander
# 1127 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1128 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1129 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmRandomStarter::
# 1130 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	bufferspeciesname STR_VAR_1, PLAYER_STARTER_SPECIES
# 1131 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingRandomStarter, MSGBOX_YESNO
# 1132 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1133 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
# 1134 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1135 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1136 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmBulbasaur::
# 1137 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingBulbasaur, MSGBOX_YESNO
# 1138 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1139 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
# 1140 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1141 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1142 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmSquirtle::
# 1143 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingSquirtle, MSGBOX_YESNO
# 1144 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1145 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
# 1146 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1147 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1148 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmCharmander::
# 1149 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingCharmander, MSGBOX_YESNO
# 1150 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1151 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
# 1152 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1153 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1154 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter::
# 1155 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	hidemonpic
# 1156 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1157 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1158 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1159 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ChoseStarter::
# 1160 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	hidemonpic
# 1161 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 1162 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThisMonIsEnergetic
# 1163 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 1164 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1165 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_PALLET_LADY_NOT_BLOCKING_SIGN
# 1166 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_0x8004, PLAYER_STARTER_SPECIES
# 1167 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8005, 5
# 1168 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special Special_GivePregenStarter
# 1169 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_STARTER_MON, PLAYER_STARTER_NUM
# 1170 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	bufferspeciesname STR_VAR_1, PLAYER_STARTER_SPECIES
# 1171 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedMonFromOak
# 1172 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 1173 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 1174 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 1175 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 1176 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, EventScript_GiveNicknameToStarter
# 1177 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter
# 1178 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1179 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1180 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
EventScript_GiveNicknameToStarter::
# 1181 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8004, 0
# 1182 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_ChangePokemonNickname
# 1183 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter
# 1184 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1185 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1186 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter::
# 1187 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 1188 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 0, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToCharmander
# 1189 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 1, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToBulbasaur
# 1190 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 2, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToSquirtle
# 1191 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1192 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1193 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWalksToCharmander::
# 1194 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToCharmander
# 1195 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1196 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
# 1197 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1198 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1199 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWalksToSquirtle::
# 1200 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToSquirtle
# 1201 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1202 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
# 1203 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1204 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1205 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWalksToBulbasaur::
# 1206 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToBulbasaur
# 1207 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1208 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
# 1209 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1210 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1211 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter::
# 1212 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 1213 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalIllTakeThisOneThen
# 1214 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject RIVAL_STARTER_ID
# 1215 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 1216 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	bufferspeciesname STR_VAR_1, RIVAL_STARTER_SPECIES
# 1217 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_RivalReceivedMonFromOak
# 1218 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 1219 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 1220 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 1221 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3
# 1222 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_set FLAG_OPENED_START_MENU, PalletTown_ProfessorOaksLab_EventScript_ReadyEndSignLadyScene
# 1223 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1224 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1225 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1226 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReadyEndSignLadyScene::
# 1227 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 1228 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1229 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1230 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToCharmander::
# 1231 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1232 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1233 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1234 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1235 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1236 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1237 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1238 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1239 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1240 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1241 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToSquirtle::
# 1242 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1243 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1244 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1245 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1246 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1247 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 1248 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1249 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1250 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToBulbasaur::
# 1251 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1252 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1253 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1254 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1255 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 1256 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1257 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1258 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_SquirtleBall::
# 1259 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1260 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1261 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_NUM, 1
# 1262 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_SQUIRTLE
# 1263 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_SPECIES, SPECIES_BULBASAUR
# 1264 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_ID, LOCALID_BULBASAUR_BALL
# 1265 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special Special_ApplyStarterRandomizer
# 1266 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1267 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1268 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1269 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1270 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1271 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1272 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_CharmanderBall::
# 1273 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1274 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1275 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_NUM, 2
# 1276 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_CHARMANDER
# 1277 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_SPECIES, SPECIES_SQUIRTLE
# 1278 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_ID, LOCALID_SQUIRTLE_BALL
# 1279 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special Special_ApplyStarterRandomizer
# 1280 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1281 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1282 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1283 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1284 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1285 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1286 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_LastPokeBall::
# 1287 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OaksLastMon
# 1288 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1289 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1290 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1291 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide1::
# 1292 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1293 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1294 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_Aide1GameClear
# 1295 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide
# 1296 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1297 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1298 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1299 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide1GameClear::
# 1300 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	famechecker FAMECHECKER_OAK, 5
# 1301 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakIsGoingToHaveRadioShow
# 1302 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1303 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1304 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1305 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide2::
# 1306 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1307 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1308 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_Aide2GameClear
# 1309 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide
# 1310 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1311 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1312 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1313 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide2GameClear::
# 1314 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	famechecker FAMECHECKER_DAISY, 0
# 1315 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_DaisyWillGroomMons
# 1316 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1317 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1318 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1319 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide3::
# 1320 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1321 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1322 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	famechecker FAMECHECKER_OAK, 2
# 1323 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakIsAuthorityOnMons
# 1324 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1325 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1326 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1327 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PcAide::
# 1328 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1329 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1330 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_PcMan, MSGBOX_NPC
# 1331 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 1332 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 1333 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1334 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_PcManYesNo, MSGBOX_YESNO
# 1335 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_PCMANNO
# 1336 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto EventScript_PCMan
# 1337 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1338 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PCMANNO:
# 1339 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_Medic2, MSGBOX_NPC
# 1340 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1341 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1342 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Text_PcMan::
# 1343 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Hello, Professor Oak\n"
# 1344 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "is gonna be trying to\l"
# 1345 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "get a POKEMON PC here soon,\l"
# 1346 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "but for now has hired me\l"
# 1347 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "for my portable PC Services.\p"
# 1348 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "I can also offer my services\n"
# 1349 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "to you if you want also.$"
# 1350 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Text_Medic2::
# 1351 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Alright, you can use\n"
# 1352 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "my PC anytime you like!$"
# 1353 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1354 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Pokedex::
# 1355 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_BlankEncyclopedia, MSGBOX_NPC
# 1356 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1357 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1358 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Computer::
# 1359 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_EmailMessage, MSGBOX_SIGN
# 1360 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1361 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1362 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_LeftSign::
# 1363 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_PressStartToOpenMenu, MSGBOX_SIGN
# 1364 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1365 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1366 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RightSign::
# 1367 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 1368 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, PalletTown_ProfessorOaksLab_EventScript_RightSignAlt
# 1369 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_SaveOptionInMenu
# 1370 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 1371 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1372 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1373 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RightSignAlt::
# 1374 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_AllMonTypesHaveStrongAndWeakPoints
# 1375 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 1376 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
