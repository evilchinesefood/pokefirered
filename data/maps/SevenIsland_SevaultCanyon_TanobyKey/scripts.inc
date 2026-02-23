# 1 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"

# 2 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
.set LOCALID_BOULDER1, 1
# 3 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
.set LOCALID_BOULDER2, 2
# 4 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
.set LOCALID_BOULDER3, 3
# 5 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
.set LOCALID_BOULDER4, 4
# 6 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
.set LOCALID_BOULDER5, 5
# 7 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
.set LOCALID_BOULDER6, 6
# 8 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
.set LOCALID_BOULDER7, 7
# 9 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"

# 10 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
.equ NUM_SWITCHES_PRESSED, VAR_TEMP_8
# 11 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"

# 12 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_MapScripts::
# 13 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_SevaultCanyon_TanobyKey_OnTransition
# 14 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SevenIsland_SevaultCanyon_TanobyKey_OnResume
# 15 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	.byte 0
# 16 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"

# 17 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_OnTransition::
# 18 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SEVEN_ISLAND_SEVAULT_CANYON_TANOBY_KEY
# 19 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	call_if_set FLAG_SYS_UNLOCKED_TANOBY_RUINS, SevenIsland_SevaultCanyon_TanobyKey_EventScript_MoveBouldersToSolvedPos
# 20 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_1, 0
# 21 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_2, 0
# 22 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_3, 0
# 23 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_4, 0
# 24 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_5, 0
# 25 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_6, 0
# 26 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_7, 0
# 27 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar NUM_SWITCHES_PRESSED, 0
# 28 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, SevenIsland_SevaultCanyon_TanobyKey_EventScript_TryShowRayquaza
# 29 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	end
# 30 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"

# 31 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_TryShowRayquaza::
# 32 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_set FLAG_CAUGHT_RAYQUAZA, EventScript_Return
# 33 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_set FLAG_FOUGHT_RAYQUAZA, EventScript_Return
# 34 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	clearflag FLAG_HIDE_LEGEND_RAYQUAZA
# 35 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	return
# 36 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"

# 37 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_OnResume::
# 38 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	call_if_set FLAG_SYS_SPECIAL_WILD_BATTLE, SevenIsland_SevaultCanyon_TanobyKey_EventScript_TryRemoveRayquaza
# 39 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	end
# 40 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"

# 41 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_TryRemoveRayquaza::
# 42 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 43 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, EventScript_Return
# 44 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	removeobject VAR_LAST_TALKED
# 45 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	return
# 46 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"

# 47 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Rayquaza::
# 48 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 49 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	special QuestLog_CutRecording
# 50 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	lock
# 51 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	faceplayer
# 52 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setwildbattle SPECIES_RAYQUAZA, 70
# 53 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	waitse
# 54 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 55 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	message Text_Gyaoo
# 56 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	waitmessage
# 57 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	waitmoncry
# 58 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	delay 10
# 59 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 60 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	waitbuttonpress
# 61 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 62 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	special StartLegendaryBattle
# 63 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	waitstate
# 64 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 65 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 66 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, SevenIsland_SevaultCanyon_TanobyKey_EventScript_DefeatedRayquaza
# 67 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SevenIsland_SevaultCanyon_TanobyKey_EventScript_RanFromRayquaza
# 68 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SevenIsland_SevaultCanyon_TanobyKey_EventScript_RanFromRayquaza
# 69 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setflag FLAG_CAUGHT_RAYQUAZA
# 70 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	release
# 71 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	end
# 72 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"

# 73 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_DefeatedRayquaza::
# 74 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setflag FLAG_FOUGHT_RAYQUAZA
# 75 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto EventScript_RemoveStaticMon
# 76 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"

# 77 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_RanFromRayquaza::
# 78 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setflag FLAG_FOUGHT_RAYQUAZA
# 79 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_0x8004, SPECIES_RAYQUAZA
# 80 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto EventScript_MonFlewAway
# 81 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"

# 82 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_MoveBouldersToSolvedPos::
# 83 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setobjectxyperm LOCALID_BOULDER1, 7, 2
# 84 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setobjectxyperm LOCALID_BOULDER2, 4, 4
# 85 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setobjectxyperm LOCALID_BOULDER3, 10, 4
# 86 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setobjectxyperm LOCALID_BOULDER4, 5, 6
# 87 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setobjectxyperm LOCALID_BOULDER5, 9, 6
# 88 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setobjectxyperm LOCALID_BOULDER6, 5, 8
# 89 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setobjectxyperm LOCALID_BOULDER7, 9, 8
# 90 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	return
# 91 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"

# 92 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch1::
# 93 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	lockall
# 94 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq VAR_TEMP_1, 100, SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchAlreadyPressed
# 95 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed
# 96 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_1, 100
# 97 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq NUM_SWITCHES_PRESSED, 7, SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved
# 98 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	releaseall
# 99 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	end
# 100 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"

# 101 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch2::
# 102 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	lockall
# 103 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq VAR_TEMP_2, 100, SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchAlreadyPressed
# 104 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed
# 105 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_2, 100
# 106 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq NUM_SWITCHES_PRESSED, 7, SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved
# 107 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	releaseall
# 108 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	end
# 109 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"

# 110 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch3::
# 111 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	lockall
# 112 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq VAR_TEMP_3, 100, SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchAlreadyPressed
# 113 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed
# 114 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_3, 100
# 115 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq NUM_SWITCHES_PRESSED, 7, SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved
# 116 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	releaseall
# 117 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	end
# 118 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"

# 119 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch4::
# 120 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	lockall
# 121 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq VAR_TEMP_4, 100, SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchAlreadyPressed
# 122 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed
# 123 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_4, 100
# 124 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq NUM_SWITCHES_PRESSED, 7, SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved
# 125 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	releaseall
# 126 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	end
# 127 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"

# 128 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch5::
# 129 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	lockall
# 130 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq VAR_TEMP_5, 100, SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchAlreadyPressed
# 131 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed
# 132 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_5, 100
# 133 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq NUM_SWITCHES_PRESSED, 7, SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved
# 134 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	releaseall
# 135 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	end
# 136 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"

# 137 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch6::
# 138 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	lockall
# 139 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq VAR_TEMP_6, 100, SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchAlreadyPressed
# 140 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed
# 141 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_6, 100
# 142 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq NUM_SWITCHES_PRESSED, 7, SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved
# 143 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	releaseall
# 144 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	end
# 145 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"

# 146 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch7::
# 147 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	lockall
# 148 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq VAR_TEMP_7, 100, SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchAlreadyPressed
# 149 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed
# 150 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_7, 100
# 151 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq NUM_SWITCHES_PRESSED, 7, SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved
# 152 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	releaseall
# 153 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	end
# 154 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"

# 155 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed::
# 156 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	addvar NUM_SWITCHES_PRESSED, 1
# 157 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	playse SE_TRUCK_MOVE
# 158 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_0x8004, 1
# 159 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_0x8005, 1
# 160 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_0x8006, 8
# 161 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_0x8007, 3
# 162 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	special ShakeScreen
# 163 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	delay 60
# 164 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	return
# 165 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"

# 166 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolvedShakeScreen::
# 167 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_0x8004, 2
# 168 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_0x8005, 2
# 169 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_0x8006, 10
# 170 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_0x8007, 3
# 171 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	special ShakeScreen
# 172 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	delay 60
# 173 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_0x8004, 3
# 174 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_0x8005, 3
# 175 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_0x8006, 12
# 176 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_0x8007, 2
# 177 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	special ShakeScreen
# 178 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	delay 60
# 179 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	playse SE_LAVARIDGE_FALL_WARP
# 180 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	waitse
# 181 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	return
# 182 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"

# 183 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchAlreadyPressed::
# 184 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	releaseall
# 185 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	end
# 186 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"

# 187 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved::
# 188 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolvedShakeScreen
# 189 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_TanobyKey_Text_MysteriousRumbleFarAway
# 190 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setflag FLAG_SYS_UNLOCKED_TANOBY_RUINS
# 191 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	releaseall
# 192 "data/maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	end
