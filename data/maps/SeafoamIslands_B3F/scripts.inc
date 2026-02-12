# 1 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 2 "data/maps/SeafoamIslands_B3F/scripts.pory"
.equ NUM_BOULDERS_PRESENT, VAR_TEMP_2
# 3 "data/maps/SeafoamIslands_B3F/scripts.pory"
.set LOCALID_MIRAGE, 8
# 4 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 5 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_MapScripts::
# 6 "data/maps/SeafoamIslands_B3F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SeafoamIslands_B3F_OnTransition
# 7 "data/maps/SeafoamIslands_B3F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SeafoamIslands_B3F_OnFrame
# 8 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.byte 0
# 9 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 10 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_OnTransition::
# 11 "data/maps/SeafoamIslands_B3F/scripts.pory"
	call_if_unset FLAG_STOPPED_SEAFOAM_B3F_CURRENT, SeafoamIslands_B3F_EventScript_CheckStoppedCurrent
# 12 "data/maps/SeafoamIslands_B3F/scripts.pory"
	call_if_set FLAG_STOPPED_SEAFOAM_B3F_CURRENT, SeafoamIslands_B3F_EventScript_SetNoCurrentLayout
# 13 "data/maps/SeafoamIslands_B3F/scripts.pory"
	end
# 14 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 15 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_CheckStoppedCurrent::
# 16 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setvar NUM_BOULDERS_PRESENT, 0
# 17 "data/maps/SeafoamIslands_B3F/scripts.pory"
	call_if_unset FLAG_HIDE_SEAFOAM_B3F_BOULDER_1, SeafoamIslands_B3F_EventScript_AddBoulderPresent
# 18 "data/maps/SeafoamIslands_B3F/scripts.pory"
	call_if_unset FLAG_HIDE_SEAFOAM_B3F_BOULDER_2, SeafoamIslands_B3F_EventScript_AddBoulderPresent
# 19 "data/maps/SeafoamIslands_B3F/scripts.pory"
	call_if_eq NUM_BOULDERS_PRESENT, 2, SeafoamIslands_B3F_EventScript_StoppedCurrent
# 20 "data/maps/SeafoamIslands_B3F/scripts.pory"
	return
# 21 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 22 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_StoppedCurrent::
# 23 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setflag FLAG_STOPPED_SEAFOAM_B3F_CURRENT
# 24 "data/maps/SeafoamIslands_B3F/scripts.pory"
	return
# 25 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 26 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_SetNoCurrentLayout::
# 27 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setmaplayoutindex LAYOUT_SEAFOAM_ISLANDS_B3F_CURRENT_STOPPED
# 28 "data/maps/SeafoamIslands_B3F/scripts.pory"
	return
# 29 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 30 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_OnFrame::
# 31 "data/maps/SeafoamIslands_B3F/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, SeafoamIslands_B3F_EventScript_EnterByFalling
# 32 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.2byte 0
# 33 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 34 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_EnterByFalling::
# 35 "data/maps/SeafoamIslands_B3F/scripts.pory"
	lockall
# 36 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setvar NUM_BOULDERS_PRESENT, 0
# 37 "data/maps/SeafoamIslands_B3F/scripts.pory"
	call_if_unset FLAG_HIDE_SEAFOAM_B3F_BOULDER_1, SeafoamIslands_B3F_EventScript_AddBoulderPresent
# 38 "data/maps/SeafoamIslands_B3F/scripts.pory"
	call_if_unset FLAG_HIDE_SEAFOAM_B3F_BOULDER_2, SeafoamIslands_B3F_EventScript_AddBoulderPresent
# 39 "data/maps/SeafoamIslands_B3F/scripts.pory"
	goto_if_eq NUM_BOULDERS_PRESENT, 2, SeafoamIslands_B3F_EventScript_CurrentBlocked
# 40 "data/maps/SeafoamIslands_B3F/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 41 "data/maps/SeafoamIslands_B3F/scripts.pory"
	call_if_lt VAR_0x8008, 24, SeafoamIslands_B3F_EventScript_RideCurrentFar
# 42 "data/maps/SeafoamIslands_B3F/scripts.pory"
	call_if_ge VAR_0x8008, 24, SeafoamIslands_B3F_EventScript_RideCurrentClose
# 43 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setvar VAR_MAP_SCENE_SEAFOAM_ISLANDS_B4F, 1
# 44 "data/maps/SeafoamIslands_B3F/scripts.pory"
	warp MAP_SEAFOAM_ISLANDS_B4F, 27, 21
# 45 "data/maps/SeafoamIslands_B3F/scripts.pory"
	waitstate
# 46 "data/maps/SeafoamIslands_B3F/scripts.pory"
	releaseall
# 47 "data/maps/SeafoamIslands_B3F/scripts.pory"
	end
# 48 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 49 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_AddBoulderPresent::
# 50 "data/maps/SeafoamIslands_B3F/scripts.pory"
	addvar NUM_BOULDERS_PRESENT, 1
# 51 "data/maps/SeafoamIslands_B3F/scripts.pory"
	return
# 52 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 53 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_RideCurrentFar::
# 54 "data/maps/SeafoamIslands_B3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SeafoamIslands_B3F_Movement_RideCurrentFar
# 55 "data/maps/SeafoamIslands_B3F/scripts.pory"
	waitmovement 0
# 56 "data/maps/SeafoamIslands_B3F/scripts.pory"
	return
# 57 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 58 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_RideCurrentClose::
# 59 "data/maps/SeafoamIslands_B3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SeafoamIslands_B3F_Movement_RideCurrentClose
# 60 "data/maps/SeafoamIslands_B3F/scripts.pory"
	waitmovement 0
# 61 "data/maps/SeafoamIslands_B3F/scripts.pory"
	return
# 62 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 63 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_CurrentBlocked::
# 64 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setvar VAR_TEMP_1, 0
# 65 "data/maps/SeafoamIslands_B3F/scripts.pory"
	releaseall
# 66 "data/maps/SeafoamIslands_B3F/scripts.pory"
	end
# 67 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 68 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_Movement_RideCurrentFar::
# 69 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 70 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 71 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 72 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 73 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_right
# 74 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_right
# 75 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_right
# 76 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 77 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 78 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 79 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 80 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 81 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 82 "data/maps/SeafoamIslands_B3F/scripts.pory"
	step_end
# 83 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 84 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_Movement_RideCurrentClose::
# 85 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 86 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 87 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 88 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 89 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_right
# 90 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_right
# 91 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 92 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 93 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 94 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 95 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 96 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 97 "data/maps/SeafoamIslands_B3F/scripts.pory"
	step_end
# 98 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 99 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_OrbingCheck::
# 100 "data/maps/SeafoamIslands_B3F/scripts.pory"
	lock
# 101 "data/maps/SeafoamIslands_B3F/scripts.pory"
	faceplayer
# 102 "data/maps/SeafoamIslands_B3F/scripts.pory"
	goto_if_set FLAG_CAUGHT_REGICE, SeafoamIslands_B3F_EventScript_End
# 103 "data/maps/SeafoamIslands_B3F/scripts.pory"
	goto_if_set FLAG_REGICE_CHECKED, SeafoamIslands_B3F_EventScript_Orbing
# 104 "data/maps/SeafoamIslands_B3F/scripts.pory"
	msgbox SeafoamIslands_B3F_Text_RegiceCheck
# 105 "data/maps/SeafoamIslands_B3F/scripts.pory"
	closemessage
# 106 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setvar VAR_0x8005, 1
# 107 "data/maps/SeafoamIslands_B3F/scripts.pory"
	special IsDodrioInParty
# 108 "data/maps/SeafoamIslands_B3F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SeafoamIslands_B3F_EventScript_NoEligiblePkmn
# 109 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setvar 0x8004, FAMECHECKER_LORELEI
# 110 "data/maps/SeafoamIslands_B3F/scripts.pory"
	callnative CheckFilledFameCheckerFor0x8004
# 111 "data/maps/SeafoamIslands_B3F/scripts.pory"
	compare VAR_RESULT, TRUE
# 112 "data/maps/SeafoamIslands_B3F/scripts.pory"
	goto_if_eq SeafoamIslands_B3F_EventScript_Flag
# 113 "data/maps/SeafoamIslands_B3F/scripts.pory"
	release
# 114 "data/maps/SeafoamIslands_B3F/scripts.pory"
	end
# 115 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 116 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_NoEligiblePkmn::
# 117 "data/maps/SeafoamIslands_B3F/scripts.pory"
	msgbox SeafoamIslands_B3F_Text_NoEligiblePkmn
# 118 "data/maps/SeafoamIslands_B3F/scripts.pory"
	release
# 119 "data/maps/SeafoamIslands_B3F/scripts.pory"
	end
# 120 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 121 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_Flag::
# 122 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setflag FLAG_REGICE_CHECKED
# 123 "data/maps/SeafoamIslands_B3F/scripts.pory"
	goto SeafoamIslands_B3F_EventScript_Orbing
# 124 "data/maps/SeafoamIslands_B3F/scripts.pory"
	end
# 125 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 126 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_Orbing::
# 127 "data/maps/SeafoamIslands_B3F/scripts.pory"
	msgbox SeafoamIslands_B3F_Text_Whitney, MSGBOX_YESNO
# 128 "data/maps/SeafoamIslands_B3F/scripts.pory"
	closemessage
# 129 "data/maps/SeafoamIslands_B3F/scripts.pory"
	delay 40
# 130 "data/maps/SeafoamIslands_B3F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SeafoamIslands_B3F_EventScript_NoWhitney
# 131 "data/maps/SeafoamIslands_B3F/scripts.pory"
	trainerbattle_single TRAINER_RS_COOLTRAINER_F, SeafoamIslands_B3F_Text_YesWhitney, SeafoamIslands_B3F_Text_PostWhitney, SeafoamIslands_B3F_EventScript_PostWhitney, NO_MUSIC
# 132 "data/maps/SeafoamIslands_B3F/scripts.pory"
	release
# 133 "data/maps/SeafoamIslands_B3F/scripts.pory"
	end
# 134 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 135 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_PostWhitney::
# 136 "data/maps/SeafoamIslands_B3F/scripts.pory"
	special HealPlayerParty
# 137 "data/maps/SeafoamIslands_B3F/scripts.pory"
	msgbox SeafoamIslands_B3F_Text_WhitneyPostBattle
# 138 "data/maps/SeafoamIslands_B3F/scripts.pory"
	waitmessage
# 139 "data/maps/SeafoamIslands_B3F/scripts.pory"
	goto SeafoamIslands_B3F_EventScript_Regice
# 140 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 141 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_Regice::
# 142 "data/maps/SeafoamIslands_B3F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 143 "data/maps/SeafoamIslands_B3F/scripts.pory"
	special QuestLog_CutRecording
# 144 "data/maps/SeafoamIslands_B3F/scripts.pory"
	lock
# 145 "data/maps/SeafoamIslands_B3F/scripts.pory"
	faceplayer
# 146 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setwildbattle SPECIES_REGICE, 70
# 147 "data/maps/SeafoamIslands_B3F/scripts.pory"
	waitse
# 148 "data/maps/SeafoamIslands_B3F/scripts.pory"
	playmoncry SPECIES_REGICE, CRY_MODE_ENCOUNTER
# 149 "data/maps/SeafoamIslands_B3F/scripts.pory"
	message Text_Gyaoo
# 150 "data/maps/SeafoamIslands_B3F/scripts.pory"
	waitmessage
# 151 "data/maps/SeafoamIslands_B3F/scripts.pory"
	waitmoncry
# 152 "data/maps/SeafoamIslands_B3F/scripts.pory"
	delay 10
# 153 "data/maps/SeafoamIslands_B3F/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 154 "data/maps/SeafoamIslands_B3F/scripts.pory"
	waitbuttonpress
# 155 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 156 "data/maps/SeafoamIslands_B3F/scripts.pory"
	special StartLegendaryBattle
# 157 "data/maps/SeafoamIslands_B3F/scripts.pory"
	waitstate
# 158 "data/maps/SeafoamIslands_B3F/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 159 "data/maps/SeafoamIslands_B3F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 160 "data/maps/SeafoamIslands_B3F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, SeafoamIslands_B3F_EventScript_DefeatedCelebi
# 161 "data/maps/SeafoamIslands_B3F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SeafoamIslands_B3F_EventScript_RanFromCelebi
# 162 "data/maps/SeafoamIslands_B3F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SeafoamIslands_B3F_EventScript_RanFromCelebi
# 163 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setflag FLAG_CAUGHT_REGICE
# 164 "data/maps/SeafoamIslands_B3F/scripts.pory"
	clearflag FLAG_ICE_TRAINER
# 165 "data/maps/SeafoamIslands_B3F/scripts.pory"
	msgbox SeafoamIslands_B3F_Text_EndWhitney
# 166 "data/maps/SeafoamIslands_B3F/scripts.pory"
	waitmessage
# 167 "data/maps/SeafoamIslands_B3F/scripts.pory"
	release
# 168 "data/maps/SeafoamIslands_B3F/scripts.pory"
	end
# 169 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 170 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_DefeatedCelebi::
# 171 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setflag FLAG_CAUGHT_REGICE
# 172 "data/maps/SeafoamIslands_B3F/scripts.pory"
	clearflag FLAG_ICE_TRAINER
# 173 "data/maps/SeafoamIslands_B3F/scripts.pory"
	msgbox SeafoamIslands_B3F_Text_EndWhitney
# 174 "data/maps/SeafoamIslands_B3F/scripts.pory"
	waitmessage
# 175 "data/maps/SeafoamIslands_B3F/scripts.pory"
	goto EventScript_RemoveStaticMon
# 176 "data/maps/SeafoamIslands_B3F/scripts.pory"
	end
# 177 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 178 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_RanFromCelebi::
# 179 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setvar VAR_0x8004, SPECIES_REGICE
# 180 "data/maps/SeafoamIslands_B3F/scripts.pory"
	msgbox SeafoamIslands_B3F_Text_EndWhitney
# 181 "data/maps/SeafoamIslands_B3F/scripts.pory"
	waitmessage
# 182 "data/maps/SeafoamIslands_B3F/scripts.pory"
	goto EventScript_MonFlewAway
# 183 "data/maps/SeafoamIslands_B3F/scripts.pory"
	end
# 184 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 185 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_NoWhitney::
# 186 "data/maps/SeafoamIslands_B3F/scripts.pory"
	msgbox SeafoamIslands_B3F_Text_NoWhitney
# 187 "data/maps/SeafoamIslands_B3F/scripts.pory"
	release
# 188 "data/maps/SeafoamIslands_B3F/scripts.pory"
	end
# 189 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 190 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_End::
# 191 "data/maps/SeafoamIslands_B3F/scripts.pory"
	msgbox SeafoamIslands_B3F_Text_EndWhitney
# 192 "data/maps/SeafoamIslands_B3F/scripts.pory"
	waitmessage
# 193 "data/maps/SeafoamIslands_B3F/scripts.pory"
	clearflag FLAG_ICE_TRAINER
# 194 "data/maps/SeafoamIslands_B3F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 195 "data/maps/SeafoamIslands_B3F/scripts.pory"
	removeobject LOCALID_MIRAGE
# 196 "data/maps/SeafoamIslands_B3F/scripts.pory"
	fadescreen FADE_FROM_BLACK	
# 197 "data/maps/SeafoamIslands_B3F/scripts.pory"
	release
# 198 "data/maps/SeafoamIslands_B3F/scripts.pory"
	end
# 199 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 200 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_Text_NoEligiblePkmn::
# 201 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "You have not meet the requirements.\p"
# 202 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "Come back when you do.$"
# 203 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 204 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_Text_RegiceCheck::
# 205 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "Hello there {PLAYER}.\n"
# 206 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "I am the Frozen Mirage Trainer.\l"
# 207 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "Beat me and you shall face a\l"
# 208 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "special POKEMON.\l"
# 209 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "But first, I want to see a\l"
# 210 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "Three Headed Mascot,\l"
# 211 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "and knowledge on the Ice queen.$"
# 212 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 213 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_Text_Whitney::
# 214 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "So, you wish to face me?$"
# 215 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "Better Save First,\l$"
# 216 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "One chance at REGICE.$"
# 217 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 218 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_Text_YesWhitney::
# 219 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "Very well! Prepare yourself!$"
# 220 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 221 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_Text_PostWhitney::
# 222 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "So you are worthy...$"
# 223 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 224 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_Text_WhitneyPostBattle::
# 225 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "Alright, you have bested me.\p"
# 226 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "Be prepared to face REGICE!$"
# 227 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 228 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_Text_EndWhitney::
# 229 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "Goodbye.$"
# 230 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 231 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_Text_NoWhitney::
# 232 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "Alright, take your time.$"
