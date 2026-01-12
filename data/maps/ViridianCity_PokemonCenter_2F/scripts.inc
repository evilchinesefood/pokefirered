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
	msgbox ViridianCity_PokemonCenter_2F_Text_Pichu
# 26 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto_if_set FLAG_MYSTERY_GIFT_DONE, ViridianCity_PokemonCenter_2F_EventScript_End
# 27 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto MysteryEventScript_SurfPichu
# 28 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	end
# 29 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"

# 30 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
ViridianCity_PokemonCenter_2F_EventScript_End::
# 31 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	end
# 32 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"

# 33 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
ViridianCity_PokemonCenter_2F_Text_Pichu::
# 34 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	.string "Thank you for Playing\n"
# 35 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	.string "This POKEMON Rom hack!$"
# 36 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"

# 37 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
@ The below 3 are unused and leftover from RS
# 38 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
ViridianCity_PokemonCenter_2F_EventScript_Colosseum::
# 39 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_Colosseum
# 40 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	end
# 41 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"

# 42 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
ViridianCity_PokemonCenter_2F_EventScript_TradeCenter::
# 43 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_TradeCenter
# 44 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	end
# 45 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"

# 46 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
ViridianCity_PokemonCenter_2F_EventScript_RecordCorner::
# 47 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_RecordCorner
# 48 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	end
