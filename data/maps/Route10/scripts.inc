# 1 "data/maps/Route10/scripts.pory"

# 2 "data/maps/Route10/scripts.pory"
Route10_MapScripts::
# 3 "data/maps/Route10/scripts.pory"
	.byte 0
# 4 "data/maps/Route10/scripts.pory"

# 5 "data/maps/Route10/scripts.pory"
Route10_EventScript_Unused::
# 6 "data/maps/Route10/scripts.pory"
	end
# 7 "data/maps/Route10/scripts.pory"

# 8 "data/maps/Route10/scripts.pory"
Route10_EventScript_NorthRockTunnelSign::
# 9 "data/maps/Route10/scripts.pory"
	msgbox Route10_Text_RockTunnelDetourToLavender, MSGBOX_SIGN
# 10 "data/maps/Route10/scripts.pory"
	end
# 11 "data/maps/Route10/scripts.pory"

# 12 "data/maps/Route10/scripts.pory"
Route10_EventScript_SouthRockTunnelSign::
# 13 "data/maps/Route10/scripts.pory"
	msgbox Route10_Text_RockTunnel, MSGBOX_SIGN
# 14 "data/maps/Route10/scripts.pory"
	end
# 15 "data/maps/Route10/scripts.pory"

# 16 "data/maps/Route10/scripts.pory"
Route10_EventScript_PowerPlantSign::
# 17 "data/maps/Route10/scripts.pory"
	msgbox Route10_Text_PowerPlant, MSGBOX_SIGN
# 18 "data/maps/Route10/scripts.pory"
	end
# 19 "data/maps/Route10/scripts.pory"

# 20 "data/maps/Route10/scripts.pory"
Route10_EventScript_Girl::
# 21 "data/maps/Route10/scripts.pory"
	lock
# 22 "data/maps/Route10/scripts.pory"
	faceplayer
# 23 "data/maps/Route10/scripts.pory"
	msgbox Route10_Text_Girl, MSGBOX_DEFAULT
# 24 "data/maps/Route10/scripts.pory"
	release
# 25 "data/maps/Route10/scripts.pory"
	end
# 26 "data/maps/Route10/scripts.pory"

# 27 "data/maps/Route10/scripts.pory"
Route10_Text_Girl:
# 28 "data/maps/Route10/scripts.pory"
	.string "I found a strange rock here.\n"
# 29 "data/maps/Route10/scripts.pory"
	.string "I wonder what it is...$"
# 30 "data/maps/Route10/scripts.pory"

# 31 "data/maps/Route10/scripts.pory"
Route10_EventScript_Rock::
# 32 "data/maps/Route10/scripts.pory"
	msgbox Route10_Text_Rock, MSGBOX_SIGN
# 33 "data/maps/Route10/scripts.pory"
	end
# 34 "data/maps/Route10/scripts.pory"

# 35 "data/maps/Route10/scripts.pory"
Route10_Text_Rock:
# 36 "data/maps/Route10/scripts.pory"
	.string "It's a peculiar rock.\n"
# 37 "data/maps/Route10/scripts.pory"
	.string "It seems to be humming...$"
