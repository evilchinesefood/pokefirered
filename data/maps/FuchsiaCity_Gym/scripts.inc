# 1 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 2 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_MapScripts::
# 3 "data/maps/FuchsiaCity_Gym/scripts.pory"
	.byte 0
# 4 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 5 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_Koga::
# 6 "data/maps/FuchsiaCity_Gym/scripts.pory"
	famechecker FAMECHECKER_KOGA, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 7 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_KOGA, FuchsiaCity_Gym_EventScript_ContinueKoga
# 8 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_BLAINE, FuchsiaCity_Gym_EventScript_BeatBlaine
# 9 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_SABRINA, FuchsiaCity_Gym_EventScript_BeatSabrina
# 10 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_KOGA, FuchsiaCity_Gym_Text_KogaIntro, FuchsiaCity_Gym_Text_KogaDefeat, FuchsiaCity_Gym_EventScript_DefeatedKoga, NO_MUSIC
# 11 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto FuchsiaCity_Gym_EventScript_ContinueKoga
# 12 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_BeatSabrina::
# 13 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KOGA2, FuchsiaCity_Gym_Text_KogaIntro, FuchsiaCity_Gym_Text_KogaDefeat, FuchsiaCity_Gym_EventScript_DefeatedKoga, NO_MUSIC
# 14 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto FuchsiaCity_Gym_EventScript_ContinueKoga
# 15 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_BeatBlaine::
# 16 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_RS_GENTLEMAN, FuchsiaCity_Gym_Text_KogaIntro, FuchsiaCity_Gym_Text_KogaDefeat, FuchsiaCity_Gym_EventScript_DefeatedKoga, NO_MUSIC
# 17 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto FuchsiaCity_Gym_EventScript_ContinueKoga
# 18 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_ContinueKoga::
# 19 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto_if_unset FLAG_GOT_TM06_FROM_KOGA, FuchsiaCity_Gym_EventScript_GiveTM06
# 20 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, FuchsiaCity_Gym_EventScript_RematchKoga
# 21 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KogaPostBattle
# 22 "data/maps/FuchsiaCity_Gym/scripts.pory"
	release
# 23 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 24 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 25 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_DefeatedKoga::
# 26 "data/maps/FuchsiaCity_Gym/scripts.pory"
	famechecker FAMECHECKER_KOGA, 1
# 27 "data/maps/FuchsiaCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_FAME_CHECKER_KOGA_JOURNAL
# 28 "data/maps/FuchsiaCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_KOGA
# 29 "data/maps/FuchsiaCity_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 30 "data/maps/FuchsiaCity_Gym/scripts.pory"
	settrainerflag TRAINER_LEADER_KOGA
# 31 "data/maps/FuchsiaCity_Gym/scripts.pory"
	settrainerflag TRAINER_KOGA2
# 32 "data/maps/FuchsiaCity_Gym/scripts.pory"
	setflag FLAG_GYM3CAP
# 33 "data/maps/FuchsiaCity_Gym/scripts.pory"
	setflag FLAG_GYM4CAP
# 34 "data/maps/FuchsiaCity_Gym/scripts.pory"
	setflag FLAG_GYM5CAP
# 35 "data/maps/FuchsiaCity_Gym/scripts.pory"
	set_gym_trainers 5
# 36 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto FuchsiaCity_Gym_EventScript_GiveTM06
# 37 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 38 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 39 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_GiveTM06::
# 40 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KogaExplainSoulBadge
# 41 "data/maps/FuchsiaCity_Gym/scripts.pory"
	checkitemspace ITEM_TM06
# 42 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FuchsiaCity_Gym_EventScript_NoRoomForTM06
# 43 "data/maps/FuchsiaCity_Gym/scripts.pory"
	giveitem_msg FuchsiaCity_Gym_Text_ReceivedTM06FromKoga, ITEM_TM06
# 44 "data/maps/FuchsiaCity_Gym/scripts.pory"
	setflag FLAG_GOT_TM06_FROM_KOGA
# 45 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KogaExplainTM06
# 46 "data/maps/FuchsiaCity_Gym/scripts.pory"
	release
# 47 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 48 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 49 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_NoRoomForTM06::
# 50 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_MakeSpaceForThis
# 51 "data/maps/FuchsiaCity_Gym/scripts.pory"
	release
# 52 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 53 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 54 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_RematchKoga::
# 55 "data/maps/FuchsiaCity_Gym/scripts.pory"
	setvar VAR_0x8004, FAMECHECKER_KOGA
# 56 "data/maps/FuchsiaCity_Gym/scripts.pory"
	callnative CheckFilledFameCheckerFor0x8004
# 57 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FuchsiaCity_Gym_EventScript_RematchKoga2
# 58 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KogaNoNoRematchBattle
# 59 "data/maps/FuchsiaCity_Gym/scripts.pory"
	release
# 60 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 61 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 62 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_Text_KogaNoNoRematchBattle::
# 63 "data/maps/FuchsiaCity_Gym/scripts.pory"
	.string "FAME CHECKER$"
# 64 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 65 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_RematchKoga2::
# 66 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_RematchKoga, MSGBOX_YESNO
# 67 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FuchsiaCity_Gym_EventScript_NoRematchKoga
# 68 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_KOGA2, FuchsiaCity_Gym_Text_RematchYesKoga, FuchsiaCity_Gym_Text_RematchKogaDefeat, FuchsiaCity_Gym_EventScript_PostRematchKoga, NO_MUSIC
# 69 "data/maps/FuchsiaCity_Gym/scripts.pory"
	release
# 70 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 71 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 72 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_PostRematchKoga::
# 73 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KogaPostRematchBattle
# 74 "data/maps/FuchsiaCity_Gym/scripts.pory"
	cleartrainerflag TRAINER_LEADER_KOGA2   
# 75 "data/maps/FuchsiaCity_Gym/scripts.pory"
	release
# 76 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 77 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 78 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_NoRematchKoga::
# 79 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KogaNoRematchBattle
# 80 "data/maps/FuchsiaCity_Gym/scripts.pory"
	release
# 81 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 82 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 83 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_Phil::
# 84 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAMER_PHIL, FuchsiaCity_Gym_Text_PhilIntro, FuchsiaCity_Gym_Text_PhilDefeat
# 85 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_PhilPostBattle, MSGBOX_AUTOCLOSE
# 86 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 87 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 88 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_Edgar::
# 89 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAMER_EDGAR, FuchsiaCity_Gym_Text_EdgarIntro, FuchsiaCity_Gym_Text_EdgarDefeat
# 90 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_EdgarPostBattle, MSGBOX_AUTOCLOSE
# 91 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 92 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 93 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_Kirk::
# 94 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_KIRK, FuchsiaCity_Gym_Text_KirkIntro, FuchsiaCity_Gym_Text_KirkDefeat
# 95 "data/maps/FuchsiaCity_Gym/scripts.pory"
	famechecker FAMECHECKER_KOGA, 2
# 96 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
# 97 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 98 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 99 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_Shawn::
# 100 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_SHAWN, FuchsiaCity_Gym_Text_ShawnIntro, FuchsiaCity_Gym_Text_ShawnDefeat
# 101 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
# 102 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 103 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 104 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_Kayden::
# 105 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_KAYDEN, FuchsiaCity_Gym_Text_KaydenIntro, FuchsiaCity_Gym_Text_KaydenDefeat
# 106 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KaydenPostBattle, MSGBOX_AUTOCLOSE
# 107 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 108 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 109 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_Nate::
# 110 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_NATE, FuchsiaCity_Gym_Text_NateIntro, FuchsiaCity_Gym_Text_NateDefeat
# 111 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
# 112 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 113 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 114 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_GymGuy::
# 115 "data/maps/FuchsiaCity_Gym/scripts.pory"
	lock
# 116 "data/maps/FuchsiaCity_Gym/scripts.pory"
	faceplayer
# 117 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_KOGA, FuchsiaCity_Gym_EventScript_GymGuyPostVictory
# 118 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_GymGuyAdvice
# 119 "data/maps/FuchsiaCity_Gym/scripts.pory"
	release
# 120 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 121 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 122 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_GymGuyPostVictory::
# 123 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_GymGuyPostVictory
# 124 "data/maps/FuchsiaCity_Gym/scripts.pory"
	release
# 125 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 126 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 127 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_GymStatue::
# 128 "data/maps/FuchsiaCity_Gym/scripts.pory"
	lockall
# 129 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, FuchsiaCity_Gym_EventScript_GymStatuePostVictory
# 130 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_GymStatue
# 131 "data/maps/FuchsiaCity_Gym/scripts.pory"
	releaseall
# 132 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 133 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 134 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_GymStatuePostVictory::
# 135 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_GymStatuePlayerWon
# 136 "data/maps/FuchsiaCity_Gym/scripts.pory"
	releaseall
# 137 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
