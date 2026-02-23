# 1 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 2 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
.equ LOCALID_ROCKET1, 1
# 3 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
.equ LOCALID_ROCKET2, 2
# 4 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
.equ LOCALID_LORELEI, 3
# 5 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
.equ LOCALID_ROCKET3, 4
# 6 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 7 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_MapScripts::
# 8 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FourIsland_IcefallCave_Back_OnTransition
# 9 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, FourIsland_IcefallCave_Back_OnResume
# 10 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	.byte 0
# 11 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 12 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_OnTransition::
# 13 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	call_if_eq VAR_MAP_SCENE_ICEFALL_CAVE_BACK, 1, FourIsland_IcefallCave_Back_EventScript_HideLorelei
# 14 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, FourIsland_IcefallCave_Back_EventScript_TryShowKyogre
# 15 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	end
# 16 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 17 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_EventScript_TryShowKyogre::
# 18 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	goto_if_set FLAG_CAUGHT_KYOGRE, EventScript_Return
# 19 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	goto_if_set FLAG_FOUGHT_KYOGRE, EventScript_Return
# 20 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	clearflag FLAG_HIDE_LEGEND_KYOGRE
# 21 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	return
# 22 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 23 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_OnResume::
# 24 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	call_if_set FLAG_SYS_SPECIAL_WILD_BATTLE, FourIsland_IcefallCave_Back_EventScript_TryRemoveKyogre
# 25 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	end
# 26 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 27 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_EventScript_TryRemoveKyogre::
# 28 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 29 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, EventScript_Return
# 30 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	removeobject VAR_LAST_TALKED
# 31 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	return
# 32 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 33 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_EventScript_Kyogre::
# 34 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 35 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	special QuestLog_CutRecording
# 36 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	lock
# 37 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	faceplayer
# 38 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	setwildbattle SPECIES_KYOGRE, 70
# 39 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitse
# 40 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 41 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	message Text_Gyaoo
# 42 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmessage
# 43 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmoncry
# 44 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay 10
# 45 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 46 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitbuttonpress
# 47 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 48 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	special StartLegendaryBattle
# 49 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitstate
# 50 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 51 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 52 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, FourIsland_IcefallCave_Back_EventScript_DefeatedKyogre
# 53 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, FourIsland_IcefallCave_Back_EventScript_RanFromKyogre
# 54 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, FourIsland_IcefallCave_Back_EventScript_RanFromKyogre
# 55 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	setflag FLAG_CAUGHT_KYOGRE
# 56 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	release
# 57 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	end
# 58 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 59 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_EventScript_DefeatedKyogre::
# 60 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	setflag FLAG_FOUGHT_KYOGRE
# 61 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	goto EventScript_RemoveStaticMon
# 62 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 63 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_EventScript_RanFromKyogre::
# 64 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	setflag FLAG_FOUGHT_KYOGRE
# 65 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	setvar VAR_0x8004, SPECIES_KYOGRE
# 66 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	goto EventScript_MonFlewAway
# 67 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 68 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_EventScript_HideLorelei::
# 69 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	setflag FLAG_HIDE_ICEFALL_CAVE_LORELEI
# 70 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	return
# 71 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 72 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_EventScript_LoreleiRocketsScene::
# 73 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	lockall
# 74 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 75 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_LoreleiKeepHandsOffMons
# 76 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ROCKET1, FourIsland_IcefallCave_Back_Movement_WalkInPlaceDown
# 77 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 78 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 79 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_ShutItLadyLeaveUsBe
# 80 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	closemessage
# 81 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	playse SE_PIN
# 82 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_LORELEI, Common_Movement_ExclamationMark
# 83 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 84 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_LORELEI, Common_Movement_WalkInPlaceFasterDown
# 85 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 86 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_LORELEI, Common_Movement_Delay48
# 87 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 88 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 89 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_LoreleiPlayerHelpMeKickPoachersOut
# 90 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	closemessage
# 91 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_LORELEI, Common_Movement_WalkInPlaceFasterRight
# 92 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 93 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay 18
# 94 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_LORELEI, Common_Movement_WalkInPlaceFasterDown
# 95 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 96 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay 35
# 97 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ROCKET3, FourIsland_IcefallCave_Back_Movement_Rocket3FaceLorelei
# 98 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_LORELEI, FourIsland_IcefallCave_Back_Movement_LoreleiToRockets
# 99 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FourIsland_IcefallCave_Back_Movement_PlayerToRockets
# 100 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 101 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ROCKET2, FourIsland_IcefallCave_Back_Movement_WalkInPlaceDown
# 102 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 103 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	playbgm MUS_ENCOUNTER_ROCKET, 0
# 104 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 105 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_GruntIntro
# 106 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_ROCKET3
# 107 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_45, FourIsland_IcefallCave_Back_Text_GruntDefeat
# 108 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_LORELEI, FourIsland_IcefallCave_Back_Movement_WalkInPlaceUp
# 109 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 110 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 111 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_LoreleiWhereHaveYouTakenMons
# 112 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 113 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_NotTellingYouThat
# 114 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 115 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	message FourIsland_IcefallCave_Back_Text_LoreleiWellDeepFreezeYou
# 116 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmessage
# 117 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitse
# 118 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	playmoncry SPECIES_LAPRAS, CRY_MODE_ENCOUNTER
# 119 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitbuttonpress
# 120 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmoncry
# 121 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ROCKET1, FourIsland_IcefallCave_Back_Movement_Rocket1ReactToThreat
# 122 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 123 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 124 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_OkayRocketWareHouseFiveIsland
# 125 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	closemessage
# 126 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_LORELEI, FourIsland_IcefallCave_Back_Movement_LoreleiWatchRocketsExit
# 127 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FourIsland_IcefallCave_Back_Movement_PlayerWatchRocketsExit
# 128 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ROCKET1, FourIsland_IcefallCave_Back_Movement_Rocket1Exit
# 129 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ROCKET2, FourIsland_IcefallCave_Back_Movement_Rocket2Exit
# 130 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ROCKET3, FourIsland_IcefallCave_Back_Movement_Rocket3Exit
# 131 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 132 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	removeobject LOCALID_ROCKET1
# 133 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	removeobject LOCALID_ROCKET2
# 134 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	removeobject LOCALID_ROCKET3
# 135 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay 50
# 136 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_LORELEI, FourIsland_IcefallCave_Back_Movement_LoreleiWalkToPlayer
# 137 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 138 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 139 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 140 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 141 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_ThankYouThisIsAwful
# 142 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	setflag FLAG_HIDE_RUIN_VALLEY_SCIENTIST
# 143 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	clearflag FLAG_HIDE_LORELEI_IN_HER_HOUSE
# 144 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	setvar VAR_MAP_SCENE_ICEFALL_CAVE_BACK, 1
# 145 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	releaseall
# 146 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	end
# 147 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 148 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_PlayerToRockets::
# 149 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_up
# 150 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_up
# 151 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_right
# 152 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_up
# 153 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end
# 154 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 155 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_PlayerWatchRocketsExit::
# 156 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_16
# 157 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_in_place_faster_left
# 158 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_16
# 159 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_16
# 160 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_in_place_faster_down
# 161 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end
# 162 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 163 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_WalkInPlaceDown::
# 164 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_in_place_down
# 165 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end
# 166 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 167 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_UnusedPushRight::
# 168 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	lock_facing_direction
# 169 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_right
# 170 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	unlock_facing_direction
# 171 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end
# 172 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 173 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_Rocket1ReactToThreat::
# 174 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_in_place_fast_down
# 175 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end
# 176 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 177 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_Rocket1Exit::
# 178 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_right
# 179 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_down
# 180 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 181 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 182 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 183 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 184 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 185 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 186 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 187 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end
# 188 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 189 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_Rocket2Exit::
# 190 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_16
# 191 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_left
# 192 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_down
# 193 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 194 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 195 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 196 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 197 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 198 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 199 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 200 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end
# 201 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 202 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_Rocket3Exit::
# 203 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_16
# 204 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_down
# 205 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_16
# 206 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_down
# 207 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_right
# 208 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_right
# 209 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 210 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 211 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 212 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 213 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 214 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end
# 215 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 216 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_Rocket3FaceLorelei::
# 217 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_16
# 218 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_8
# 219 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_in_place_faster_right
# 220 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end
# 221 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 222 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_UnusedWalkLeft::
# 223 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_left
# 224 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_left
# 225 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end
# 226 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 227 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_LoreleiToRockets::
# 228 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_left
# 229 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_up
# 230 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end
# 231 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 232 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_WalkInPlaceUp::
# 233 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_in_place_up
# 234 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end
# 235 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 236 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_LoreleiWatchRocketsExit::
# 237 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_8
# 238 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_in_place_faster_right
# 239 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_16
# 240 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_16
# 241 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_in_place_faster_down
# 242 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end
# 243 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 244 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_LoreleiWalkToPlayer::
# 245 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_right
# 246 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end
# 247 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 248 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_EventScript_Lorelei::
# 249 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_ThankYouThisIsAwful, MSGBOX_NPC
# 250 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	end
# 251 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 252 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_EventScript_Pryce::
# 253 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	lock
# 254 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	faceplayer
# 255 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	goto_if_set FLAG_PRYCE_DEFEATED, FourIsland_IcefallCave_Back_EventScript_RematchPryce
# 256 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_Pryce, MSGBOX_YESNO
# 257 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FourIsland_IcefallCave_Back_EventScript_NoPryce
# 258 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	trainerbattle_single TRAINER_PRYCE, FourIsland_IcefallCave_Back_Text_YesPryce, FourIsland_IcefallCave_Back_Text_PryceDefeat, FourIsland_IcefallCave_Back_EventScript_PostPryce, NO_MUSIC
# 259 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	release
# 260 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	end
# 261 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 262 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_EventScript_PostPryce::
# 263 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_PrycePostBattle
# 264 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	setflag FLAG_PRYCE_DEFEATED
# 265 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	cleartrainerflag TRAINER_PRYCE
# 266 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	release
# 267 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	end
# 268 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 269 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_EventScript_CantRematchPryce::
# 270 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_PrycePostBattle
# 271 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	release
# 272 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	end
# 273 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 274 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_EventScript_NoPryce::
# 275 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_NoPryce
# 276 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	release
# 277 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	end
# 278 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 279 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_EventScript_RematchPryce::
# 280 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_RematchPryce, MSGBOX_YESNO
# 281 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FourIsland_IcefallCave_Back_EventScript_NoPryce
# 282 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	trainerbattle_single TRAINER_PRYCE, FourIsland_IcefallCave_Back_Text_YesRematchPryce, FourIsland_IcefallCave_Back_Text_RematchPryceDefeat, FourIsland_IcefallCave_Back_EventScript_PostRematchPryce, NO_MUSIC
# 283 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	release
# 284 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	end
# 285 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 286 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_EventScript_PostRematchPryce::
# 287 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_RematchPryceDefeat
# 288 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	cleartrainerflag TRAINER_PRYCE
# 289 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	release
# 290 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	end
