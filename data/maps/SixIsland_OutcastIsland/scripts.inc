# 1 "data/maps/SixIsland_OutcastIsland/scripts.pory"

# 2 "data/maps/SixIsland_OutcastIsland/scripts.pory"
SixIsland_OutcastIsland_MapScripts::
# 3 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	.byte 0
# 4 "data/maps/SixIsland_OutcastIsland/scripts.pory"

# 5 "data/maps/SixIsland_OutcastIsland/scripts.pory"
SixIsland_OutcastIsland_OnTransition:
# 6 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	call SixIsland_OutcastIsland_UpdateAlteringCaveMewtwo
# 7 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	end
# 8 "data/maps/SixIsland_OutcastIsland/scripts.pory"

# 9 "data/maps/SixIsland_OutcastIsland/scripts.pory"
SixIsland_OutcastIsland_EventScript_Rocket::
# 10 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_46, SixIsland_OutcastIsland_Text_RocketIntro, SixIsland_OutcastIsland_Text_RocketDefeat
# 11 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	msgbox SixIsland_OutcastIsland_Text_RocketPostBattle, MSGBOX_AUTOCLOSE
# 12 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	end
# 13 "data/maps/SixIsland_OutcastIsland/scripts.pory"

# 14 "data/maps/SixIsland_OutcastIsland/scripts.pory"
SixIsland_OutcastIsland_UpdateAlteringCaveMewtwo::
# 15 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	goto SixIsland_OutcastIsland_UpdateAlteringCave
# 16 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	return
# 17 "data/maps/SixIsland_OutcastIsland/scripts.pory"

# 18 "data/maps/SixIsland_OutcastIsland/scripts.pory"
SixIsland_OutcastIsland_UpdateAlteringCave::
# 19 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	random 8
# 20 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SetAlteringCave0
# 21 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SetAlteringCave1
# 22 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	goto_if_eq VAR_RESULT, 2, SetAlteringCave2
# 23 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	goto_if_eq VAR_RESULT, 3, SetAlteringCave3
# 24 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	goto_if_eq VAR_RESULT, 4, SetAlteringCave4
# 25 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	goto_if_eq VAR_RESULT, 5, SetAlteringCave5
# 26 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	goto_if_eq VAR_RESULT, 6, SetAlteringCave6
# 27 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	goto_if_eq VAR_RESULT, 7, SetAlteringCave7
# 28 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	return
# 29 "data/maps/SixIsland_OutcastIsland/scripts.pory"
SetAlteringCave0::
# 30 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	setvar VAR_ALTERING_CAVE_WILD_SET, 0
# 31 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	return
# 32 "data/maps/SixIsland_OutcastIsland/scripts.pory"
SetAlteringCave1::
# 33 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	setvar VAR_ALTERING_CAVE_WILD_SET, 1
# 34 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	return
# 35 "data/maps/SixIsland_OutcastIsland/scripts.pory"
SetAlteringCave2::
# 36 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	setvar VAR_ALTERING_CAVE_WILD_SET, 2
# 37 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	return
# 38 "data/maps/SixIsland_OutcastIsland/scripts.pory"
SetAlteringCave3::
# 39 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	setvar VAR_ALTERING_CAVE_WILD_SET, 3
# 40 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	return
# 41 "data/maps/SixIsland_OutcastIsland/scripts.pory"
SetAlteringCave4::
# 42 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	setvar VAR_ALTERING_CAVE_WILD_SET, 4
# 43 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	return
# 44 "data/maps/SixIsland_OutcastIsland/scripts.pory"
SetAlteringCave5::
# 45 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	setvar VAR_ALTERING_CAVE_WILD_SET, 5
# 46 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	return
# 47 "data/maps/SixIsland_OutcastIsland/scripts.pory"
SetAlteringCave6::
# 48 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	setvar VAR_ALTERING_CAVE_WILD_SET, 6
# 49 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	return
# 50 "data/maps/SixIsland_OutcastIsland/scripts.pory"
SetAlteringCave7::
# 51 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	setvar VAR_ALTERING_CAVE_WILD_SET, 7
# 52 "data/maps/SixIsland_OutcastIsland/scripts.pory"
SixIsland_OutcastIsland_AlteringCaveDefault::
# 53 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	setvar VAR_ALTERING_CAVE_WILD_SET, 0
# 54 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	return
# 55 "data/maps/SixIsland_OutcastIsland/scripts.pory"

# 56 "data/maps/SixIsland_OutcastIsland/scripts.pory"
SixIsland_OutcastIsland_EventScript_AlteringCaveDefault::
# 57 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	setvar VAR_ALTERING_CAVE_WILD_SET, 0
# 58 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	return
