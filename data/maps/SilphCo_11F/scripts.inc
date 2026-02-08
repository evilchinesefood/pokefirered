# 1 "data/maps/SilphCo_11F/scripts.pory"

# 2 "data/maps/SilphCo_11F/scripts.pory"
.set LOCALID_GIOVANNI, 3
# 3 "data/maps/SilphCo_11F/scripts.pory"
.set LOCALID_GRUNT1,   4
# 4 "data/maps/SilphCo_11F/scripts.pory"
.set LOCALID_GRUNT2,   6
# 5 "data/maps/SilphCo_11F/scripts.pory"
.set LOCALID_GUY,      7
# 6 "data/maps/SilphCo_11F/scripts.pory"

# 7 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_MapScripts::
# 8 "data/maps/SilphCo_11F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_11F_OnLoad
# 9 "data/maps/SilphCo_11F/scripts.pory"
	.byte 0
# 10 "data/maps/SilphCo_11F/scripts.pory"

# 11 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_OnLoad::
# 12 "data/maps/SilphCo_11F/scripts.pory"
	call_if_unset FLAG_SILPH_11F_DOOR, EventScript_Close11FDoor
# 13 "data/maps/SilphCo_11F/scripts.pory"
	end
# 14 "data/maps/SilphCo_11F/scripts.pory"

# 15 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_President::
# 16 "data/maps/SilphCo_11F/scripts.pory"
	lock
# 17 "data/maps/SilphCo_11F/scripts.pory"
	faceplayer
# 18 "data/maps/SilphCo_11F/scripts.pory"
	goto_if_set FLAG_GOT_MASTER_BALL_FROM_SILPH, SilphCo_11F_EventScript_AlreadyGotMasterBall
# 19 "data/maps/SilphCo_11F/scripts.pory"
	checkplayergender
# 20 "data/maps/SilphCo_11F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, SilphCo_11F_EventScript_PresidentThanksMale
# 21 "data/maps/SilphCo_11F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, SilphCo_11F_EventScript_PresidentThanksFemale
# 22 "data/maps/SilphCo_11F/scripts.pory"
	checkitemspace ITEM_MASTER_BALL
# 23 "data/maps/SilphCo_11F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SilphCo_11F_EventScript_NoRoomForMasterBall
# 24 "data/maps/SilphCo_11F/scripts.pory"
	giveitem_msg SilphCo_11F_Text_ObtainedMasterBallFromPresident, ITEM_MASTER_BALL, 1, MUS_OBTAIN_KEY_ITEM
# 25 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_ThatsOurSecretPrototype
# 26 "data/maps/SilphCo_11F/scripts.pory"
	setflag FLAG_GOT_MASTER_BALL_FROM_SILPH
# 27 "data/maps/SilphCo_11F/scripts.pory"
	release
# 28 "data/maps/SilphCo_11F/scripts.pory"
	end
# 29 "data/maps/SilphCo_11F/scripts.pory"

# 30 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_PresidentThanksMale::
# 31 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_ThanksForSavingMeDearBoy
# 32 "data/maps/SilphCo_11F/scripts.pory"
	return
# 33 "data/maps/SilphCo_11F/scripts.pory"

# 34 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_PresidentThanksFemale::
# 35 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_ThanksForSavingMeDearGirl
# 36 "data/maps/SilphCo_11F/scripts.pory"
	return
# 37 "data/maps/SilphCo_11F/scripts.pory"

# 38 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_NoRoomForMasterBall::
# 39 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_YouHaveNoRoomForThis
# 40 "data/maps/SilphCo_11F/scripts.pory"
	release
# 41 "data/maps/SilphCo_11F/scripts.pory"
	end
# 42 "data/maps/SilphCo_11F/scripts.pory"

# 43 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_AlreadyGotMasterBall::
# 44 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_ThatsOurSecretPrototype
# 45 "data/maps/SilphCo_11F/scripts.pory"
	release
# 46 "data/maps/SilphCo_11F/scripts.pory"
	end
# 47 "data/maps/SilphCo_11F/scripts.pory"

# 48 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_Secretary::
# 49 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_ThanksForRescuingUs, MSGBOX_NPC
# 50 "data/maps/SilphCo_11F/scripts.pory"
	end
# 51 "data/maps/SilphCo_11F/scripts.pory"

# 52 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_GiovanniTriggerLeft::
# 53 "data/maps/SilphCo_11F/scripts.pory"
	lockall
# 54 "data/maps/SilphCo_11F/scripts.pory"
	setvar VAR_TEMP_1, 0
# 55 "data/maps/SilphCo_11F/scripts.pory"
	goto SilphCo_11F_EventScript_BattleGiovanni
# 56 "data/maps/SilphCo_11F/scripts.pory"
	end
# 57 "data/maps/SilphCo_11F/scripts.pory"

# 58 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_GiovanniTriggerRight::
# 59 "data/maps/SilphCo_11F/scripts.pory"
	lockall
# 60 "data/maps/SilphCo_11F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 61 "data/maps/SilphCo_11F/scripts.pory"
	goto SilphCo_11F_EventScript_BattleGiovanni
# 62 "data/maps/SilphCo_11F/scripts.pory"
	end
# 63 "data/maps/SilphCo_11F/scripts.pory"

# 64 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_BattleGiovanni::
# 65 "data/maps/SilphCo_11F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 66 "data/maps/SilphCo_11F/scripts.pory"
	applymovement LOCALID_GIOVANNI, Common_Movement_WalkInPlaceFasterDown
# 67 "data/maps/SilphCo_11F/scripts.pory"
	waitmovement 0
# 68 "data/maps/SilphCo_11F/scripts.pory"
	delay 25
# 69 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_GiovanniIntro
# 70 "data/maps/SilphCo_11F/scripts.pory"
	closemessage
# 71 "data/maps/SilphCo_11F/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, SilphCo_11F_EventScript_GiovanniApproachLeft
# 72 "data/maps/SilphCo_11F/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, SilphCo_11F_EventScript_GiovanniApproachRight
# 73 "data/maps/SilphCo_11F/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_GIOVANNI
# 74 "data/maps/SilphCo_11F/scripts.pory"
	trainerbattle_no_intro TRAINER_BOSS_GIOVANNI_2, SilphCo_11F_Text_GiovanniDefeat
# 75 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_GiovanniPostBattle
# 76 "data/maps/SilphCo_11F/scripts.pory"
	closemessage
# 77 "data/maps/SilphCo_11F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 78 "data/maps/SilphCo_11F/scripts.pory"
	removeobject LOCALID_GIOVANNI
# 79 "data/maps/SilphCo_11F/scripts.pory"
	removeobject LOCALID_GRUNT1
# 80 "data/maps/SilphCo_11F/scripts.pory"
	removeobject LOCALID_GRUNT2
# 81 "data/maps/SilphCo_11F/scripts.pory"
	addobject LOCALID_GUY
# 82 "data/maps/SilphCo_11F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 83 "data/maps/SilphCo_11F/scripts.pory"
	playbgm MUS_PEWTER, 0
# 84 "data/maps/SilphCo_11F/scripts.pory"
	setvar VAR_MAP_SCENE_SILPH_CO_11F, 1
# 85 "data/maps/SilphCo_11F/scripts.pory"
	setflag FLAG_HIDE_SAFFRON_ROCKETS
# 86 "data/maps/SilphCo_11F/scripts.pory"
	clearflag FLAG_HIDE_SAFFRON_CIVILIANS
# 87 "data/maps/SilphCo_11F/scripts.pory"
	releaseall
# 88 "data/maps/SilphCo_11F/scripts.pory"
	end
# 89 "data/maps/SilphCo_11F/scripts.pory"

# 90 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_GiovanniApproachLeft::
# 91 "data/maps/SilphCo_11F/scripts.pory"
	applymovement LOCALID_GIOVANNI, SilphCo_11F_Movement_GiovanniApproachLeft
# 92 "data/maps/SilphCo_11F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilphCo_11F_Movement_PlayerFaceGiovanni
# 93 "data/maps/SilphCo_11F/scripts.pory"
	waitmovement 0
# 94 "data/maps/SilphCo_11F/scripts.pory"
	return
# 95 "data/maps/SilphCo_11F/scripts.pory"

# 96 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_GiovanniApproachRight::
# 97 "data/maps/SilphCo_11F/scripts.pory"
	applymovement LOCALID_GIOVANNI, SilphCo_11F_Movement_GiovanniApproachRight
# 98 "data/maps/SilphCo_11F/scripts.pory"
	waitmovement 0
# 99 "data/maps/SilphCo_11F/scripts.pory"
	return
# 100 "data/maps/SilphCo_11F/scripts.pory"

# 101 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_WorkerM::
# 102 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_WorkerM, MSGBOX_NPC
# 103 "data/maps/SilphCo_11F/scripts.pory"
	end
# 104 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Text_WorkerM:
# 105 "data/maps/SilphCo_11F/scripts.pory"
	.string "Excuse me!\p"
# 106 "data/maps/SilphCo_11F/scripts.pory"
	.string "Do you have an appointment to see\n"
# 107 "data/maps/SilphCo_11F/scripts.pory"
	.string "the PRESIDENT?\p"
# 108 "data/maps/SilphCo_11F/scripts.pory"
	.string "Oh, {PLAYER}!\n"
# 109 "data/maps/SilphCo_11F/scripts.pory"
	.string "Sorry, go on ahead.$"
# 110 "data/maps/SilphCo_11F/scripts.pory"

# 111 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Movement_GiovanniApproachLeft::
# 112 "data/maps/SilphCo_11F/scripts.pory"
	walk_down
# 113 "data/maps/SilphCo_11F/scripts.pory"
	walk_down
# 114 "data/maps/SilphCo_11F/scripts.pory"
	walk_down
# 115 "data/maps/SilphCo_11F/scripts.pory"
	walk_down
# 116 "data/maps/SilphCo_11F/scripts.pory"
	walk_in_place_faster_left
# 117 "data/maps/SilphCo_11F/scripts.pory"
	step_end
# 118 "data/maps/SilphCo_11F/scripts.pory"

# 119 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Movement_GiovanniApproachRight::
# 120 "data/maps/SilphCo_11F/scripts.pory"
	walk_down
# 121 "data/maps/SilphCo_11F/scripts.pory"
	walk_down
# 122 "data/maps/SilphCo_11F/scripts.pory"
	walk_down
# 123 "data/maps/SilphCo_11F/scripts.pory"
	step_end
# 124 "data/maps/SilphCo_11F/scripts.pory"

# 125 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Movement_PlayerFaceGiovanni::
# 126 "data/maps/SilphCo_11F/scripts.pory"
	delay_16
# 127 "data/maps/SilphCo_11F/scripts.pory"
	delay_16
# 128 "data/maps/SilphCo_11F/scripts.pory"
	delay_16
# 129 "data/maps/SilphCo_11F/scripts.pory"
	delay_8
# 130 "data/maps/SilphCo_11F/scripts.pory"
	delay_4
# 131 "data/maps/SilphCo_11F/scripts.pory"
	walk_in_place_faster_right
# 132 "data/maps/SilphCo_11F/scripts.pory"
	step_end
# 133 "data/maps/SilphCo_11F/scripts.pory"

# 134 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_OrbingCheck::
# 135 "data/maps/SilphCo_11F/scripts.pory"
	goto_if_set FLAG_CAUGHT_REGISTEEL, SilphCo_11F_EventScript_End
# 136 "data/maps/SilphCo_11F/scripts.pory"
	goto_if_set FLAG_REGISTEEL_CHECKED, SilphCo_11F_EventScript_Orbing
# 137 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_RegiceCheck
# 138 "data/maps/SilphCo_11F/scripts.pory"
	closemessage
# 139 "data/maps/SilphCo_11F/scripts.pory"
	setvar VAR_0x8005, 1
# 140 "data/maps/SilphCo_11F/scripts.pory"
	special IsDodrioInParty
# 141 "data/maps/SilphCo_11F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SilphCo_11F_EventScript_NoEligiblePkmn
# 142 "data/maps/SilphCo_11F/scripts.pory"
	setvar 0x8004, FAMECHECKER_AGATHA
# 143 "data/maps/SilphCo_11F/scripts.pory"
	callnative CheckFilledFameCheckerFor0x8004
# 144 "data/maps/SilphCo_11F/scripts.pory"
	compare VAR_RESULT, TRUE
# 145 "data/maps/SilphCo_11F/scripts.pory"
	goto_if_eq SilphCo_11F_EventScript_Flag
# 146 "data/maps/SilphCo_11F/scripts.pory"
	release
# 147 "data/maps/SilphCo_11F/scripts.pory"
	end
# 148 "data/maps/SilphCo_11F/scripts.pory"

# 149 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_NoEligiblePkmn::
# 150 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_NoEligiblePkmn
# 151 "data/maps/SilphCo_11F/scripts.pory"
	release
# 152 "data/maps/SilphCo_11F/scripts.pory"
	end
# 153 "data/maps/SilphCo_11F/scripts.pory"

# 154 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_Flag::
# 155 "data/maps/SilphCo_11F/scripts.pory"
	setflag FLAG_REGISTEEL_CHECKED
# 156 "data/maps/SilphCo_11F/scripts.pory"
	goto SilphCo_11F_EventScript_Orbing
# 157 "data/maps/SilphCo_11F/scripts.pory"
	end
# 158 "data/maps/SilphCo_11F/scripts.pory"

# 159 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_Orbing::
# 160 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_Whitney, MSGBOX_YESNO
# 161 "data/maps/SilphCo_11F/scripts.pory"
	closemessage
# 162 "data/maps/SilphCo_11F/scripts.pory"
	delay 40
# 163 "data/maps/SilphCo_11F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SilphCo_11F_EventScript_NoWhitney
# 164 "data/maps/SilphCo_11F/scripts.pory"
	trainerbattle_single TRAINER_RS_COOLTRAINER_M, SilphCo_11F_Text_YesWhitney, SilphCo_11F_Text_PostWhitney, SilphCo_11F_EventScript_PostWhitney, NO_MUSIC
# 165 "data/maps/SilphCo_11F/scripts.pory"
	release
# 166 "data/maps/SilphCo_11F/scripts.pory"
	end
# 167 "data/maps/SilphCo_11F/scripts.pory"

# 168 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_PostWhitney::
# 169 "data/maps/SilphCo_11F/scripts.pory"
	special HealPlayerParty
# 170 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_WhitneyPostBattle
# 171 "data/maps/SilphCo_11F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 172 "data/maps/SilphCo_11F/scripts.pory"
	special QuestLog_CutRecording
# 173 "data/maps/SilphCo_11F/scripts.pory"
	lock
# 174 "data/maps/SilphCo_11F/scripts.pory"
	faceplayer
# 175 "data/maps/SilphCo_11F/scripts.pory"
	setwildbattle SPECIES_REGISTEEL, 70
# 176 "data/maps/SilphCo_11F/scripts.pory"
	waitse
# 177 "data/maps/SilphCo_11F/scripts.pory"
	playmoncry SPECIES_REGISTEEL, CRY_MODE_ENCOUNTER
# 178 "data/maps/SilphCo_11F/scripts.pory"
	message Text_Gyaoo
# 179 "data/maps/SilphCo_11F/scripts.pory"
	waitmessage
# 180 "data/maps/SilphCo_11F/scripts.pory"
	waitmoncry
# 181 "data/maps/SilphCo_11F/scripts.pory"
	delay 10
# 182 "data/maps/SilphCo_11F/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 183 "data/maps/SilphCo_11F/scripts.pory"
	waitbuttonpress
# 184 "data/maps/SilphCo_11F/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 185 "data/maps/SilphCo_11F/scripts.pory"
	special StartLegendaryBattle
# 186 "data/maps/SilphCo_11F/scripts.pory"
	waitstate
# 187 "data/maps/SilphCo_11F/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 188 "data/maps/SilphCo_11F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 189 "data/maps/SilphCo_11F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, SilphCo_11F_EventScript_DefeatedCelebi
# 190 "data/maps/SilphCo_11F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SilphCo_11F_EventScript_RanFromCelebi
# 191 "data/maps/SilphCo_11F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SilphCo_11F_EventScript_RanFromCelebi
# 192 "data/maps/SilphCo_11F/scripts.pory"
	setflag FLAG_CAUGHT_REGISTEEL
# 193 "data/maps/SilphCo_11F/scripts.pory"

# 194 "data/maps/SilphCo_11F/scripts.pory"
	release
# 195 "data/maps/SilphCo_11F/scripts.pory"
	end
# 196 "data/maps/SilphCo_11F/scripts.pory"

# 197 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_DefeatedCelebi::
# 198 "data/maps/SilphCo_11F/scripts.pory"
	setflag FLAG_CAUGHT_REGISTEEL
# 199 "data/maps/SilphCo_11F/scripts.pory"
	goto EventScript_RemoveStaticMon
# 200 "data/maps/SilphCo_11F/scripts.pory"
	end
# 201 "data/maps/SilphCo_11F/scripts.pory"

# 202 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_RanFromCelebi::
# 203 "data/maps/SilphCo_11F/scripts.pory"
	setvar VAR_0x8004, SPECIES_CELEBI
# 204 "data/maps/SilphCo_11F/scripts.pory"
	goto EventScript_MonFlewAway
# 205 "data/maps/SilphCo_11F/scripts.pory"
	end
# 206 "data/maps/SilphCo_11F/scripts.pory"

# 207 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_NoWhitney::
# 208 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_NoWhitney
# 209 "data/maps/SilphCo_11F/scripts.pory"
	release
# 210 "data/maps/SilphCo_11F/scripts.pory"
	end
# 211 "data/maps/SilphCo_11F/scripts.pory"

# 212 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_End::
# 213 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_EndWhitney
# 214 "data/maps/SilphCo_11F/scripts.pory"
	release
# 215 "data/maps/SilphCo_11F/scripts.pory"
	end
# 216 "data/maps/SilphCo_11F/scripts.pory"

# 217 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Text_NoEligiblePkmn::
# 218 "data/maps/SilphCo_11F/scripts.pory"
	.string "You have not meet the requirements.\p"
# 219 "data/maps/SilphCo_11F/scripts.pory"
	.string "Come back when you do.$"
# 220 "data/maps/SilphCo_11F/scripts.pory"

# 221 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Text_RegiceCheck::
# 222 "data/maps/SilphCo_11F/scripts.pory"
	.string "Hello there {PLAYER}.\n"
# 223 "data/maps/SilphCo_11F/scripts.pory"
	.string "I am the Frozen Mirage Trainer.\l"
# 224 "data/maps/SilphCo_11F/scripts.pory"
	.string "Beat me and you shall face a\l"
# 225 "data/maps/SilphCo_11F/scripts.pory"
	.string "special POKEMON.\l"
# 226 "data/maps/SilphCo_11F/scripts.pory"
	.string "But first, I want to see a\l"
# 227 "data/maps/SilphCo_11F/scripts.pory"
	.string "Three Headed Mascot,\l"
# 228 "data/maps/SilphCo_11F/scripts.pory"
	.string "and knowledge on the Ice queen.$"
# 229 "data/maps/SilphCo_11F/scripts.pory"

# 230 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Text_Whitney::
# 231 "data/maps/SilphCo_11F/scripts.pory"
	.string "So, you wish to face me?$"
# 232 "data/maps/SilphCo_11F/scripts.pory"

# 233 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Text_YesWhitney::
# 234 "data/maps/SilphCo_11F/scripts.pory"
	.string "Very well! Prepare yourself!$"
# 235 "data/maps/SilphCo_11F/scripts.pory"

# 236 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Text_PostWhitney::
# 237 "data/maps/SilphCo_11F/scripts.pory"
	.string "So you are worthy...$"
# 238 "data/maps/SilphCo_11F/scripts.pory"

# 239 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Text_WhitneyPostBattle::
# 240 "data/maps/SilphCo_11F/scripts.pory"
	.string "Alright, you have bested me./p"
# 241 "data/maps/SilphCo_11F/scripts.pory"
	.string "Be prepared to face REGISTEEL!$"
# 242 "data/maps/SilphCo_11F/scripts.pory"

# 243 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Text_EndWhitney::
# 244 "data/maps/SilphCo_11F/scripts.pory"
	.string "You had one chance,\n"
# 245 "data/maps/SilphCo_11F/scripts.pory"
	.string "Goodbye.$"
# 246 "data/maps/SilphCo_11F/scripts.pory"

# 247 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Text_NoWhitney::
# 248 "data/maps/SilphCo_11F/scripts.pory"
	.string "Alright, take your time.$"
# 249 "data/maps/SilphCo_11F/scripts.pory"

# 250 "data/maps/SilphCo_11F/scripts.pory"
@ Unused
# 251 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_Monitor::
# 252 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_MonitorHasMonsOnIt, MSGBOX_SIGN
# 253 "data/maps/SilphCo_11F/scripts.pory"
	end
# 254 "data/maps/SilphCo_11F/scripts.pory"

# 255 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_FloorSign::
# 256 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_FloorSign, MSGBOX_SIGN
# 257 "data/maps/SilphCo_11F/scripts.pory"
	end
# 258 "data/maps/SilphCo_11F/scripts.pory"

# 259 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_Grunt1::
# 260 "data/maps/SilphCo_11F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_40, SilphCo_11F_Text_Grunt1Intro, SilphCo_11F_Text_Grunt1Defeat
# 261 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 262 "data/maps/SilphCo_11F/scripts.pory"
	end
# 263 "data/maps/SilphCo_11F/scripts.pory"

# 264 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_Grunt2::
# 265 "data/maps/SilphCo_11F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_41, SilphCo_11F_Text_Grunt2Intro, SilphCo_11F_Text_Grunt2Defeat
# 266 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 267 "data/maps/SilphCo_11F/scripts.pory"
	end
