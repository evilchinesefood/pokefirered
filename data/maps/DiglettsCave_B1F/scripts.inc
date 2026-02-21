# 1 "data/maps/DiglettsCave_B1F/scripts.pory"

# 2 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_MapScripts::
# 3 "data/maps/DiglettsCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DiglettsCave_B1F_OnTransition
# 4 "data/maps/DiglettsCave_B1F/scripts.pory"
	.byte 0
# 5 "data/maps/DiglettsCave_B1F/scripts.pory"

# 6 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_OnTransition::
# 7 "data/maps/DiglettsCave_B1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_DIGLETTS_CAVE_B1F
# 8 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 9 "data/maps/DiglettsCave_B1F/scripts.pory"

# 10 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_Freddy::
# 11 "data/maps/DiglettsCave_B1F/scripts.pory"
	lock
# 12 "data/maps/DiglettsCave_B1F/scripts.pory"
	faceplayer
# 13 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_FREDDY, DiglettsCave_B1F_EventScript_RematchFreddy
# 14 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_Freddy, MSGBOX_YESNO
# 15 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, DiglettsCave_B1F_EventScript_NoFreddy
# 16 "data/maps/DiglettsCave_B1F/scripts.pory"
	trainerbattle_single TRAINER_FREDDY, DiglettsCave_B1F_Text_YesFreddy, DiglettsCave_B1F_Text_FreddyDefeat, DiglettsCave_B1F_EventScript_PostFreddy, NO_MUSIC
# 17 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 18 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 19 "data/maps/DiglettsCave_B1F/scripts.pory"

# 20 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_PostFreddy::
# 21 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_FreddyPostBattle
# 22 "data/maps/DiglettsCave_B1F/scripts.pory"
	setflag FLAG_DEFEATED_FREDDY
# 23 "data/maps/DiglettsCave_B1F/scripts.pory"
	cleartrainerflag TRAINER_FREDDY
# 24 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 25 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 26 "data/maps/DiglettsCave_B1F/scripts.pory"

# 27 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_NoFreddy::
# 28 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_NoFreddy
# 29 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 30 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 31 "data/maps/DiglettsCave_B1F/scripts.pory"

# 32 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_RematchFreddy::
# 33 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_RematchFreddy, MSGBOX_YESNO
# 34 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, DiglettsCave_B1F_EventScript_NoFreddy
# 35 "data/maps/DiglettsCave_B1F/scripts.pory"
	trainerbattle_single TRAINER_FREDDY, DiglettsCave_B1F_Text_YesFreddy, DiglettsCave_B1F_Text_RematchFreddyDefeat, DiglettsCave_B1F_EventScript_PostRematchFreddy, NO_MUSIC
# 36 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 37 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 38 "data/maps/DiglettsCave_B1F/scripts.pory"

# 39 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_PostRematchFreddy::
# 40 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_PostRematchFreddy
# 41 "data/maps/DiglettsCave_B1F/scripts.pory"
	cleartrainerflag TRAINER_FREDDY
# 42 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 43 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 44 "data/maps/DiglettsCave_B1F/scripts.pory"

# 45 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_OrbingCheck::
# 46 "data/maps/DiglettsCave_B1F/scripts.pory"
	lock
# 47 "data/maps/DiglettsCave_B1F/scripts.pory"
	faceplayer
# 48 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_OrbingCheck, MSGBOX_DEFAULT
# 49 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 50 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 51 "data/maps/DiglettsCave_B1F/scripts.pory"

# 52 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_Text_OrbingCheck:
# 53 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "The orbs are glowing with a strange\n"
# 54 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "light...$"
