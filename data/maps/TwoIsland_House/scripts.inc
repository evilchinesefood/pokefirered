# 1 "data/maps/TwoIsland_House/scripts.pory"

# 2 "data/maps/TwoIsland_House/scripts.pory"
TwoIsland_House_MapScripts::
# 3 "data/maps/TwoIsland_House/scripts.pory"
	.byte 0
# 4 "data/maps/TwoIsland_House/scripts.pory"

# 5 "data/maps/TwoIsland_House/scripts.pory"
TwoIsland_House_TMGUYScript::
# 6 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 7 "data/maps/TwoIsland_House/scripts.pory"
	lock
# 8 "data/maps/TwoIsland_House/scripts.pory"
	faceplayer
# 9 "data/maps/TwoIsland_House/scripts.pory"
	msgbox TwoIsland_House_Text_TmGuy2
# 10 "data/maps/TwoIsland_House/scripts.pory"
	waitmessage
# 11 "data/maps/TwoIsland_House/scripts.pory"
	pokemart TwoIsland_TMS2
# 12 "data/maps/TwoIsland_House/scripts.pory"
	msgbox Text_PleaseComeAgain
# 13 "data/maps/TwoIsland_House/scripts.pory"
	release
# 14 "data/maps/TwoIsland_House/scripts.pory"
	end
# 15 "data/maps/TwoIsland_House/scripts.pory"

# 16 "data/maps/TwoIsland_House/scripts.pory"
	.align 2
# 17 "data/maps/TwoIsland_House/scripts.pory"
TwoIsland_TMS::	
# 18 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM03
# 19 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM05
# 20 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM09
# 21 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM12
# 22 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM15
# 23 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM16
# 24 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM17
# 25 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM20
# 26 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM21
# 27 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM27
# 28 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM33
# 29 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM34
# 30 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM39
# 31 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM40
# 32 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM41
# 33 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM42
# 34 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM44
# 35 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM47
# 36 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_NONE
# 37 "data/maps/TwoIsland_House/scripts.pory"
	release
# 38 "data/maps/TwoIsland_House/scripts.pory"
	end
# 39 "data/maps/TwoIsland_House/scripts.pory"

# 40 "data/maps/TwoIsland_House/scripts.pory"

# 41 "data/maps/TwoIsland_House/scripts.pory"

# 42 "data/maps/TwoIsland_House/scripts.pory"
	.align 2
# 43 "data/maps/TwoIsland_House/scripts.pory"
TwoIsland_TMS2::
# 44 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM01
# 45 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM02
# 46 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM03
# 47 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM04
# 48 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM05
# 49 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM06
# 50 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM07
# 51 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM08
# 52 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM09
# 53 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM10
# 54 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM11
# 55 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM12
# 56 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM13
# 57 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM14
# 58 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM15
# 59 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM16
# 60 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM17
# 61 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM18
# 62 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM19
# 63 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM20
# 64 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM21
# 65 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM22
# 66 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM23
# 67 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM24
# 68 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM25
# 69 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM26
# 70 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM27
# 71 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM28
# 72 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM29
# 73 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM30
# 74 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM31
# 75 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM32
# 76 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM33
# 77 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM34
# 78 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM35
# 79 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM36
# 80 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM37
# 81 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM38
# 82 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM39
# 83 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM40
# 84 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM41
# 85 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM42
# 86 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM43
# 87 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM44
# 88 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM45
# 89 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM46
# 90 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM47
# 91 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM48
# 92 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM49
# 93 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM50
# 94 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_NONE
# 95 "data/maps/TwoIsland_House/scripts.pory"
	release
# 96 "data/maps/TwoIsland_House/scripts.pory"
	end
# 97 "data/maps/TwoIsland_House/scripts.pory"

# 98 "data/maps/TwoIsland_House/scripts.pory"

# 99 "data/maps/TwoIsland_House/scripts.pory"

# 100 "data/maps/TwoIsland_House/scripts.pory"
TwoIsland_House_Event_Script_Wife::
# 101 "data/maps/TwoIsland_House/scripts.pory"
	msgbox TwoIsland_House_Text_Wife, MSGBOX_NPC
# 102 "data/maps/TwoIsland_House/scripts.pory"
	end
