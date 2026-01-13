# 1 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"

# 2 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
ViridianCity_PokemonCenter_2F_MapScripts::
# 3 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CableClub_OnFrame
# 4 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, CableClub_OnWarp
# 5 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CableClub_OnLoad
# 6 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CableClub_OnTransition
# 7 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	.byte 0
# 8 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"

# 9 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
ViridianCity_PokemonCenter_2F_EventScript_IVCheck::
# 10 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	lock
# 11 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	faceplayer
# 12 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	call EventScript_IVChecker
# 13 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	release
# 14 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	end
# 15 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
ViridianCity_PokemonCenter_2F_EventScript_EVCheck::
# 16 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	lock
# 17 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	faceplayer
# 18 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	call EventScript_EVChecker
# 19 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	release
# 20 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	end
# 21 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"

# 22 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
ViridianCity_PokemonCenter_2F_EventScript_Pichu::
# 23 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	lock
# 24 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	faceplayer
# 25 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto_if_set FLAG_SURF_PIKACHU, ViridianCity_PokemonCenter_2F_EventScript_End
# 26 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Pichu
# 27 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	waitmessage
# 28 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Whitney, MSGBOX_YESNO
# 29 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ViridianCity_PokemonCenter_2F_EventScript_NoWhitney
# 30 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	trainerbattle_single TRAINER_RS_TUBER_F, ViridianCity_PokemonCenter_2F_Text_YesWhitney, ViridianCity_PokemonCenter_2F_Text_WhitneyDefeat, ViridianCity_PokemonCenter_2F_EventScript_PostWhitney, NO_MUSIC
# 31 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	release
# 32 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	end
# 33 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"

# 34 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
ViridianCity_PokemonCenter_2F_EventScript_PostWhitney::
# 35 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto_if_set FLAG_MYSTERY_GIFT_DONE, ViridianCity_PokemonCenter_2F_EventScript_End
# 36 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto MysteryEventScript_SurfPichu
# 37 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	release
# 38 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	end
# 39 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"

# 40 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
ViridianCity_PokemonCenter_2F_Text_YesWhitney::
# 41 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	.string "Yes! Let's battle!$"
# 42 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"

# 43 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
ViridianCity_PokemonCenter_2F_Text_WhitneyDefeat::
# 44 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	.string "Thank you!$"
# 45 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"

# 46 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
ViridianCity_PokemonCenter_2F_Text_Whitney::
# 47 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	.string "Battle me if you want\n"
# 48 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	.string "this special POKEMON EGG!$"
# 49 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"

# 50 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
ViridianCity_PokemonCenter_2F_EventScript_End::
# 51 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Pichu
# 52 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	release
# 53 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	end
# 54 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"

# 55 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
ViridianCity_PokemonCenter_2F_EventScript_NoWhitney::
# 56 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_NoWhitney
# 57 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	release
# 58 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	end
# 59 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"

# 60 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
ViridianCity_PokemonCenter_2F_Text_Pichu::
# 61 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	.string "Thank you for Playing\n"
# 62 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	.string "This POKEMON Rom hack!$"
# 63 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"

# 64 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
ViridianCity_PokemonCenter_2F_Text_NoWhitney::
# 65 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	.string "Not ready?$"
# 66 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"

# 67 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
@ The below 3 are unused and leftover from RS
# 68 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
ViridianCity_PokemonCenter_2F_EventScript_Colosseum::
# 69 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_Colosseum
# 70 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	end
# 71 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"

# 72 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
ViridianCity_PokemonCenter_2F_EventScript_TradeCenter::
# 73 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_TradeCenter
# 74 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	end
# 75 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"

# 76 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
ViridianCity_PokemonCenter_2F_EventScript_RecordCorner::
# 77 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_RecordCorner
# 78 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	end
