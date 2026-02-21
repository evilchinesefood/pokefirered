# 1 "data/maps/CeruleanCity_Gym/scripts.pory"

# 2 "data/maps/CeruleanCity_Gym/scripts.pory"
CeruleanCity_Gym_MapScripts::
# 3 "data/maps/CeruleanCity_Gym/scripts.pory"
	.byte 0
# 4 "data/maps/CeruleanCity_Gym/scripts.pory"

# 5 "data/maps/CeruleanCity_Gym/scripts.pory"
CeruleanCity_Gym_EventScript_Misty::
# 6 "data/maps/CeruleanCity_Gym/scripts.pory"
	famechecker FAMECHECKER_MISTY, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 7 "data/maps/CeruleanCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_MISTY, CeruleanCity_Gym_Text_MistyIntro, CeruleanCity_Gym_Text_MistyDefeat, CeruleanCity_Gym_EventScript_MistyDefeated, NO_MUSIC
# 8 "data/maps/CeruleanCity_Gym/scripts.pory"
	goto_if_unset FLAG_GOT_TM03_FROM_MISTY, CeruleanCity_Gym_EventScript_GiveTM03
# 9 "data/maps/CeruleanCity_Gym/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, CeruleanCity_Gym_EventScript_RematchMisty
# 10 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_ExplainTM03
# 11 "data/maps/CeruleanCity_Gym/scripts.pory"
	release
# 12 "data/maps/CeruleanCity_Gym/scripts.pory"
	end
# 13 "data/maps/CeruleanCity_Gym/scripts.pory"

# 14 "data/maps/CeruleanCity_Gym/scripts.pory"
CeruleanCity_Gym_EventScript_MistyDefeated::
# 15 "data/maps/CeruleanCity_Gym/scripts.pory"
	famechecker FAMECHECKER_MISTY, 1
# 16 "data/maps/CeruleanCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MISTY
# 17 "data/maps/CeruleanCity_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 18 "data/maps/CeruleanCity_Gym/scripts.pory"
	setrespawn SPAWN_CERULEAN_CITY
# 19 "data/maps/CeruleanCity_Gym/scripts.pory"
	set_gym_trainers 2
# 20 "data/maps/CeruleanCity_Gym/scripts.pory"
	goto CeruleanCity_Gym_EventScript_GiveTM03
# 21 "data/maps/CeruleanCity_Gym/scripts.pory"
	end
# 22 "data/maps/CeruleanCity_Gym/scripts.pory"

# 23 "data/maps/CeruleanCity_Gym/scripts.pory"
CeruleanCity_Gym_EventScript_GiveTM03::
# 24 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_ExplainCascadeBadge
# 25 "data/maps/CeruleanCity_Gym/scripts.pory"
	checkitemspace ITEM_TM03
# 26 "data/maps/CeruleanCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_Gym_EventScript_NoRoomForTM03
# 27 "data/maps/CeruleanCity_Gym/scripts.pory"
	giveitem_msg CeruleanCity_Gym_Text_ReceivedTM03FromMisty, ITEM_TM03
# 28 "data/maps/CeruleanCity_Gym/scripts.pory"
	setflag FLAG_GOT_TM03_FROM_MISTY
# 29 "data/maps/CeruleanCity_Gym/scripts.pory"
	setflag FLAG_UNBLOCK_CERULEAN
# 30 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_ExplainTM03
# 31 "data/maps/CeruleanCity_Gym/scripts.pory"
	release
# 32 "data/maps/CeruleanCity_Gym/scripts.pory"
	end
# 33 "data/maps/CeruleanCity_Gym/scripts.pory"

# 34 "data/maps/CeruleanCity_Gym/scripts.pory"
CeruleanCity_Gym_EventScript_NoRoomForTM03::
# 35 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_BetterMakeRoomForThis
# 36 "data/maps/CeruleanCity_Gym/scripts.pory"
	release
# 37 "data/maps/CeruleanCity_Gym/scripts.pory"
	end
# 38 "data/maps/CeruleanCity_Gym/scripts.pory"

# 39 "data/maps/CeruleanCity_Gym/scripts.pory"
CeruleanCity_Gym_EventScript_RematchMisty::
# 40 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_RematchMisty, MSGBOX_YESNO
# 41 "data/maps/CeruleanCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CeruleanCity_Gym_EventScript_NoRematchMisty
# 42 "data/maps/CeruleanCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MISTY2, CeruleanCity_Gym_Text_RematchYesMisty, CeruleanCity_Gym_Text_RematchMistyDefeat, CeruleanCity_Gym_EventScript_PostRematchMisty, NO_MUSIC
# 43 "data/maps/CeruleanCity_Gym/scripts.pory"
	release
# 44 "data/maps/CeruleanCity_Gym/scripts.pory"
	end
# 45 "data/maps/CeruleanCity_Gym/scripts.pory"

# 46 "data/maps/CeruleanCity_Gym/scripts.pory"
CeruleanCity_Gym_EventScript_PostRematchMisty::
# 47 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_MistyPostRematchBattle
# 48 "data/maps/CeruleanCity_Gym/scripts.pory"
	cleartrainerflag TRAINER_MISTY2
# 49 "data/maps/CeruleanCity_Gym/scripts.pory"
	release
# 50 "data/maps/CeruleanCity_Gym/scripts.pory"
	end
# 51 "data/maps/CeruleanCity_Gym/scripts.pory"

# 52 "data/maps/CeruleanCity_Gym/scripts.pory"
CeruleanCity_Gym_EventScript_NoRematchMisty::
# 53 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_MistyNoRematchBattle
# 54 "data/maps/CeruleanCity_Gym/scripts.pory"
	release
# 55 "data/maps/CeruleanCity_Gym/scripts.pory"
	end
# 56 "data/maps/CeruleanCity_Gym/scripts.pory"

# 57 "data/maps/CeruleanCity_Gym/scripts.pory"
CeruleanCity_Gym_EventScript_Diana::
# 58 "data/maps/CeruleanCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_DIANA, CeruleanCity_Gym_Text_DianaIntro, CeruleanCity_Gym_Text_DianaDefeat
# 59 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_DianaPostBattle, MSGBOX_AUTOCLOSE
# 60 "data/maps/CeruleanCity_Gym/scripts.pory"
	end
# 61 "data/maps/CeruleanCity_Gym/scripts.pory"

# 62 "data/maps/CeruleanCity_Gym/scripts.pory"
CeruleanCity_Gym_EventScript_Luis::
# 63 "data/maps/CeruleanCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SWIMMER_MALE_LUIS, CeruleanCity_Gym_Text_LuisIntro, CeruleanCity_Gym_Text_LuisDefeat
# 64 "data/maps/CeruleanCity_Gym/scripts.pory"
	famechecker FAMECHECKER_MISTY, 2
# 65 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_LuisPostBattle, MSGBOX_AUTOCLOSE
# 66 "data/maps/CeruleanCity_Gym/scripts.pory"
	end
# 67 "data/maps/CeruleanCity_Gym/scripts.pory"

# 68 "data/maps/CeruleanCity_Gym/scripts.pory"
CeruleanCity_Gym_EventScript_GymGuy::
# 69 "data/maps/CeruleanCity_Gym/scripts.pory"
	lock
# 70 "data/maps/CeruleanCity_Gym/scripts.pory"
	faceplayer
# 71 "data/maps/CeruleanCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MISTY, CeruleanCity_Gym_EventScript_GymGuyPostVictory
# 72 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_GymGuyAdvice
# 73 "data/maps/CeruleanCity_Gym/scripts.pory"
	release
# 74 "data/maps/CeruleanCity_Gym/scripts.pory"
	end
# 75 "data/maps/CeruleanCity_Gym/scripts.pory"

# 76 "data/maps/CeruleanCity_Gym/scripts.pory"
CeruleanCity_Gym_EventScript_GymGuyPostVictory::
# 77 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_WeMakePrettyGoodTeam
# 78 "data/maps/CeruleanCity_Gym/scripts.pory"
	release
# 79 "data/maps/CeruleanCity_Gym/scripts.pory"
	end
# 80 "data/maps/CeruleanCity_Gym/scripts.pory"

# 81 "data/maps/CeruleanCity_Gym/scripts.pory"
CeruleanCity_Gym_EventScript_GymStatue::
# 82 "data/maps/CeruleanCity_Gym/scripts.pory"
	lockall
# 83 "data/maps/CeruleanCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, CeruleanCity_Gym_EventScript_GymStatuePostVictory
# 84 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_GymStatue
# 85 "data/maps/CeruleanCity_Gym/scripts.pory"
	releaseall
# 86 "data/maps/CeruleanCity_Gym/scripts.pory"
	end
# 87 "data/maps/CeruleanCity_Gym/scripts.pory"

# 88 "data/maps/CeruleanCity_Gym/scripts.pory"
CeruleanCity_Gym_EventScript_GymStatuePostVictory::
# 89 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_GymStatuePlayerWon
# 90 "data/maps/CeruleanCity_Gym/scripts.pory"
	releaseall
# 91 "data/maps/CeruleanCity_Gym/scripts.pory"
	end
