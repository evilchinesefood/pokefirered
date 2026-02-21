# 1 "data/maps/SixIsland_WaterPath/scripts.pory"

# 2 "data/maps/SixIsland_WaterPath/scripts.pory"
SixIsland_WaterPath_MapScripts::
# 3 "data/maps/SixIsland_WaterPath/scripts.pory"
	.byte 0
# 4 "data/maps/SixIsland_WaterPath/scripts.pory"

# 5 "data/maps/SixIsland_WaterPath/scripts.pory"
SixIsland_WaterPath_EventScript_HornWantedSign::
# 6 "data/maps/SixIsland_WaterPath/scripts.pory"
	msgbox SixIsland_WaterPath_Text_WantedUltimateHorn, MSGBOX_SIGN
# 7 "data/maps/SixIsland_WaterPath/scripts.pory"
	end
# 8 "data/maps/SixIsland_WaterPath/scripts.pory"

# 9 "data/maps/SixIsland_WaterPath/scripts.pory"
SixIsland_WaterPath_EventScript_RouteSign::
# 10 "data/maps/SixIsland_WaterPath/scripts.pory"
	msgbox SixIsland_WaterPath_Text_RouteSign, MSGBOX_SIGN
# 11 "data/maps/SixIsland_WaterPath/scripts.pory"
	end
# 12 "data/maps/SixIsland_WaterPath/scripts.pory"

# 13 "data/maps/SixIsland_WaterPath/scripts.pory"
SixIsland_WaterPath_EventScript_TMGUY::
# 14 "data/maps/SixIsland_WaterPath/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 15 "data/maps/SixIsland_WaterPath/scripts.pory"
	lock
# 16 "data/maps/SixIsland_WaterPath/scripts.pory"
	faceplayer
# 17 "data/maps/SixIsland_WaterPath/scripts.pory"
	message SixIsland_WaterPath_Text_MayIHelpYou
# 18 "data/maps/SixIsland_WaterPath/scripts.pory"
	waitmessage
# 19 "data/maps/SixIsland_WaterPath/scripts.pory"
	pokemart SixIsland_WaterPath_TMGUY
# 20 "data/maps/SixIsland_WaterPath/scripts.pory"
	msgbox Text_PleaseComeAgain
# 21 "data/maps/SixIsland_WaterPath/scripts.pory"
	release
# 22 "data/maps/SixIsland_WaterPath/scripts.pory"
	end
# 23 "data/maps/SixIsland_WaterPath/scripts.pory"

# 24 "data/maps/SixIsland_WaterPath/scripts.pory"
	.align 2
# 25 "data/maps/SixIsland_WaterPath/scripts.pory"
SixIsland_WaterPath_TMGUY::
# 26 "data/maps/SixIsland_WaterPath/scripts.pory"
	.2byte ITEM_TM01
# 27 "data/maps/SixIsland_WaterPath/scripts.pory"
	.2byte ITEM_TM02
# 28 "data/maps/SixIsland_WaterPath/scripts.pory"
	.2byte ITEM_TM04
# 29 "data/maps/SixIsland_WaterPath/scripts.pory"
	.2byte ITEM_TM06
# 30 "data/maps/SixIsland_WaterPath/scripts.pory"
	.2byte ITEM_TM08
# 31 "data/maps/SixIsland_WaterPath/scripts.pory"
	.2byte ITEM_TM14
# 32 "data/maps/SixIsland_WaterPath/scripts.pory"
	.2byte ITEM_TM19
# 33 "data/maps/SixIsland_WaterPath/scripts.pory"
	.2byte ITEM_TM22
# 34 "data/maps/SixIsland_WaterPath/scripts.pory"
	.2byte ITEM_TM25
# 35 "data/maps/SixIsland_WaterPath/scripts.pory"
	.2byte ITEM_TM26
# 36 "data/maps/SixIsland_WaterPath/scripts.pory"
	.2byte ITEM_TM29
# 37 "data/maps/SixIsland_WaterPath/scripts.pory"
	.2byte ITEM_TM32
# 38 "data/maps/SixIsland_WaterPath/scripts.pory"
	.2byte ITEM_TM38
# 39 "data/maps/SixIsland_WaterPath/scripts.pory"
	.2byte ITEM_TM50
# 40 "data/maps/SixIsland_WaterPath/scripts.pory"
	.2byte ITEM_NONE
# 41 "data/maps/SixIsland_WaterPath/scripts.pory"
	release
# 42 "data/maps/SixIsland_WaterPath/scripts.pory"
	end
