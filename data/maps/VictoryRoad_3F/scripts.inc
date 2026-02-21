# 1 "data/maps/VictoryRoad_3F/scripts.pory"

# 2 "data/maps/VictoryRoad_3F/scripts.pory"
.set LOCALID_BOULDER1, 7
# 3 "data/maps/VictoryRoad_3F/scripts.pory"
.set LOCALID_BOULDER2, 10
# 4 "data/maps/VictoryRoad_3F/scripts.pory"

# 5 "data/maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_MapScripts::
# 6 "data/maps/VictoryRoad_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VictoryRoad_3F_OnLoad
# 7 "data/maps/VictoryRoad_3F/scripts.pory"
	.byte 0
# 8 "data/maps/VictoryRoad_3F/scripts.pory"

# 9 "data/maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_OnLoad::
# 10 "data/maps/VictoryRoad_3F/scripts.pory"
	call_if_eq VAR_MAP_SCENE_VICTORY_ROAD_3F, 100, VictoryRoad_3F_EventScript_MoveSwitchBoulder
# 11 "data/maps/VictoryRoad_3F/scripts.pory"
	call_if_ne VAR_MAP_SCENE_VICTORY_ROAD_3F, 100, VictoryRoad_3F_EventScript_SetRockBarrier
# 12 "data/maps/VictoryRoad_3F/scripts.pory"
	end
# 13 "data/maps/VictoryRoad_3F/scripts.pory"

# 14 "data/maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_EventScript_MoveSwitchBoulder::
# 15 "data/maps/VictoryRoad_3F/scripts.pory"
	setobjectxyperm LOCALID_BOULDER2, 7 ,7
# 16 "data/maps/VictoryRoad_3F/scripts.pory"
	return
# 17 "data/maps/VictoryRoad_3F/scripts.pory"

# 18 "data/maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_EventScript_SetRockBarrier::
# 19 "data/maps/VictoryRoad_3F/scripts.pory"
	setmetatile 12, 12, METATILE_Cave_RockBarrier_Top, 1
# 20 "data/maps/VictoryRoad_3F/scripts.pory"
	setmetatile 12, 13, METATILE_Cave_RockBarrier_Bottom, 1
# 21 "data/maps/VictoryRoad_3F/scripts.pory"
	return
# 22 "data/maps/VictoryRoad_3F/scripts.pory"

# 23 "data/maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_EventScript_FloorSwitch::
# 24 "data/maps/VictoryRoad_3F/scripts.pory"
	lockall
# 25 "data/maps/VictoryRoad_3F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VICTORY_ROAD_3F, 100, VictoryRoad_3F_EventScript_FloorSwitchAlreadyPressed
# 26 "data/maps/VictoryRoad_3F/scripts.pory"
	setmetatile 12, 12, METATILE_Cave_Floor_Ledge_Top, 0
# 27 "data/maps/VictoryRoad_3F/scripts.pory"
	setmetatile 12, 13, METATILE_Cave_Floor_Ledge_Bottom, 0
# 28 "data/maps/VictoryRoad_3F/scripts.pory"
	playse SE_ICE_BREAK
# 29 "data/maps/VictoryRoad_3F/scripts.pory"
	special DrawWholeMapView
# 30 "data/maps/VictoryRoad_3F/scripts.pory"
	waitse
# 31 "data/maps/VictoryRoad_3F/scripts.pory"
	copyobjectxytoperm LOCALID_BOULDER1
# 32 "data/maps/VictoryRoad_3F/scripts.pory"
	copyobjectxytoperm LOCALID_BOULDER2
# 33 "data/maps/VictoryRoad_3F/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_3F, 100
# 34 "data/maps/VictoryRoad_3F/scripts.pory"
	releaseall
# 35 "data/maps/VictoryRoad_3F/scripts.pory"
	end
# 36 "data/maps/VictoryRoad_3F/scripts.pory"

# 37 "data/maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_EventScript_FloorSwitchAlreadyPressed::
# 38 "data/maps/VictoryRoad_3F/scripts.pory"
	releaseall
# 39 "data/maps/VictoryRoad_3F/scripts.pory"
	end
# 40 "data/maps/VictoryRoad_3F/scripts.pory"

# 41 "data/maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_EventScript_George::
# 42 "data/maps/VictoryRoad_3F/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_GEORGE, VictoryRoad_3F_Text_GeorgeIntro, VictoryRoad_3F_Text_GeorgeDefeat
# 43 "data/maps/VictoryRoad_3F/scripts.pory"
	msgbox VictoryRoad_3F_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
# 44 "data/maps/VictoryRoad_3F/scripts.pory"
	end
# 45 "data/maps/VictoryRoad_3F/scripts.pory"

# 46 "data/maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_EventScript_Colby::
# 47 "data/maps/VictoryRoad_3F/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_COLBY, VictoryRoad_3F_Text_ColbyIntro, VictoryRoad_3F_Text_ColbyDefeat
# 48 "data/maps/VictoryRoad_3F/scripts.pory"
	msgbox VictoryRoad_3F_Text_ColbyPostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/VictoryRoad_3F/scripts.pory"
	end
# 50 "data/maps/VictoryRoad_3F/scripts.pory"

# 51 "data/maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_EventScript_Caroline::
# 52 "data/maps/VictoryRoad_3F/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_CAROLINE, VictoryRoad_3F_Text_CarolineIntro, VictoryRoad_3F_Text_CarolineDefeat
# 53 "data/maps/VictoryRoad_3F/scripts.pory"
	msgbox VictoryRoad_3F_Text_CarolinePostBattle, MSGBOX_AUTOCLOSE
# 54 "data/maps/VictoryRoad_3F/scripts.pory"
	end
# 55 "data/maps/VictoryRoad_3F/scripts.pory"

# 56 "data/maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_EventScript_Alexa::
# 57 "data/maps/VictoryRoad_3F/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_ALEXA, VictoryRoad_3F_Text_AlexaIntro, VictoryRoad_3F_Text_AlexaDefeat
# 58 "data/maps/VictoryRoad_3F/scripts.pory"
	msgbox VictoryRoad_3F_Text_AlexaPostBattle, MSGBOX_AUTOCLOSE
# 59 "data/maps/VictoryRoad_3F/scripts.pory"
	end
# 60 "data/maps/VictoryRoad_3F/scripts.pory"

# 61 "data/maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_EventScript_Ray::
# 62 "data/maps/VictoryRoad_3F/scripts.pory"
	trainerbattle_double TRAINER_COOL_COUPLE_RAY_TYRA, VictoryRoad_3F_Text_RayIntro, VictoryRoad_3F_Text_RayDefeat, VictoryRoad_3F_Text_RayNotEnoughMons
# 63 "data/maps/VictoryRoad_3F/scripts.pory"
	msgbox VictoryRoad_3F_Text_RayPostBattle, MSGBOX_AUTOCLOSE
# 64 "data/maps/VictoryRoad_3F/scripts.pory"
	end
# 65 "data/maps/VictoryRoad_3F/scripts.pory"

# 66 "data/maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_EventScript_Brooke::
# 67 "data/maps/VictoryRoad_3F/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_BROOKE, VictoryRoad_3F_Text_CarolineIntro, VictoryRoad_3F_Text_CarolineDefeat
# 68 "data/maps/VictoryRoad_3F/scripts.pory"
	msgbox VictoryRoad_3F_Text_CarolinePostBattle, MSGBOX_AUTOCLOSE
# 69 "data/maps/VictoryRoad_3F/scripts.pory"
	end
# 70 "data/maps/VictoryRoad_3F/scripts.pory"

# 71 "data/maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_EventScript_Shannon::
# 72 "data/maps/VictoryRoad_3F/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_SHANNON, VictoryRoad_3F_Text_AlexaIntro, VictoryRoad_3F_Text_AlexaDefeat
# 73 "data/maps/VictoryRoad_3F/scripts.pory"
	msgbox VictoryRoad_3F_Text_AlexaPostBattle, MSGBOX_AUTOCLOSE
# 74 "data/maps/VictoryRoad_3F/scripts.pory"
	end
# 75 "data/maps/VictoryRoad_3F/scripts.pory"

# 76 "data/maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_EventScript_Austina::
# 77 "data/maps/VictoryRoad_3F/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_AUSTINA, VictoryRoad_3F_Text_AlexaIntro, VictoryRoad_3F_Text_AlexaDefeat
# 78 "data/maps/VictoryRoad_3F/scripts.pory"
	msgbox VictoryRoad_3F_Text_RayPostBattle, MSGBOX_AUTOCLOSE
# 79 "data/maps/VictoryRoad_3F/scripts.pory"
	end
# 80 "data/maps/VictoryRoad_3F/scripts.pory"

# 81 "data/maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_EventScript_Tyra::
# 82 "data/maps/VictoryRoad_3F/scripts.pory"
	trainerbattle_double TRAINER_COOL_COUPLE_RAY_TYRA, VictoryRoad_3F_Text_TyraIntro, VictoryRoad_3F_Text_TyraDefeat, VictoryRoad_3F_Text_TyraNotEnoughMons
# 83 "data/maps/VictoryRoad_3F/scripts.pory"
	msgbox VictoryRoad_3F_Text_TyraPostBattle, MSGBOX_AUTOCLOSE
# 84 "data/maps/VictoryRoad_3F/scripts.pory"
	end
