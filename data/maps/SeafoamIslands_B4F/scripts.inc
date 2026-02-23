# 1 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 2 "data/maps/SeafoamIslands_B4F/scripts.pory"
.equ NUM_BOULDERS_PRESENT, VAR_TEMP_2
# 3 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 4 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_MapScripts::
# 5 "data/maps/SeafoamIslands_B4F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SeafoamIslands_B4F_OnTransition
# 6 "data/maps/SeafoamIslands_B4F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SeafoamIslands_B4F_OnResume
# 7 "data/maps/SeafoamIslands_B4F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SeafoamIslands_B4F_OnLoad
# 8 "data/maps/SeafoamIslands_B4F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SeafoamIslands_B4F_OnWarp
# 9 "data/maps/SeafoamIslands_B4F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SeafoamIslands_B4F_OnFrame
# 10 "data/maps/SeafoamIslands_B4F/scripts.pory"
	.byte 0
# 11 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 12 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_OnResume::
# 13 "data/maps/SeafoamIslands_B4F/scripts.pory"
	call_if_set FLAG_SYS_SPECIAL_WILD_BATTLE, SeafoamIslands_B4F_EventScript_TryRemoveArticuno
# 14 "data/maps/SeafoamIslands_B4F/scripts.pory"
	end
# 15 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 16 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_EventScript_TryRemoveArticuno::
# 17 "data/maps/SeafoamIslands_B4F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 18 "data/maps/SeafoamIslands_B4F/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, EventScript_Return
# 19 "data/maps/SeafoamIslands_B4F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 20 "data/maps/SeafoamIslands_B4F/scripts.pory"
	return
# 21 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 22 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_OnTransition::
# 23 "data/maps/SeafoamIslands_B4F/scripts.pory"
	call_if_unset FLAG_FOUGHT_ARTICUNO, SeafoamIslands_B4F_EventScript_ShowArticuno
# 24 "data/maps/SeafoamIslands_B4F/scripts.pory"
	call_if_unset FLAG_STOPPED_SEAFOAM_B4F_CURRENT, SeafoamIslands_B4F_EventScript_CheckStoppedCurrent
# 25 "data/maps/SeafoamIslands_B4F/scripts.pory"
	call_if_set FLAG_STOPPED_SEAFOAM_B4F_CURRENT, SeafoamIslands_B4F_EventScript_SetNoCurrentLayout
# 26 "data/maps/SeafoamIslands_B4F/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, SeafoamIslands_B4F_EventScript_TryShowRegice
# 27 "data/maps/SeafoamIslands_B4F/scripts.pory"
	end
# 28 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 29 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_EventScript_TryShowRegice::
# 30 "data/maps/SeafoamIslands_B4F/scripts.pory"
	goto_if_set FLAG_CAUGHT_REGICE, EventScript_Return
# 31 "data/maps/SeafoamIslands_B4F/scripts.pory"
	goto_if_set FLAG_FOUGHT_REGICE, EventScript_Return
# 32 "data/maps/SeafoamIslands_B4F/scripts.pory"
	clearflag FLAG_HIDE_LEGEND_REGICE
# 33 "data/maps/SeafoamIslands_B4F/scripts.pory"
	return
# 34 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 35 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_EventScript_Regice::
# 36 "data/maps/SeafoamIslands_B4F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 37 "data/maps/SeafoamIslands_B4F/scripts.pory"
	special QuestLog_CutRecording
# 38 "data/maps/SeafoamIslands_B4F/scripts.pory"
	lock
# 39 "data/maps/SeafoamIslands_B4F/scripts.pory"
	faceplayer
# 40 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setwildbattle SPECIES_REGICE, 50
# 41 "data/maps/SeafoamIslands_B4F/scripts.pory"
	waitse
# 42 "data/maps/SeafoamIslands_B4F/scripts.pory"
	playmoncry SPECIES_REGICE, CRY_MODE_ENCOUNTER
# 43 "data/maps/SeafoamIslands_B4F/scripts.pory"
	message Text_Gyaoo
# 44 "data/maps/SeafoamIslands_B4F/scripts.pory"
	waitmessage
# 45 "data/maps/SeafoamIslands_B4F/scripts.pory"
	waitmoncry
# 46 "data/maps/SeafoamIslands_B4F/scripts.pory"
	delay 10
# 47 "data/maps/SeafoamIslands_B4F/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 48 "data/maps/SeafoamIslands_B4F/scripts.pory"
	waitbuttonpress
# 49 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 50 "data/maps/SeafoamIslands_B4F/scripts.pory"
	special StartLegendaryBattle
# 51 "data/maps/SeafoamIslands_B4F/scripts.pory"
	waitstate
# 52 "data/maps/SeafoamIslands_B4F/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 53 "data/maps/SeafoamIslands_B4F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 54 "data/maps/SeafoamIslands_B4F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, SeafoamIslands_B4F_EventScript_DefeatedRegice
# 55 "data/maps/SeafoamIslands_B4F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SeafoamIslands_B4F_EventScript_RanFromRegice
# 56 "data/maps/SeafoamIslands_B4F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SeafoamIslands_B4F_EventScript_RanFromRegice
# 57 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setflag FLAG_CAUGHT_REGICE
# 58 "data/maps/SeafoamIslands_B4F/scripts.pory"
	release
# 59 "data/maps/SeafoamIslands_B4F/scripts.pory"
	end
# 60 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 61 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_EventScript_DefeatedRegice::
# 62 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setflag FLAG_FOUGHT_REGICE
# 63 "data/maps/SeafoamIslands_B4F/scripts.pory"
	goto EventScript_RemoveStaticMon
# 64 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 65 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_EventScript_RanFromRegice::
# 66 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setflag FLAG_FOUGHT_REGICE
# 67 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setvar VAR_0x8004, SPECIES_REGICE
# 68 "data/maps/SeafoamIslands_B4F/scripts.pory"
	goto EventScript_MonFlewAway
# 69 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 70 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_EventScript_CheckStoppedCurrent::
# 71 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setvar NUM_BOULDERS_PRESENT, 0
# 72 "data/maps/SeafoamIslands_B4F/scripts.pory"
	call_if_unset FLAG_HIDE_SEAFOAM_B4F_BOULDER_1, SeafoamIslands_B4F_EventScript_AddBoulderPresent
# 73 "data/maps/SeafoamIslands_B4F/scripts.pory"
	call_if_unset FLAG_HIDE_SEAFOAM_B4F_BOULDER_2, SeafoamIslands_B4F_EventScript_AddBoulderPresent
# 74 "data/maps/SeafoamIslands_B4F/scripts.pory"
	call_if_eq NUM_BOULDERS_PRESENT, 2, SeafoamIslands_B4F_EventScript_StoppedCurrent
# 75 "data/maps/SeafoamIslands_B4F/scripts.pory"
	return
# 76 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 77 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_EventScript_StoppedCurrent::
# 78 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setflag FLAG_STOPPED_SEAFOAM_B4F_CURRENT
# 79 "data/maps/SeafoamIslands_B4F/scripts.pory"
	return
# 80 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 81 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_EventScript_SetNoCurrentLayout::
# 82 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setmaplayoutindex LAYOUT_SEAFOAM_ISLANDS_B4F_CURRENT_STOPPED
# 83 "data/maps/SeafoamIslands_B4F/scripts.pory"
	return
# 84 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 85 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_EventScript_ShowArticuno::
# 86 "data/maps/SeafoamIslands_B4F/scripts.pory"
	clearflag FLAG_HIDE_ARTICUNO
# 87 "data/maps/SeafoamIslands_B4F/scripts.pory"
	return
# 88 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 89 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_OnLoad::
# 90 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setvar NUM_BOULDERS_PRESENT, 0
# 91 "data/maps/SeafoamIslands_B4F/scripts.pory"
	call_if_unset FLAG_HIDE_SEAFOAM_B4F_BOULDER_1, SeafoamIslands_B4F_EventScript_AddBoulderPresent
# 92 "data/maps/SeafoamIslands_B4F/scripts.pory"
	call_if_unset FLAG_HIDE_SEAFOAM_B4F_BOULDER_2, SeafoamIslands_B4F_EventScript_AddBoulderPresent
# 93 "data/maps/SeafoamIslands_B4F/scripts.pory"
	goto_if_eq NUM_BOULDERS_PRESENT, 2, SeafoamIslands_B4F_EventScript_SetCalmWaterNearStairs
# 94 "data/maps/SeafoamIslands_B4F/scripts.pory"
	end
# 95 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 96 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_EventScript_SetCalmWaterNearStairs::
# 97 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setmetatile 12, 14, METATILE_General_CalmWater, 0
# 98 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setmetatile 13, 14, METATILE_General_CalmWater, 0
# 99 "data/maps/SeafoamIslands_B4F/scripts.pory"
	end
# 100 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 101 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_OnWarp::
# 102 "data/maps/SeafoamIslands_B4F/scripts.pory"
	map_script_2 VAR_MAP_SCENE_SEAFOAM_ISLANDS_B4F, 1, SeafoamIslands_B4F_EventScript_WarpInOnCurrent
# 103 "data/maps/SeafoamIslands_B4F/scripts.pory"
	.2byte 0
# 104 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 105 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_Slowpoke::
# 106 "data/maps/SeafoamIslands_B4F/scripts.pory"
	msgbox SeafoamIslands_B4F_Text_Slowpoke, MSGBOX_NPC
# 107 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setflag FLAG_MOVE_SLOWBRO2
# 108 "data/maps/SeafoamIslands_B4F/scripts.pory"
	removeobject 6
# 109 "data/maps/SeafoamIslands_B4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 110 "data/maps/SeafoamIslands_B4F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 111 "data/maps/SeafoamIslands_B4F/scripts.pory"
	release
# 112 "data/maps/SeafoamIslands_B4F/scripts.pory"
	end
# 113 "data/maps/SeafoamIslands_B4F/scripts.pory"
	
# 114 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_EventScript_WarpInOnCurrent::
# 115 "data/maps/SeafoamIslands_B4F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 116 "data/maps/SeafoamIslands_B4F/scripts.pory"
	special ForcePlayerToStartSurfing
# 117 "data/maps/SeafoamIslands_B4F/scripts.pory"
	end
# 118 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 119 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_OnFrame::
# 120 "data/maps/SeafoamIslands_B4F/scripts.pory"
	map_script_2 VAR_MAP_SCENE_SEAFOAM_ISLANDS_B4F, 1, SeafoamIslands_B4F_EventScript_EnterOnCurrent
# 121 "data/maps/SeafoamIslands_B4F/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, SeafoamIslands_B4F_EventScript_EnterByFalling
# 122 "data/maps/SeafoamIslands_B4F/scripts.pory"
	.2byte 0
# 123 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 124 "data/maps/SeafoamIslands_B4F/scripts.pory"
@ The current the player is forced in on from B3F
# 125 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_EventScript_EnterOnCurrent::
# 126 "data/maps/SeafoamIslands_B4F/scripts.pory"
	lockall
# 127 "data/maps/SeafoamIslands_B4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SeafoamIslands_B4F_Movement_EnterOnCurrent
# 128 "data/maps/SeafoamIslands_B4F/scripts.pory"
	waitmovement 0
# 129 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setvar VAR_MAP_SCENE_SEAFOAM_ISLANDS_B4F, 0
# 130 "data/maps/SeafoamIslands_B4F/scripts.pory"
	releaseall
# 131 "data/maps/SeafoamIslands_B4F/scripts.pory"
	end
# 132 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 133 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_Movement_EnterOnCurrent::
# 134 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_fast_up
# 135 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_fast_up
# 136 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_fast_up
# 137 "data/maps/SeafoamIslands_B4F/scripts.pory"
	step_end
# 138 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 139 "data/maps/SeafoamIslands_B4F/scripts.pory"
@ The current the player lands on when entering the map by falling
# 140 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_EventScript_EnterByFalling::
# 141 "data/maps/SeafoamIslands_B4F/scripts.pory"
	lockall
# 142 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setvar NUM_BOULDERS_PRESENT, 0
# 143 "data/maps/SeafoamIslands_B4F/scripts.pory"
	call_if_unset FLAG_HIDE_SEAFOAM_B4F_BOULDER_1, SeafoamIslands_B4F_EventScript_AddBoulderPresent
# 144 "data/maps/SeafoamIslands_B4F/scripts.pory"
	call_if_unset FLAG_HIDE_SEAFOAM_B4F_BOULDER_2, SeafoamIslands_B4F_EventScript_AddBoulderPresent
# 145 "data/maps/SeafoamIslands_B4F/scripts.pory"
	goto_if_eq NUM_BOULDERS_PRESENT, 2, SeafoamIslands_B4F_EventScript_CurrentBlocked
# 146 "data/maps/SeafoamIslands_B4F/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 147 "data/maps/SeafoamIslands_B4F/scripts.pory"
	call_if_lt VAR_0x8008, 9, SeafoamIslands_B4F_EventScript_RideCurrentFar
# 148 "data/maps/SeafoamIslands_B4F/scripts.pory"
	call_if_ge VAR_0x8008, 9, SeafoamIslands_B4F_EventScript_RideCurrentClose
# 149 "data/maps/SeafoamIslands_B4F/scripts.pory"
	special SeafoamIslandsB4F_CurrentDumpsPlayerOnLand
# 150 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setvar VAR_TEMP_1, 0
# 151 "data/maps/SeafoamIslands_B4F/scripts.pory"
	releaseall
# 152 "data/maps/SeafoamIslands_B4F/scripts.pory"
	end
# 153 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 154 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_EventScript_AddBoulderPresent::
# 155 "data/maps/SeafoamIslands_B4F/scripts.pory"
	addvar NUM_BOULDERS_PRESENT, 1
# 156 "data/maps/SeafoamIslands_B4F/scripts.pory"
	return
# 157 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 158 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_EventScript_RideCurrentFar::
# 159 "data/maps/SeafoamIslands_B4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SeafoamIslands_B4F_Movement_RideCurrentFar
# 160 "data/maps/SeafoamIslands_B4F/scripts.pory"
	waitmovement 0
# 161 "data/maps/SeafoamIslands_B4F/scripts.pory"
	return
# 162 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 163 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_EventScript_RideCurrentClose::
# 164 "data/maps/SeafoamIslands_B4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SeafoamIslands_B4F_Movement_RideCurrentClose
# 165 "data/maps/SeafoamIslands_B4F/scripts.pory"
	waitmovement 0
# 166 "data/maps/SeafoamIslands_B4F/scripts.pory"
	return
# 167 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 168 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_EventScript_CurrentBlocked::
# 169 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setvar VAR_TEMP_1, 0
# 170 "data/maps/SeafoamIslands_B4F/scripts.pory"
	releaseall
# 171 "data/maps/SeafoamIslands_B4F/scripts.pory"
	end
# 172 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 173 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_Movement_RideCurrentFar::
# 174 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_up
# 175 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_up
# 176 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_up
# 177 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_right
# 178 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_right
# 179 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_right
# 180 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_right
# 181 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_up
# 182 "data/maps/SeafoamIslands_B4F/scripts.pory"
	step_end
# 183 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 184 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_Movement_RideCurrentClose::
# 185 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_up
# 186 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_up
# 187 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_up
# 188 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_right
# 189 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_right
# 190 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_right
# 191 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_up
# 192 "data/maps/SeafoamIslands_B4F/scripts.pory"
	step_end
# 193 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 194 "data/maps/SeafoamIslands_B4F/scripts.pory"
@ Triggers blocking re-entry to B3F
# 195 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_EventScript_UpwardCurrent::
# 196 "data/maps/SeafoamIslands_B4F/scripts.pory"
	lockall
# 197 "data/maps/SeafoamIslands_B4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SeafoamIslands_B4F_Movement_WalkUp
# 198 "data/maps/SeafoamIslands_B4F/scripts.pory"
	waitmovement 0
# 199 "data/maps/SeafoamIslands_B4F/scripts.pory"
	releaseall
# 200 "data/maps/SeafoamIslands_B4F/scripts.pory"
	end
# 201 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 202 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_Movement_WalkUp::
# 203 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_up
# 204 "data/maps/SeafoamIslands_B4F/scripts.pory"
	step_end
# 205 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 206 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_EventScript_Articuno::
# 207 "data/maps/SeafoamIslands_B4F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 208 "data/maps/SeafoamIslands_B4F/scripts.pory"
	special QuestLog_CutRecording
# 209 "data/maps/SeafoamIslands_B4F/scripts.pory"
	lock
# 210 "data/maps/SeafoamIslands_B4F/scripts.pory"
	faceplayer
# 211 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setwildbattle SPECIES_ARTICUNO, 50
# 212 "data/maps/SeafoamIslands_B4F/scripts.pory"
	waitse
# 213 "data/maps/SeafoamIslands_B4F/scripts.pory"
	playmoncry SPECIES_ARTICUNO, CRY_MODE_ENCOUNTER
# 214 "data/maps/SeafoamIslands_B4F/scripts.pory"
	message Text_Gyaoo
# 215 "data/maps/SeafoamIslands_B4F/scripts.pory"
	waitmessage
# 216 "data/maps/SeafoamIslands_B4F/scripts.pory"
	waitmoncry
# 217 "data/maps/SeafoamIslands_B4F/scripts.pory"
	delay 10
# 218 "data/maps/SeafoamIslands_B4F/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 219 "data/maps/SeafoamIslands_B4F/scripts.pory"
	waitbuttonpress
# 220 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 221 "data/maps/SeafoamIslands_B4F/scripts.pory"
	special StartLegendaryBattle
# 222 "data/maps/SeafoamIslands_B4F/scripts.pory"
	waitstate
# 223 "data/maps/SeafoamIslands_B4F/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 224 "data/maps/SeafoamIslands_B4F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 225 "data/maps/SeafoamIslands_B4F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, SeafoamIslands_B4F_EventScript_DefeatedArticuno
# 226 "data/maps/SeafoamIslands_B4F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SeafoamIslands_B4F_EventScript_RanFromArticuno
# 227 "data/maps/SeafoamIslands_B4F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SeafoamIslands_B4F_EventScript_RanFromArticuno
# 228 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setflag FLAG_FOUGHT_ARTICUNO
# 229 "data/maps/SeafoamIslands_B4F/scripts.pory"
	release
# 230 "data/maps/SeafoamIslands_B4F/scripts.pory"
	end
# 231 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 232 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_EventScript_DefeatedArticuno::
# 233 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setflag FLAG_FOUGHT_ARTICUNO
# 234 "data/maps/SeafoamIslands_B4F/scripts.pory"
	goto EventScript_RemoveStaticMon
# 235 "data/maps/SeafoamIslands_B4F/scripts.pory"
	end
# 236 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 237 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_EventScript_RanFromArticuno::
# 238 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setvar VAR_0x8004, SPECIES_ARTICUNO
# 239 "data/maps/SeafoamIslands_B4F/scripts.pory"
	goto EventScript_MonFlewAway
# 240 "data/maps/SeafoamIslands_B4F/scripts.pory"
	end
# 241 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 242 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_EventScript_BoulderHintSign::
# 243 "data/maps/SeafoamIslands_B4F/scripts.pory"
	msgbox SeafoamIslands_B4F_Text_BouldersMightChangeWaterFlow, MSGBOX_SIGN
# 244 "data/maps/SeafoamIslands_B4F/scripts.pory"
	end
# 245 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 246 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_EventScript_FastCurrentSign::
# 247 "data/maps/SeafoamIslands_B4F/scripts.pory"
	msgbox SeafoamIslands_B4F_Text_DangerFastCurrent, MSGBOX_SIGN
# 248 "data/maps/SeafoamIslands_B4F/scripts.pory"
	end
# 249 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 250 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_Weebra::
# 251 "data/maps/SeafoamIslands_B4F/scripts.pory"
	trainerbattle_single TRAINER_WEEBRA, SeafoamIslands_B4F_Text_WeebraIntro, SeafoamIslands_B4F_Text_WeebraDefeat
# 252 "data/maps/SeafoamIslands_B4F/scripts.pory"
	msgbox SeafoamIslands_B4F_Text_WeebraPostBattle, MSGBOX_AUTOCLOSE
# 253 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setflag FLAG_WEEBRA
# 254 "data/maps/SeafoamIslands_B4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 255 "data/maps/SeafoamIslands_B4F/scripts.pory"
	removeobject 5
# 256 "data/maps/SeafoamIslands_B4F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 257 "data/maps/SeafoamIslands_B4F/scripts.pory"
	end
