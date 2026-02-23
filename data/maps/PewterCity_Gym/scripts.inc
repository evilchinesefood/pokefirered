# 1 "data/maps/PewterCity_Gym/scripts.pory"

# 2 "data/maps/PewterCity_Gym/scripts.pory"
PewterCity_Gym_MapScripts::
# 3 "data/maps/PewterCity_Gym/scripts.pory"
	.byte 0
# 4 "data/maps/PewterCity_Gym/scripts.pory"

# 5 "data/maps/PewterCity_Gym/scripts.pory"
PewterCity_Gym_EventScript_Brock::
# 6 "data/maps/PewterCity_Gym/scripts.pory"
	famechecker FAMECHECKER_BROCK, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 7 "data/maps/PewterCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_BROCK, PewterCity_Gym_Text_BrockIntro, PewterCity_Gym_Text_BrockDefeat, PewterCity_Gym_EventScript_DefeatedBrock, NO_MUSIC
# 8 "data/maps/PewterCity_Gym/scripts.pory"
	goto_if_unset FLAG_GOT_TM39_FROM_BROCK, PewterCity_Gym_EventScript_GiveTM39
# 9 "data/maps/PewterCity_Gym/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, PewterCity_Gym_EventScript_RematchBrock
# 10 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_BrockPostBattle
# 11 "data/maps/PewterCity_Gym/scripts.pory"
	release
# 12 "data/maps/PewterCity_Gym/scripts.pory"
	end
# 13 "data/maps/PewterCity_Gym/scripts.pory"

# 14 "data/maps/PewterCity_Gym/scripts.pory"
PewterCity_Gym_EventScript_DefeatedBrock::
# 15 "data/maps/PewterCity_Gym/scripts.pory"
	famechecker FAMECHECKER_BROCK, 1
# 16 "data/maps/PewterCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_BROCK
# 17 "data/maps/PewterCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 18 "data/maps/PewterCity_Gym/scripts.pory"
	setvar VAR_MAP_SCENE_PEWTER_CITY, 1
# 19 "data/maps/PewterCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PEWTER_CITY_GYM_GUIDE
# 20 "data/maps/PewterCity_Gym/scripts.pory"
	set_gym_trainers 1
# 21 "data/maps/PewterCity_Gym/scripts.pory"
	goto PewterCity_Gym_EventScript_GiveTM39
# 22 "data/maps/PewterCity_Gym/scripts.pory"
	end
# 23 "data/maps/PewterCity_Gym/scripts.pory"

# 24 "data/maps/PewterCity_Gym/scripts.pory"
PewterCity_Gym_EventScript_GiveTM39::
# 25 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_TakeThisWithYou
# 26 "data/maps/PewterCity_Gym/scripts.pory"
	checkitemspace ITEM_TM39
# 27 "data/maps/PewterCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PewterCity_Gym_EventScript_NoRoomForTM39
# 28 "data/maps/PewterCity_Gym/scripts.pory"
	giveitem_msg PewterCity_Gym_Text_ReceivedTM39FromBrock, ITEM_TM39
# 29 "data/maps/PewterCity_Gym/scripts.pory"
	setflag FLAG_GOT_TM39_FROM_BROCK
# 30 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_ExplainTM39
# 31 "data/maps/PewterCity_Gym/scripts.pory"
	release
# 32 "data/maps/PewterCity_Gym/scripts.pory"
	end
# 33 "data/maps/PewterCity_Gym/scripts.pory"

# 34 "data/maps/PewterCity_Gym/scripts.pory"
PewterCity_Gym_EventScript_NoRoomForTM39::
# 35 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_DontHaveRoomForThis
# 36 "data/maps/PewterCity_Gym/scripts.pory"
	release
# 37 "data/maps/PewterCity_Gym/scripts.pory"
	end
# 38 "data/maps/PewterCity_Gym/scripts.pory"

# 39 "data/maps/PewterCity_Gym/scripts.pory"
PewterCity_Gym_EventScript_RematchBrock::
# 40 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_RematchBrock, MSGBOX_YESNO
# 41 "data/maps/PewterCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PewterCity_Gym_EventScript_NoRematchBrock
# 42 "data/maps/PewterCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BROCK2, PewterCity_Gym_Text_RematchYesBrock, PewterCity_Gym_Text_RematchBrockDefeat, PewterCity_Gym_EventScript_PostRematchBrock, NO_MUSIC
# 43 "data/maps/PewterCity_Gym/scripts.pory"
	release
# 44 "data/maps/PewterCity_Gym/scripts.pory"
	end
# 45 "data/maps/PewterCity_Gym/scripts.pory"

# 46 "data/maps/PewterCity_Gym/scripts.pory"
PewterCity_Gym_EventScript_PostRematchBrock::
# 47 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_BrockPostRematchBattle
# 48 "data/maps/PewterCity_Gym/scripts.pory"
	cleartrainerflag TRAINER_BROCK2
# 49 "data/maps/PewterCity_Gym/scripts.pory"
	release
# 50 "data/maps/PewterCity_Gym/scripts.pory"
	end
# 51 "data/maps/PewterCity_Gym/scripts.pory"

# 52 "data/maps/PewterCity_Gym/scripts.pory"
PewterCity_Gym_EventScript_NoRematchBrock::
# 53 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_BrockNoRematchBattle
# 54 "data/maps/PewterCity_Gym/scripts.pory"
	release
# 55 "data/maps/PewterCity_Gym/scripts.pory"
	end
# 56 "data/maps/PewterCity_Gym/scripts.pory"

# 57 "data/maps/PewterCity_Gym/scripts.pory"
PewterCity_Gym_EventScript_Liam::
# 58 "data/maps/PewterCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CAMPER_LIAM, PewterCity_Gym_Text_LiamIntro, PewterCity_Gym_Text_LiamDefeat
# 59 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_LiamPostBattle, MSGBOX_AUTOCLOSE
# 60 "data/maps/PewterCity_Gym/scripts.pory"
	end
# 61 "data/maps/PewterCity_Gym/scripts.pory"

# 62 "data/maps/PewterCity_Gym/scripts.pory"
PewterCity_Gym_EventScript_GymGuy::
# 63 "data/maps/PewterCity_Gym/scripts.pory"
	lock
# 64 "data/maps/PewterCity_Gym/scripts.pory"
	faceplayer
# 65 "data/maps/PewterCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_BROCK, PewterCity_Gym_EventScript_GymGuyPostVictory
# 66 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_LetMeTakeYouToTheTop, MSGBOX_YESNO
# 67 "data/maps/PewterCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PewterCity_Gym_EventScript_GymGuyTakeMeToTop
# 68 "data/maps/PewterCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PewterCity_Gym_EventScript_GymGuyDontTakeMeToTop
# 69 "data/maps/PewterCity_Gym/scripts.pory"
	end
# 70 "data/maps/PewterCity_Gym/scripts.pory"

# 71 "data/maps/PewterCity_Gym/scripts.pory"
PewterCity_Gym_EventScript_GymGuyPostVictory::
# 72 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_YoureChampMaterial
# 73 "data/maps/PewterCity_Gym/scripts.pory"
	release
# 74 "data/maps/PewterCity_Gym/scripts.pory"
	end
# 75 "data/maps/PewterCity_Gym/scripts.pory"

# 76 "data/maps/PewterCity_Gym/scripts.pory"
PewterCity_Gym_EventScript_GymGuyTakeMeToTop::
# 77 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_LetsGetHappening
# 78 "data/maps/PewterCity_Gym/scripts.pory"
	goto PewterCity_Gym_EventScript_GymGuyAdvice
# 79 "data/maps/PewterCity_Gym/scripts.pory"
	end
# 80 "data/maps/PewterCity_Gym/scripts.pory"

# 81 "data/maps/PewterCity_Gym/scripts.pory"
PewterCity_Gym_EventScript_GymGuyDontTakeMeToTop::
# 82 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_ItsFreeLetsGetHappening
# 83 "data/maps/PewterCity_Gym/scripts.pory"
	goto PewterCity_Gym_EventScript_GymGuyAdvice
# 84 "data/maps/PewterCity_Gym/scripts.pory"
	end
# 85 "data/maps/PewterCity_Gym/scripts.pory"

# 86 "data/maps/PewterCity_Gym/scripts.pory"
PewterCity_Gym_EventScript_GymGuyAdvice::
# 87 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_TryDifferentPartyOrders
# 88 "data/maps/PewterCity_Gym/scripts.pory"
	release
# 89 "data/maps/PewterCity_Gym/scripts.pory"
	end
# 90 "data/maps/PewterCity_Gym/scripts.pory"

# 91 "data/maps/PewterCity_Gym/scripts.pory"
PewterCity_Gym_EventScript_GymStatue::
# 92 "data/maps/PewterCity_Gym/scripts.pory"
	lockall
# 93 "data/maps/PewterCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, PewterCity_Gym_EventScript_GymStatuePostVictory
# 94 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_GymStatue
# 95 "data/maps/PewterCity_Gym/scripts.pory"
	releaseall
# 96 "data/maps/PewterCity_Gym/scripts.pory"
	end
# 97 "data/maps/PewterCity_Gym/scripts.pory"

# 98 "data/maps/PewterCity_Gym/scripts.pory"
PewterCity_Gym_EventScript_GymStatuePostVictory::
# 99 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_GymStatuePlayerWon
# 100 "data/maps/PewterCity_Gym/scripts.pory"
	releaseall
# 101 "data/maps/PewterCity_Gym/scripts.pory"
	end
