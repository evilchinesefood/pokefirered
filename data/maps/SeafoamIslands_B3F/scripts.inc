# 1 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 2 "data/maps/SeafoamIslands_B3F/scripts.pory"
.equ NUM_BOULDERS_PRESENT, VAR_TEMP_2
# 3 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 4 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_MapScripts::
# 5 "data/maps/SeafoamIslands_B3F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SeafoamIslands_B3F_OnTransition
# 6 "data/maps/SeafoamIslands_B3F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SeafoamIslands_B3F_OnFrame
# 7 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.byte 0
# 8 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 9 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_OnTransition::
# 10 "data/maps/SeafoamIslands_B3F/scripts.pory"
	call_if_unset FLAG_STOPPED_SEAFOAM_B3F_CURRENT, SeafoamIslands_B3F_EventScript_CheckStoppedCurrent
# 11 "data/maps/SeafoamIslands_B3F/scripts.pory"
	call_if_set FLAG_STOPPED_SEAFOAM_B3F_CURRENT, SeafoamIslands_B3F_EventScript_SetNoCurrentLayout
# 12 "data/maps/SeafoamIslands_B3F/scripts.pory"
	end
# 13 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 14 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_CheckStoppedCurrent::
# 15 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setvar NUM_BOULDERS_PRESENT, 0
# 16 "data/maps/SeafoamIslands_B3F/scripts.pory"
	call_if_unset FLAG_HIDE_SEAFOAM_B3F_BOULDER_1, SeafoamIslands_B3F_EventScript_AddBoulderPresent
# 17 "data/maps/SeafoamIslands_B3F/scripts.pory"
	call_if_unset FLAG_HIDE_SEAFOAM_B3F_BOULDER_2, SeafoamIslands_B3F_EventScript_AddBoulderPresent
# 18 "data/maps/SeafoamIslands_B3F/scripts.pory"
	call_if_eq NUM_BOULDERS_PRESENT, 2, SeafoamIslands_B3F_EventScript_StoppedCurrent
# 19 "data/maps/SeafoamIslands_B3F/scripts.pory"
	return
# 20 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 21 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_StoppedCurrent::
# 22 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setflag FLAG_STOPPED_SEAFOAM_B3F_CURRENT
# 23 "data/maps/SeafoamIslands_B3F/scripts.pory"
	return
# 24 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 25 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_SetNoCurrentLayout::
# 26 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setmaplayoutindex LAYOUT_SEAFOAM_ISLANDS_B3F_CURRENT_STOPPED
# 27 "data/maps/SeafoamIslands_B3F/scripts.pory"
	return
# 28 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 29 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_OnFrame::
# 30 "data/maps/SeafoamIslands_B3F/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, SeafoamIslands_B3F_EventScript_EnterByFalling
# 31 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.2byte 0
# 32 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 33 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_EnterByFalling::
# 34 "data/maps/SeafoamIslands_B3F/scripts.pory"
	lockall
# 35 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setvar NUM_BOULDERS_PRESENT, 0
# 36 "data/maps/SeafoamIslands_B3F/scripts.pory"
	call_if_unset FLAG_HIDE_SEAFOAM_B3F_BOULDER_1, SeafoamIslands_B3F_EventScript_AddBoulderPresent
# 37 "data/maps/SeafoamIslands_B3F/scripts.pory"
	call_if_unset FLAG_HIDE_SEAFOAM_B3F_BOULDER_2, SeafoamIslands_B3F_EventScript_AddBoulderPresent
# 38 "data/maps/SeafoamIslands_B3F/scripts.pory"
	goto_if_eq NUM_BOULDERS_PRESENT, 2, SeafoamIslands_B3F_EventScript_CurrentBlocked
# 39 "data/maps/SeafoamIslands_B3F/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 40 "data/maps/SeafoamIslands_B3F/scripts.pory"
	call_if_lt VAR_0x8008, 24, SeafoamIslands_B3F_EventScript_RideCurrentFar
# 41 "data/maps/SeafoamIslands_B3F/scripts.pory"
	call_if_ge VAR_0x8008, 24, SeafoamIslands_B3F_EventScript_RideCurrentClose
# 42 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setvar VAR_MAP_SCENE_SEAFOAM_ISLANDS_B4F, 1
# 43 "data/maps/SeafoamIslands_B3F/scripts.pory"
	warp MAP_SEAFOAM_ISLANDS_B4F, 27, 21
# 44 "data/maps/SeafoamIslands_B3F/scripts.pory"
	waitstate
# 45 "data/maps/SeafoamIslands_B3F/scripts.pory"
	releaseall
# 46 "data/maps/SeafoamIslands_B3F/scripts.pory"
	end
# 47 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 48 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_AddBoulderPresent::
# 49 "data/maps/SeafoamIslands_B3F/scripts.pory"
	addvar NUM_BOULDERS_PRESENT, 1
# 50 "data/maps/SeafoamIslands_B3F/scripts.pory"
	return
# 51 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 52 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_RideCurrentFar::
# 53 "data/maps/SeafoamIslands_B3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SeafoamIslands_B3F_Movement_RideCurrentFar
# 54 "data/maps/SeafoamIslands_B3F/scripts.pory"
	waitmovement 0
# 55 "data/maps/SeafoamIslands_B3F/scripts.pory"
	return
# 56 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 57 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_RideCurrentClose::
# 58 "data/maps/SeafoamIslands_B3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SeafoamIslands_B3F_Movement_RideCurrentClose
# 59 "data/maps/SeafoamIslands_B3F/scripts.pory"
	waitmovement 0
# 60 "data/maps/SeafoamIslands_B3F/scripts.pory"
	return
# 61 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 62 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_CurrentBlocked::
# 63 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setvar VAR_TEMP_1, 0
# 64 "data/maps/SeafoamIslands_B3F/scripts.pory"
	releaseall
# 65 "data/maps/SeafoamIslands_B3F/scripts.pory"
	end
# 66 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 67 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_Movement_RideCurrentFar::
# 68 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 69 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 70 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 71 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 72 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_right
# 73 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_right
# 74 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_right
# 75 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
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
	step_end
# 82 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 83 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_Movement_RideCurrentClose::
# 84 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 85 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 86 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 87 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 88 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_right
# 89 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_right
# 90 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
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
	step_end
# 97 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 98 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_OrbingCheck::
# 99 "data/maps/SeafoamIslands_B3F/scripts.pory"
	goto_if_set FLAG_CAUGHT_REGICE, SeafoamIslands_B3F_EventScript_End
# 100 "data/maps/SeafoamIslands_B3F/scripts.pory"
	goto_if_set FLAG_REGICE_CHECKED, SeafoamIslands_B3F_EventScript_Orbing
# 101 "data/maps/SeafoamIslands_B3F/scripts.pory"
	msgbox SeafoamIslands_B3F_Text_RegiceCheck
# 102 "data/maps/SeafoamIslands_B3F/scripts.pory"
	closemessage
# 103 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setvar VAR_0x8005, 1
# 104 "data/maps/SeafoamIslands_B3F/scripts.pory"
	special IsDodrioInParty
# 105 "data/maps/SeafoamIslands_B3F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SeafoamIslands_B3F_EventScript_NoEligiblePkmn
# 106 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setvar 0x8004, FAMECHECKER_LORELEI
# 107 "data/maps/SeafoamIslands_B3F/scripts.pory"
	callnative CheckFilledFameCheckerFor0x8004
# 108 "data/maps/SeafoamIslands_B3F/scripts.pory"
	compare VAR_RESULT, TRUE
# 109 "data/maps/SeafoamIslands_B3F/scripts.pory"
	goto_if_eq SeafoamIslands_B3F_EventScript_Flag
# 110 "data/maps/SeafoamIslands_B3F/scripts.pory"
	release
# 111 "data/maps/SeafoamIslands_B3F/scripts.pory"
	end
# 112 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 113 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_NoEligiblePkmn::
# 114 "data/maps/SeafoamIslands_B3F/scripts.pory"
	msgbox SeafoamIslands_B3F_Text_NoEligiblePkmn
# 115 "data/maps/SeafoamIslands_B3F/scripts.pory"
	release
# 116 "data/maps/SeafoamIslands_B3F/scripts.pory"
	end
# 117 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 118 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_Flag::
# 119 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setflag FLAG_REGICE_CHECKED
# 120 "data/maps/SeafoamIslands_B3F/scripts.pory"
	goto SeafoamIslands_B3F_EventScript_Orbing
# 121 "data/maps/SeafoamIslands_B3F/scripts.pory"
	end
# 122 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 123 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_Orbing::
# 124 "data/maps/SeafoamIslands_B3F/scripts.pory"
	msgbox SeafoamIslands_B3F_Text_Whitney, MSGBOX_YESNO
# 125 "data/maps/SeafoamIslands_B3F/scripts.pory"
	closemessage
# 126 "data/maps/SeafoamIslands_B3F/scripts.pory"
	delay 40
# 127 "data/maps/SeafoamIslands_B3F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SeafoamIslands_B3F_EventScript_NoWhitney
# 128 "data/maps/SeafoamIslands_B3F/scripts.pory"
	trainerbattle_single TRAINER_RS_COOLTRAINER_F, SeafoamIslands_B3F_Text_YesWhitney, SeafoamIslands_B3F_Text_PostWhitney, SeafoamIslands_B3F_EventScript_PostWhitney, NO_MUSIC
# 129 "data/maps/SeafoamIslands_B3F/scripts.pory"
	release
# 130 "data/maps/SeafoamIslands_B3F/scripts.pory"
	end
# 131 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 132 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_PostWhitney::
# 133 "data/maps/SeafoamIslands_B3F/scripts.pory"
	special HealPlayerParty
# 134 "data/maps/SeafoamIslands_B3F/scripts.pory"
	msgbox SeafoamIslands_B3F_Text_WhitneyPostBattle
# 135 "data/maps/SeafoamIslands_B3F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 136 "data/maps/SeafoamIslands_B3F/scripts.pory"
	special QuestLog_CutRecording
# 137 "data/maps/SeafoamIslands_B3F/scripts.pory"
	lock
# 138 "data/maps/SeafoamIslands_B3F/scripts.pory"
	faceplayer
# 139 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setwildbattle SPECIES_REGICE, 70
# 140 "data/maps/SeafoamIslands_B3F/scripts.pory"
	waitse
# 141 "data/maps/SeafoamIslands_B3F/scripts.pory"
	playmoncry SPECIES_REGICE, CRY_MODE_ENCOUNTER
# 142 "data/maps/SeafoamIslands_B3F/scripts.pory"
	message Text_Gyaoo
# 143 "data/maps/SeafoamIslands_B3F/scripts.pory"
	waitmessage
# 144 "data/maps/SeafoamIslands_B3F/scripts.pory"
	waitmoncry
# 145 "data/maps/SeafoamIslands_B3F/scripts.pory"
	delay 10
# 146 "data/maps/SeafoamIslands_B3F/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 147 "data/maps/SeafoamIslands_B3F/scripts.pory"
	waitbuttonpress
# 148 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 149 "data/maps/SeafoamIslands_B3F/scripts.pory"
	special StartLegendaryBattle
# 150 "data/maps/SeafoamIslands_B3F/scripts.pory"
	waitstate
# 151 "data/maps/SeafoamIslands_B3F/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 152 "data/maps/SeafoamIslands_B3F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 153 "data/maps/SeafoamIslands_B3F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, SeafoamIslands_B3F_EventScript_DefeatedCelebi
# 154 "data/maps/SeafoamIslands_B3F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SeafoamIslands_B3F_EventScript_RanFromCelebi
# 155 "data/maps/SeafoamIslands_B3F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SeafoamIslands_B3F_EventScript_RanFromCelebi
# 156 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setflag FLAG_CAUGHT_REGICE
# 157 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 158 "data/maps/SeafoamIslands_B3F/scripts.pory"
	release
# 159 "data/maps/SeafoamIslands_B3F/scripts.pory"
	end
# 160 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 161 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_DefeatedCelebi::
# 162 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setflag FLAG_CAUGHT_REGICE
# 163 "data/maps/SeafoamIslands_B3F/scripts.pory"
	goto EventScript_RemoveStaticMon
# 164 "data/maps/SeafoamIslands_B3F/scripts.pory"
	end
# 165 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 166 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_RanFromCelebi::
# 167 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setvar VAR_0x8004, SPECIES_CELEBI
# 168 "data/maps/SeafoamIslands_B3F/scripts.pory"
	goto EventScript_MonFlewAway
# 169 "data/maps/SeafoamIslands_B3F/scripts.pory"
	end
# 170 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 171 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_NoWhitney::
# 172 "data/maps/SeafoamIslands_B3F/scripts.pory"
	msgbox SeafoamIslands_B3F_Text_NoWhitney
# 173 "data/maps/SeafoamIslands_B3F/scripts.pory"
	release
# 174 "data/maps/SeafoamIslands_B3F/scripts.pory"
	end
# 175 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 176 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_End::
# 177 "data/maps/SeafoamIslands_B3F/scripts.pory"
	msgbox SeafoamIslands_B3F_Text_EndWhitney
# 178 "data/maps/SeafoamIslands_B3F/scripts.pory"
	release
# 179 "data/maps/SeafoamIslands_B3F/scripts.pory"
	end
# 180 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 181 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_Text_NoEligiblePkmn::
# 182 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "You have not meet the requirements.\p"
# 183 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "Come back when you do.$"
# 184 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 185 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_Text_RegiceCheck::
# 186 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "Hello there {PLAYER}.\n"
# 187 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "I am the Frozen Mirage Trainer.\l"
# 188 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "Beat me and you shall face a\l"
# 189 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "special POKEMON.\l"
# 190 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "But first, I want to see a\l"
# 191 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "Three Headed Mascot,\l"
# 192 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "and knowledge on the Ice queen.$"
# 193 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 194 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_Text_Whitney::
# 195 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "So, you wish to face me?$"
# 196 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 197 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_Text_YesWhitney::
# 198 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "Very well! Prepare yourself!$"
# 199 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 200 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_Text_PostWhitney::
# 201 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "So you are worthy...$"
# 202 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 203 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_Text_WhitneyPostBattle::
# 204 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "Alright, you have bested me./p"
# 205 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "Be prepared to face REGICE!$"
# 206 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 207 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_Text_EndWhitney::
# 208 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "You had one chance,\n"
# 209 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "Goodbye.$"
# 210 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 211 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_Text_NoWhitney::
# 212 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "Alright, take your time.$"
