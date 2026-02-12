# 1 "data/maps/Route20/scripts.pory"

# 2 "data/maps/Route20/scripts.pory"
Route20_MapScripts::
# 3 "data/maps/Route20/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route20_OnTransition
# 4 "data/maps/Route20/scripts.pory"
	.byte 0
# 5 "data/maps/Route20/scripts.pory"

# 6 "data/maps/Route20/scripts.pory"
Route20_OnTransition::
# 7 "data/maps/Route20/scripts.pory"
	call_if_unset FLAG_STOPPED_SEAFOAM_B3F_CURRENT, Route20_EventScript_ResetSeafoamBouldersForB3F
# 8 "data/maps/Route20/scripts.pory"
	call_if_unset FLAG_STOPPED_SEAFOAM_B4F_CURRENT, Route20_EventScript_ResetSeafoamBouldersForB4F
# 9 "data/maps/Route20/scripts.pory"
	end
# 10 "data/maps/Route20/scripts.pory"

# 11 "data/maps/Route20/scripts.pory"
Route20_EventScript_ResetSeafoamBouldersForB3F::
# 12 "data/maps/Route20/scripts.pory"
	clearflag FLAG_HIDE_SEAFOAM_1F_BOULDER_1
# 13 "data/maps/Route20/scripts.pory"
	clearflag FLAG_HIDE_SEAFOAM_1F_BOULDER_2
# 14 "data/maps/Route20/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B1F_BOULDER_1
# 15 "data/maps/Route20/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B1F_BOULDER_2
# 16 "data/maps/Route20/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B2F_BOULDER_1
# 17 "data/maps/Route20/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B2F_BOULDER_2
# 18 "data/maps/Route20/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_1
# 19 "data/maps/Route20/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_2
# 20 "data/maps/Route20/scripts.pory"
	return
# 21 "data/maps/Route20/scripts.pory"

# 22 "data/maps/Route20/scripts.pory"
Route20_EventScript_ResetSeafoamBouldersForB4F::
# 23 "data/maps/Route20/scripts.pory"
	clearflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_3
# 24 "data/maps/Route20/scripts.pory"
	clearflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_4
# 25 "data/maps/Route20/scripts.pory"
	clearflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_5
# 26 "data/maps/Route20/scripts.pory"
	clearflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_6
# 27 "data/maps/Route20/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B4F_BOULDER_1
# 28 "data/maps/Route20/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B4F_BOULDER_2
# 29 "data/maps/Route20/scripts.pory"
	return
# 30 "data/maps/Route20/scripts.pory"

# 31 "data/maps/Route20/scripts.pory"
Route20_EventScript_SeafoamIslandsSign::
# 32 "data/maps/Route20/scripts.pory"
	msgbox Route20_Text_SeafoamIslands, MSGBOX_SIGN
# 33 "data/maps/Route20/scripts.pory"
	end
# 34 "data/maps/Route20/scripts.pory"

# 35 "data/maps/Route20/scripts.pory"
Route20_EventScript_Slowbro::
# 36 "data/maps/Route20/scripts.pory"
	msgbox Route20_Text_Slowbro, MSGBOX_SIGN
# 37 "data/maps/Route20/scripts.pory"
	end
# 38 "data/maps/Route20/scripts.pory"

# 39 "data/maps/Route20/scripts.pory"
Route20_Mart_EventScript_Clerk::
# 40 "data/maps/Route20/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 41 "data/maps/Route20/scripts.pory"
	lock
# 42 "data/maps/Route20/scripts.pory"
	faceplayer
# 43 "data/maps/Route20/scripts.pory"
	goto_if_set FLAG_WAILORD_SHOWN, Route20_Mart_EventScript_Shop
# 44 "data/maps/Route20/scripts.pory"
	msgbox Route20_Text_MayIHelpYou
# 45 "data/maps/Route20/scripts.pory"
	waitmessage
# 46 "data/maps/Route20/scripts.pory"
	setvar VAR_0x8005, 1
# 47 "data/maps/Route20/scripts.pory"
	special IsWailordInParty
# 48 "data/maps/Route20/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SeafoamIslands_B3F_EventScript_NoEligiblePkmn
# 49 "data/maps/Route20/scripts.pory"
	setflag FLAG_WAILORD_SHOWN
# 50 "data/maps/Route20/scripts.pory"
	goto Route20_Mart_EventScript_Shop
# 51 "data/maps/Route20/scripts.pory"
	release
# 52 "data/maps/Route20/scripts.pory"
	end
# 53 "data/maps/Route20/scripts.pory"

# 54 "data/maps/Route20/scripts.pory"
Route20_Mart_EventScript_Shop::
# 55 "data/maps/Route20/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 56 "data/maps/Route20/scripts.pory"
	lock
# 57 "data/maps/Route20/scripts.pory"
	faceplayer
# 58 "data/maps/Route20/scripts.pory"
	message Text_MayIHelpYou
# 59 "data/maps/Route20/scripts.pory"
	waitmessage
# 60 "data/maps/Route20/scripts.pory"
	pokemart Route20_Mart_Items
# 61 "data/maps/Route20/scripts.pory"
	msgbox Text_PleaseComeAgain
# 62 "data/maps/Route20/scripts.pory"
	release
# 63 "data/maps/Route20/scripts.pory"
	end
# 64 "data/maps/Route20/scripts.pory"

# 65 "data/maps/Route20/scripts.pory"
	.align 2
# 66 "data/maps/Route20/scripts.pory"
Route20_Mart_Items::
# 67 "data/maps/Route20/scripts.pory"
	.2byte ITEM_PRISM_SCALE
# 68 "data/maps/Route20/scripts.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 69 "data/maps/Route20/scripts.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 70 "data/maps/Route20/scripts.pory"
	.2byte ITEM_NONE
# 71 "data/maps/Route20/scripts.pory"
	release
# 72 "data/maps/Route20/scripts.pory"
	end
# 73 "data/maps/Route20/scripts.pory"

# 74 "data/maps/Route20/scripts.pory"
Route20_Text_MayIHelpYou::
# 75 "data/maps/Route20/scripts.pory"
	.string "Show me a Wailord?$"
