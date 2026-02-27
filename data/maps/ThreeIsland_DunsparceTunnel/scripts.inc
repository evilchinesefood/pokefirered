# 1 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"

# 2 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
.set LOCALID_PROSPECTOR, 1
# 3 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"

# 4 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
ThreeIsland_DunsparceTunnel_MapScripts::
# 5 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ThreeIsland_DunsparceTunnel_OnTransition
# 6 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	.byte 0
# 7 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"

# 8 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
ThreeIsland_DunsparceTunnel_OnTransition::
# 9 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_THREE_ISLAND_DUNSPARCE_TUNNEL
# 10 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	call_if_set FLAG_IS_CHAMPION, ThreeIsland_DunsparceTunnel_EventScript_SetLayoutDugOut
# 11 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	call_if_unset FLAG_IS_CHAMPION, ThreeIsland_DunsparceTunnel_EventScript_MoveProspectorToWall
# 12 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	end
# 13 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"

# 14 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
ThreeIsland_DunsparceTunnel_EventScript_SetLayoutDugOut::
# 15 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	setmaplayoutindex LAYOUT_THREE_ISLAND_DUNSPARCE_TUNNEL_DUG_OUT
# 16 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	return
# 17 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"

# 18 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
ThreeIsland_DunsparceTunnel_EventScript_MoveProspectorToWall::
# 19 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	setobjectxyperm LOCALID_PROSPECTOR, 6, 3
# 20 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	setobjectmovementtype LOCALID_PROSPECTOR, MOVEMENT_TYPE_FACE_RIGHT
# 21 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	return
# 22 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"

# 23 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
ThreeIsland_DunsparceTunnel_EventScript_Prospector::
# 24 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	lock
# 25 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	faceplayer
# 26 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	goto_if_set FLAG_GOT_NUGGET_FROM_DUNSPARCE_TUNNEL, ThreeIsland_DunsparceTunnel_EventScript_ProspectorAlreadyGaveNugget
# 27 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, ThreeIsland_DunsparceTunnel_EventScript_ProspectorStruckGold
# 28 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	msgbox ThreeIsland_DunsparceTunnel_Text_ProspectingForGold
# 29 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	closemessage
# 30 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	applymovement LOCALID_PROSPECTOR, Common_Movement_FaceOriginalDirection
# 31 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	waitmovement 0
# 32 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	release
# 33 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	end
# 34 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"

# 35 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
ThreeIsland_DunsparceTunnel_EventScript_ProspectorStruckGold::
# 36 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	msgbox ThreeIsland_DunsparceTunnel_Text_StruckGoldThisIsForYou
# 37 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	giveitem ITEM_NUGGET
# 38 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, ThreeIsland_DunsparceTunnel_EventScript_NoRoomForNugget
# 39 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	setflag FLAG_GOT_NUGGET_FROM_DUNSPARCE_TUNNEL
# 40 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	goto ThreeIsland_DunsparceTunnel_EventScript_ProspectorAlreadyGaveNugget
# 41 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	end
# 42 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"

# 43 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
ThreeIsland_DunsparceTunnel_EventScript_NoRoomForNugget::
# 44 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	msgbox ThreeIsland_DunsparceTunnel_Text_WhoopsBagCrammedFull
# 45 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	release
# 46 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	end
# 47 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"

# 48 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
ThreeIsland_DunsparceTunnel_EventScript_ProspectorAlreadyGaveNugget::
# 49 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	msgbox ThreeIsland_DunsparceTunnel_Text_ThatsANugget
# 50 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	release
# 51 "data/maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	end
