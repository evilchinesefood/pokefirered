# 1 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
.set LOCALID_DOOR_GUARD, 4
# 3 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_MapScripts::
# 5 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IndigoPlateau_PokemonCenter_1F_OnTransition
# 6 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.byte 0
# 7 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 8 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_OnTransition::
# 9 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	setrespawn SPAWN_INDIGO_PLATEAU
# 10 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	call_if_set FLAG_IS_CHAMPION, IndigoPlateau_PokemonCenter_1F_EventScript_CheckBlockDoor
# 11 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	end
# 12 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 13 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_CheckBlockDoor::
# 14 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_CAN_LINK_WITH_RS, EventScript_Return
# 15 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_DOOR_GUARD, 4, 2
# 16 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	return
# 17 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 18 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_DoorGuard::
# 19 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	lock
# 20 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	faceplayer
# 21 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, IndigoPlateau_PokemonCenter_1F_EventScript_CheckSeviiIslandComplete
# 22 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	msgbox IndigoPlateau_PokemonCenter_1F_Text_FaceEliteFourGoodLuck
# 23 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	release
# 24 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	end
# 25 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 26 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_CheckSeviiIslandComplete::
# 27 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_CAN_LINK_WITH_RS, IndigoPlateau_PokemonCenter_1F_EventScript_SeviiIslandComplete
# 28 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	msgbox IndigoPlateau_PokemonCenter_1F_Text_LoreleiIsAbsentClosedForTimeBeing
# 29 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	release
# 30 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	end
# 31 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 32 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_SeviiIslandComplete::
# 33 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	msgbox IndigoPlateau_PokemonCenter_1F_Text_FaceEliteFourGoodLuck
# 34 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	release
# 35 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	end
# 36 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 37 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_GymGuy::
# 38 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	call CinnabarIsland_EventScript_FishermanCheckFishingRod
# 39 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	call CinnabarIsland_EventScript_FishermanCheckPokeballs
# 40 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	msgbox IndigoPlateau_PokemonCenter_1F_Text_GymGuyAdvice, MSGBOX_NPC
# 41 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	end
# 42 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 43 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_Clerk::
# 44 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 45 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	lock
# 46 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	faceplayer
# 47 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	message Text_MayIHelpYou
# 48 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	waitmessage
# 49 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	pokemart IndigoPlateau_PokemonCenter_1F_Items
# 50 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	msgbox Text_PleaseComeAgain
# 51 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	release
# 52 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	end
# 53 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 54 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.align 2
# 55 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_Items::
# 56 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 57 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 58 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 59 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 60 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_MAX_POTION
# 61 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_ETHER
# 62 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_ELIXIR
# 63 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_REVIVE
# 64 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 65 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 66 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_NONE
# 67 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	release
# 68 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	end
# 69 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 70 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_Nurse::
# 71 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	lock
# 72 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	faceplayer
# 73 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 74 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	release
# 75 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	end
# 76 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 77 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_TMGUY::
# 78 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 79 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	lock
# 80 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	faceplayer
# 81 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	message IndigoPlateau_PokemonCenter_1F_Text_TmGuy
# 82 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	waitmessage
# 83 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	pokemart IndigoPlateau_PokemonCenter_1F_TMGUY
# 84 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	msgbox Text_PleaseComeAgain
# 85 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	release
# 86 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	end
# 87 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 88 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.align 2
# 89 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_TMGUY::
# 90 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_TM07
# 91 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_TM11
# 92 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_TM13
# 93 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_TM18
# 94 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_TM23
# 95 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_TM24
# 96 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_TM30
# 97 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_TM35
# 98 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_TM37
# 99 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_TM48
# 100 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_TM49
# 101 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_NONE
# 102 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	release
# 103 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	end
