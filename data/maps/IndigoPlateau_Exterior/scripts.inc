# 1 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 2 "data/maps/IndigoPlateau_Exterior/scripts.pory"
.equ LOCALID_RIVAL,    1
# 3 "data/maps/IndigoPlateau_Exterior/scripts.pory"
.equ LOCALID_PROF_OAK, 2
# 4 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 5 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_MapScripts::
# 6 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IndigoPlateau_Exterior_OnTransition
# 7 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, IndigoPlateau_Exterior_OnFrame
# 8 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	.byte 0
# 9 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 10 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_OnTransition::
# 11 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_INDIGO_PLATEAU_EXTERIOR
# 12 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	call_if_eq VAR_MAP_SCENE_INDIGO_PLATEAU_EXTERIOR, 1, IndigoPlateau_Exterior_EventScript_PlayCreditsMusic
# 13 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	end
# 14 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 15 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_EventScript_PlayCreditsMusic::
# 16 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	playbgm MUS_CREDITS, 0
# 17 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	return
# 18 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 19 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_OnFrame::
# 20 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	map_script_2 VAR_MAP_SCENE_INDIGO_PLATEAU_EXTERIOR, 1, IndigoPlateau_Exterior_EventScript_Credits
# 21 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	.2byte 0
# 22 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 23 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 24 "data/maps/IndigoPlateau_Exterior/scripts.pory"
@ After beating the champion, you are warped to the main
# 25 "data/maps/IndigoPlateau_Exterior/scripts.pory"
@ entrance of Indigo Plateau. This script starts running
# 26 "data/maps/IndigoPlateau_Exterior/scripts.pory"
@ immediately after your walking animation.
# 27 "data/maps/IndigoPlateau_Exterior/scripts.pory"
@ The script is timed to the music.
# 28 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_EventScript_Credits::
# 29 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	lockall
# 30 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay 105
# 31 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 32 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	@ Rival exits building. Spawn a dummy object to lock the camera.
# 33 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	opendoor 11, 6
# 34 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitdooranim
# 35 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	special SpawnCameraObject
# 36 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	addobject LOCALID_RIVAL
# 37 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_RIVAL, IndigoPlateau_Exterior_Movement_RivalExitBuilding
# 38 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IndigoPlateau_Exterior_Movement_PushPlayerOutOfWay
# 39 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement 0
# 40 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	closedoor 11, 6
# 41 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitdooranim
# 42 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 43 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	@ Rival runs off
# 44 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IndigoPlateau_Exterior_Movement_PlayerWatchRivalLeave
# 45 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_RIVAL, IndigoPlateau_Exterior_Movement_RivalLeave
# 46 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement 0
# 47 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay 100
# 48 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 49 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	@ Oak exits building
# 50 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	opendoor 11, 6
# 51 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitdooranim
# 52 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	addobject LOCALID_PROF_OAK
# 53 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_PROF_OAK, IndigoPlateau_Exterior_Movement_OakExitBuilding
# 54 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement 0
# 55 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	closedoor 11, 6
# 56 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitdooranim
# 57 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay 160
# 58 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 59 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	@ Oak looks at player, then walks off
# 60 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IndigoPlateau_Exterior_Movement_PlayerWatchOakLeave
# 61 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_PROF_OAK, IndigoPlateau_Exterior_Movement_OakLeave
# 62 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement 0
# 63 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay 100
# 64 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 65 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	@ Player begin to leave
# 66 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IndigoPlateau_Exterior_Movement_PlayerBeginLeave
# 67 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement 0
# 68 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay 155
# 69 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IndigoPlateau_Exterior_Movement_PlayerFaceLeague
# 70 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement 0
# 71 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay 90
# 72 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 73 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	@ Player runs off
# 74 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IndigoPlateau_Exterior_Movement_PlayerTurnAround
# 75 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement 0
# 76 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IndigoPlateau_Exterior_Movement_PlayerLeave
# 77 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement 0
# 78 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 79 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	@ Reset the map state and roll the credits
# 80 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	special RemoveCameraObject
# 81 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	setvar VAR_MAP_SCENE_INDIGO_PLATEAU_EXTERIOR, 0
# 82 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	removeobject LOCALID_RIVAL
# 83 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	removeobject LOCALID_PROF_OAK
# 84 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	special DoCredits
# 85 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitstate
# 86 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	releaseall
# 87 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	end
# 88 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 89 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerLeave::
# 90 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	player_run_down
# 91 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	player_run_down
# 92 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	player_run_down
# 93 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	player_run_down
# 94 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	player_run_down
# 95 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	player_run_down
# 96 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end
# 97 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 98 "data/maps/IndigoPlateau_Exterior/scripts.pory"
@ Unused
# 99 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerExitBuilding::
# 100 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 101 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 102 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end
# 103 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 104 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerWatchRivalLeave::
# 105 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 106 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_4
# 107 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_in_place_faster_down
# 108 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end
# 109 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 110 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerWatchOakLeave::
# 111 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_8
# 112 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_in_place_faster_right
# 113 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 114 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 115 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 116 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 117 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 118 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 119 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 120 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 121 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 122 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 123 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 124 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_in_place_faster_down
# 125 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end
# 126 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 127 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerBeginLeave::
# 128 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_right
# 129 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 130 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 131 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 132 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 133 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 134 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end
# 135 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 136 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerTurnAround::
# 137 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_in_place_faster_down
# 138 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end
# 139 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 140 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_PushPlayerOutOfWay::
# 141 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	face_right
# 142 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	lock_facing_direction
# 143 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_left
# 144 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	unlock_facing_direction
# 145 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end
# 146 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 147 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerFaceLeague::
# 148 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_in_place_faster_up
# 149 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end
# 150 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 151 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_RivalLeave::
# 152 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_fast_down
# 153 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_fast_down
# 154 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_fast_down
# 155 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_fast_down
# 156 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_fast_down
# 157 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_fast_down
# 158 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_fast_down
# 159 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end
# 160 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 161 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_RivalExitBuilding::
# 162 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_fast_down
# 163 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end
# 164 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 165 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_OakLeave::
# 166 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_in_place_faster_left
# 167 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 168 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 169 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 170 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 171 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 172 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 173 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 174 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 175 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 176 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 177 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_in_place_faster_down
# 178 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 179 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 180 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 181 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 182 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 183 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 184 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 185 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 186 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end
# 187 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 188 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_OakExitBuilding::
# 189 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 190 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end
# 191 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 192 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_EventScript_OrbingCheck::
# 193 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	goto_if_set FLAG_CAUGHT_REGISTEEL, IndigoPlateau_Exterior_EventScript_End
# 194 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	goto_if_set FLAG_REGISTEEL_CHECKED, IndigoPlateau_Exterior_EventScript_Orbing
# 195 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	msgbox IndigoPlateau_Exterior_Text_RegiceCheck
# 196 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	closemessage
# 197 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	setvar VAR_0x8005, 1
# 198 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	special IsDodrioInParty
# 199 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	goto_if_eq VAR_RESULT, 0, IndigoPlateau_Exterior_EventScript_NoEligiblePkmn
# 200 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	setvar 0x8004, FAMECHECKER_LORELEI
# 201 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	callnative CheckFilledFameCheckerFor0x8004
# 202 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	compare VAR_RESULT, TRUE
# 203 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	goto_if_eq IndigoPlateau_Exterior_EventScript_Flag
# 204 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	release
# 205 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	end
# 206 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 207 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_EventScript_NoEligiblePkmn::
# 208 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	msgbox IndigoPlateau_Exterior_Text_NoEligiblePkmn
# 209 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	release
# 210 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	end
# 211 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 212 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_EventScript_Flag::
# 213 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	setflag FLAG_REGISTEEL_CHECKED
# 214 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	goto IndigoPlateau_Exterior_EventScript_Orbing
# 215 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	end
# 216 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 217 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_EventScript_Orbing::
# 218 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	msgbox IndigoPlateau_Exterior_Text_Whitney, MSGBOX_YESNO
# 219 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	closemessage
# 220 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay 40
# 221 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	goto_if_eq VAR_RESULT, NO, IndigoPlateau_Exterior_EventScript_NoWhitney
# 222 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	trainerbattle_single TRAINER_AQUA_LEADER, IndigoPlateau_Exterior_Text_YesWhitney, IndigoPlateau_Exterior_Text_PostWhitney, IndigoPlateau_Exterior_EventScript_PostWhitney, NO_MUSIC
# 223 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	release
# 224 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	end
# 225 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 226 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_EventScript_PostWhitney::
# 227 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	special HealPlayerParty
# 228 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	msgbox IndigoPlateau_Exterior_Text_WhitneyPostBattle
# 229 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 230 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	special QuestLog_CutRecording
# 231 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	lock
# 232 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	faceplayer
# 233 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	setwildbattle SPECIES_REGISTEEL, 70
# 234 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitse
# 235 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	playmoncry SPECIES_REGISTEEL, CRY_MODE_ENCOUNTER
# 236 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	message Text_Gyaoo
# 237 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitmessage
# 238 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitmoncry
# 239 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay 10
# 240 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 241 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitbuttonpress
# 242 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 243 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	special StartLegendaryBattle
# 244 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitstate
# 245 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 246 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 247 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, IndigoPlateau_Exterior_EventScript_DefeatedCelebi
# 248 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, IndigoPlateau_Exterior_EventScript_RanFromCelebi
# 249 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, IndigoPlateau_Exterior_EventScript_RanFromCelebi
# 250 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	setflag FLAG_CAUGHT_REGISTEEL
# 251 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 252 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	release
# 253 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	end
# 254 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 255 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_EventScript_DefeatedCelebi::
# 256 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	setflag FLAG_CAUGHT_REGISTEEL
# 257 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	goto EventScript_RemoveStaticMon
# 258 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	end
# 259 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 260 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_EventScript_RanFromCelebi::
# 261 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	setvar VAR_0x8004, SPECIES_CELEBI
# 262 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	goto EventScript_MonFlewAway
# 263 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	end
# 264 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 265 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_EventScript_NoWhitney::
# 266 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	msgbox IndigoPlateau_Exterior_Text_NoWhitney
# 267 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	release
# 268 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	end
# 269 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 270 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_EventScript_End::
# 271 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	msgbox IndigoPlateau_Exterior_Text_EndWhitney
# 272 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	release
# 273 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	end
# 274 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 275 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Text_NoEligiblePkmn::
# 276 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	.string "You have not meet the requirements.\p"
# 277 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	.string "Come back when you do.$"
# 278 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 279 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Text_RegiceCheck::
# 280 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	.string "Hello there {PLAYER}.\n"
# 281 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	.string "I am the Frozen Mirage Trainer.\l"
# 282 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	.string "Beat me and you shall face a\l"
# 283 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	.string "special POKEMON.\l"
# 284 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	.string "But first, I want to see a\l"
# 285 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	.string "Three Headed Mascot,\l"
# 286 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	.string "and knowledge on the Ice queen.$"
# 287 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 288 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Text_Whitney::
# 289 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	.string "So, you wish to face me?$"
# 290 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 291 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Text_YesWhitney::
# 292 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	.string "Very well! Prepare yourself!$"
# 293 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 294 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Text_PostWhitney::
# 295 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	.string "So you are worthy...$"
# 296 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 297 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Text_WhitneyPostBattle::
# 298 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	.string "Alright, you have bested me./p"
# 299 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	.string "Be prepared to face REGISTEEL!$"
# 300 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 301 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Text_EndWhitney::
# 302 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	.string "You had one chance,\n"
# 303 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	.string "Goodbye.$"
# 304 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 305 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Text_NoWhitney::
# 306 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	.string "Alright, take your time.$"
