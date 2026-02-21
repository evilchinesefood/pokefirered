# 1 "data/maps/Route2/scripts.pory"

# 2 "data/maps/Route2/scripts.pory"
Route2_MapScripts::
# 3 "data/maps/Route2/scripts.pory"
	.byte 0
# 4 "data/maps/Route2/scripts.pory"

# 5 "data/maps/Route2/scripts.pory"
Route2_EventScript_RouteSign::
# 6 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_RouteSign, MSGBOX_SIGN
# 7 "data/maps/Route2/scripts.pory"
	end
# 8 "data/maps/Route2/scripts.pory"

# 9 "data/maps/Route2/scripts.pory"
Route2_EventScript_DiglettsCaveSign::
# 10 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_DiglettsCave, MSGBOX_SIGN
# 11 "data/maps/Route2/scripts.pory"
	end
# 12 "data/maps/Route2/scripts.pory"

# 13 "data/maps/Route2/scripts.pory"
Route2_EventScript_Skitty::
# 14 "data/maps/Route2/scripts.pory"
	lock
# 15 "data/maps/Route2/scripts.pory"
	faceplayer
# 16 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_Skitty, MSGBOX_DEFAULT
# 17 "data/maps/Route2/scripts.pory"
	release
# 18 "data/maps/Route2/scripts.pory"
	end
# 19 "data/maps/Route2/scripts.pory"

# 20 "data/maps/Route2/scripts.pory"
Route2_Text_Skitty:
# 21 "data/maps/Route2/scripts.pory"
	.string "My SKITTY is the cutest\n"
# 22 "data/maps/Route2/scripts.pory"
	.string "POKEMON ever!$"
