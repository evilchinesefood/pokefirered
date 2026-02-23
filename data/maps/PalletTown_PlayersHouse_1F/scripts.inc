# 1 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 2 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
.equ LOCALID_MOM, 1
# 3 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 4 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_MapScripts::
# 5 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_PlayersHouse_1F_OnFrame
# 6 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	.byte 0
# 7 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 8 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_OnFrame::
# 9 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PLAYERS_HOUSE_1F, 0, PalletTown_PlayersHouse_1F_EventScript_MomShoes
# 10 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	.2byte 0
# 11 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 12 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_MomShoes::
# 13 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	lockall
# 14 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 15 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterDown
# 16 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 17 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_ExclamationMark
# 18 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 19 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_Delay48
# 20 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 21 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	delay 25
# 22 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, PalletTown_PlayersHouse_1F_Movement_RivalApproach
# 23 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 24 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_MomShoes
# 25 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 26 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	message PalletTown_PlayersHouse_1F_Text_ReceivedRunningShoesFromAide
# 27 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	waitmessage
# 28 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	waitfanfare
# 29 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_ReceivedRunningShoesFromAide2
# 30 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	special DisableMsgBoxWalkaway
# 31 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	signmsg
# 32 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 33 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, PalletTown_PlayersHouse_1F_Movement_RivalExit
# 34 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 35 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 36 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_PressB
# 37 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	fadedefaultbgm
# 38 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	delay 35
# 39 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PLAYERS_HOUSE_1F, 1
# 40 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	releaseall
# 41 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	end
# 42 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 43 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_Movement_RivalApproach::
# 44 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 45 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 46 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 47 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	step_end
# 48 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 49 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_Movement_RivalExit::
# 50 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	walk_down
# 51 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 52 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 53 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	step_end
# 54 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 55 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_Mom::
# 56 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	lock
# 57 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	faceplayer
# 58 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	call_if_unset FLAG_MOM_CHAMP, PalletTown_PlayersHouse_1F_EventScript_MomChampion
# 59 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	goto_if_set FLAG_BEAT_RIVAL_IN_OAKS_LAB, PalletTown_PlayersHouse_1F_EventScript_MomHeal
# 60 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	checkplayergender
# 61 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouMale
# 62 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouFemale
# 63 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 64 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_FaceOriginalDirection
# 65 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 66 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	release
# 67 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	end
# 68 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 69 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouMale::
# 70 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_AllBoysLeaveOakLookingForYou
# 71 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	return
# 72 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 73 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouFemale::
# 74 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_AllGirlsLeaveOakLookingForYou
# 75 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	return
# 76 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 77 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_MomHeal::
# 78 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_YouShouldTakeQuickRest
# 79 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 80 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	call EventScript_OutOfCenterPartyHeal
# 81 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_LookingGreatTakeCare
# 82 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	release
# 83 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	end
# 84 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 85 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_MomChampion::
# 86 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_Champion
# 87 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 88 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_MOM_CHAMP
# 89 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	return
# 90 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 91 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
@ Displays special text if interacted with from side or back (which are normally inaccessible)
# 92 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TV::
# 93 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	lockall
# 94 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_NORTH, PalletTown_PlayersHouse_1F_EventScript_TVScreen
# 95 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_OopsWrongSide
# 96 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	releaseall
# 97 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	end
# 98 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 99 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TVScreen::
# 100 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	checkplayergender
# 101 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, PalletTown_PlayersHouse_1F_EventScript_TVScreenMale
# 102 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, PalletTown_PlayersHouse_1F_EventScript_TVScreenFemale
# 103 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	releaseall
# 104 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	end
# 105 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 106 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TVScreenMale::
# 107 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_MovieOnTVFourBoysOnRailroad
# 108 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	return
# 109 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 110 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TVScreenFemale::
# 111 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_MovieOnTVGirlOnBrickRoad
# 112 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	return
