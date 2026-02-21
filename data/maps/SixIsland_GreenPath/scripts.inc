# 1 "data/maps/SixIsland_GreenPath/scripts.pory"

# 2 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_MapScripts::
# 3 "data/maps/SixIsland_GreenPath/scripts.pory"
	.byte 0
# 4 "data/maps/SixIsland_GreenPath/scripts.pory"

# 5 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_EventScript_RightRouteSign::
# 6 "data/maps/SixIsland_GreenPath/scripts.pory"
	msgbox SixIsland_GreenPath_Text_LeftRouteSign, MSGBOX_SIGN
# 7 "data/maps/SixIsland_GreenPath/scripts.pory"
	end
# 8 "data/maps/SixIsland_GreenPath/scripts.pory"

# 9 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_EventScript_LeftRouteSign::
# 10 "data/maps/SixIsland_GreenPath/scripts.pory"
	msgbox SixIsland_GreenPath_Text_RightRouteSign, MSGBOX_SIGN
# 11 "data/maps/SixIsland_GreenPath/scripts.pory"
	end
# 12 "data/maps/SixIsland_GreenPath/scripts.pory"

# 13 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_EventScript_Hoenn::
# 14 "data/maps/SixIsland_GreenPath/scripts.pory"
	lock
# 15 "data/maps/SixIsland_GreenPath/scripts.pory"
	faceplayer
# 16 "data/maps/SixIsland_GreenPath/scripts.pory"
	msgbox SixIsland_GreenPath_Text_Hoenn, MSGBOX_DEFAULT
# 17 "data/maps/SixIsland_GreenPath/scripts.pory"
	release
# 18 "data/maps/SixIsland_GreenPath/scripts.pory"
	end
# 19 "data/maps/SixIsland_GreenPath/scripts.pory"

# 20 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_Text_Hoenn:
# 21 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "I came here all the way from\n"
# 22 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "the HOENN region.$"
