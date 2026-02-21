# 1 "data/maps/SixIsland_RuinValley/scripts.pory"

# 2 "data/maps/SixIsland_RuinValley/scripts.pory"
.set LOCALID_SCIENTIST, 1
# 3 "data/maps/SixIsland_RuinValley/scripts.pory"
.set LOCALID_GIOVANNI, 18
# 4 "data/maps/SixIsland_RuinValley/scripts.pory"

# 5 "data/maps/SixIsland_RuinValley/scripts.pory"

# 6 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_MapScripts::
# 7 "data/maps/SixIsland_RuinValley/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SixIsland_RuinValley_OnLoad
# 8 "data/maps/SixIsland_RuinValley/scripts.pory"
	.byte 0
# 9 "data/maps/SixIsland_RuinValley/scripts.pory"

# 10 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_OnLoad::
# 11 "data/maps/SixIsland_RuinValley/scripts.pory"
	call_if_set FLAG_USED_CUT_ON_RUIN_VALLEY_BRAILLE, SixIsland_RuinValley_EventScript_OpenDottedHoleDoor
# 12 "data/maps/SixIsland_RuinValley/scripts.pory"
	end
# 13 "data/maps/SixIsland_RuinValley/scripts.pory"

# 14 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_EventScript_OpenDottedHoleDoor::
# 15 "data/maps/SixIsland_RuinValley/scripts.pory"
	setmetatile 24, 24, METATILE_SeviiIslands67_DottedHoleDoor_Open, 0
# 16 "data/maps/SixIsland_RuinValley/scripts.pory"
	return
# 17 "data/maps/SixIsland_RuinValley/scripts.pory"

# 18 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_EventScript_Scientist::
# 19 "data/maps/SixIsland_RuinValley/scripts.pory"
	lock
# 20 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_RuinValley_Text_CantFigureOutHowToGetInside
# 21 "data/maps/SixIsland_RuinValley/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_FacePlayer
# 22 "data/maps/SixIsland_RuinValley/scripts.pory"
	waitmovement 0
# 23 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_RuinValley_Text_IFoundThisPlace
# 24 "data/maps/SixIsland_RuinValley/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_FaceOriginalDirection
# 25 "data/maps/SixIsland_RuinValley/scripts.pory"
	waitmovement 0
# 26 "data/maps/SixIsland_RuinValley/scripts.pory"
	release
# 27 "data/maps/SixIsland_RuinValley/scripts.pory"
	end
# 28 "data/maps/SixIsland_RuinValley/scripts.pory"

# 29 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_EventScript_DottedHoleDoor::
# 30 "data/maps/SixIsland_RuinValley/scripts.pory"
	lockall
# 31 "data/maps/SixIsland_RuinValley/scripts.pory"
	goto_if_set FLAG_USED_CUT_ON_RUIN_VALLEY_BRAILLE, SixIsland_RuinValley_EventScript_DottedHoleDoorOpen
# 32 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_RuinValley_Text_CheckDoorMoreThoroughly, MSGBOX_YESNO
# 33 "data/maps/SixIsland_RuinValley/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SixIsland_RuinValley_EventScript_IgnoreDottedHoleDoor
# 34 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_RuinValley_Text_SeveralDotsOnTheDoor
# 35 "data/maps/SixIsland_RuinValley/scripts.pory"
	braillemessage Braille_Text_Cut
# 36 "data/maps/SixIsland_RuinValley/scripts.pory"
	waitbuttonpress
# 37 "data/maps/SixIsland_RuinValley/scripts.pory"
	releaseall
# 38 "data/maps/SixIsland_RuinValley/scripts.pory"
	end
# 39 "data/maps/SixIsland_RuinValley/scripts.pory"

# 40 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_EventScript_DottedHoleDoorOpen::
# 41 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_RuinValley_Text_DoorIsOpen
# 42 "data/maps/SixIsland_RuinValley/scripts.pory"
	releaseall
# 43 "data/maps/SixIsland_RuinValley/scripts.pory"
	end
# 44 "data/maps/SixIsland_RuinValley/scripts.pory"

# 45 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_EventScript_IgnoreDottedHoleDoor::
# 46 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_RuinValley_Text_LeftDoorAlone
# 47 "data/maps/SixIsland_RuinValley/scripts.pory"
	releaseall
# 48 "data/maps/SixIsland_RuinValley/scripts.pory"
	end
# 49 "data/maps/SixIsland_RuinValley/scripts.pory"

# 50 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_EventScript_Giovanni::
# 51 "data/maps/SixIsland_RuinValley/scripts.pory"
	lock
# 52 "data/maps/SixIsland_RuinValley/scripts.pory"
	waitse
# 53 "data/maps/SixIsland_RuinValley/scripts.pory"
	playse SE_PIN	
# 54 "data/maps/SixIsland_RuinValley/scripts.pory"
	applymovement LOCALID_GIOVANNI, Common_Movement_ExclamationMarkDelay
# 55 "data/maps/SixIsland_RuinValley/scripts.pory"
	waitmovement 0
# 56 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_PatternBush_Text_Giovanni
# 57 "data/maps/SixIsland_RuinValley/scripts.pory"
	waitmovement 0
# 58 "data/maps/SixIsland_RuinValley/scripts.pory"
	applymovement LOCALID_GIOVANNI, Common_Movement_FacePlayer
# 59 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_PatternBush_Text_Giovanni2
# 60 "data/maps/SixIsland_RuinValley/scripts.pory"
	waitmovement 0
# 61 "data/maps/SixIsland_RuinValley/scripts.pory"
	applymovement LOCALID_GIOVANNI, Common_Movement_FaceLeft
# 62 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_PatternBush_Text_Giovanni3
# 63 "data/maps/SixIsland_RuinValley/scripts.pory"
	waitmovement 0
# 64 "data/maps/SixIsland_RuinValley/scripts.pory"
	applymovement LOCALID_GIOVANNI, Common_Movement_FacePlayer
# 65 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_PatternBush_Text_Giovanni4, MSGBOX_YESNO
# 66 "data/maps/SixIsland_RuinValley/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SixIsland_RuinValley_EventScript_GiovanniNo
# 67 "data/maps/SixIsland_RuinValley/scripts.pory"
	setvar VAR_FORCEANIM, 1
# 68 "data/maps/SixIsland_RuinValley/scripts.pory"
	trainerbattle_single TRAINER_JACKO, SixIsland_PatternBush_Text_GiovanniYes, SixIsland_PatternBush_Text_GiovanniDefeat, SixIsland_RuinValley_EventScript_PostGiovanni, NO_MUSIC
# 69 "data/maps/SixIsland_RuinValley/scripts.pory"
	release
# 70 "data/maps/SixIsland_RuinValley/scripts.pory"
	end
# 71 "data/maps/SixIsland_RuinValley/scripts.pory"

# 72 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_EventScript_PostGiovanni::
# 73 "data/maps/SixIsland_RuinValley/scripts.pory"
	setvar VAR_FORCEANIM, 0
# 74 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_PatternBush_Text_GiovanniPost
# 75 "data/maps/SixIsland_RuinValley/scripts.pory"
	setflag FLAG_GIOVANNI4
# 76 "data/maps/SixIsland_RuinValley/scripts.pory"
	removeobject 18
# 77 "data/maps/SixIsland_RuinValley/scripts.pory"
	fadescreen FADE_TO_BLACK
# 78 "data/maps/SixIsland_RuinValley/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 79 "data/maps/SixIsland_RuinValley/scripts.pory"
	release
# 80 "data/maps/SixIsland_RuinValley/scripts.pory"
	end
# 81 "data/maps/SixIsland_RuinValley/scripts.pory"

# 82 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_EventScript_GiovanniNo::
# 83 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_PatternBush_Text_GiovanniNo
# 84 "data/maps/SixIsland_RuinValley/scripts.pory"
	release
# 85 "data/maps/SixIsland_RuinValley/scripts.pory"
	end
# 86 "data/maps/SixIsland_RuinValley/scripts.pory"

# 87 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_EventScript_Gym1::
# 88 "data/maps/SixIsland_RuinValley/scripts.pory"
	trainerbattle_single TRAINER_EXPERT_M, SixIsland_RuinValley_Text_Rocket1Intro, SixIsland_RuinValley_Text_Rocket1Defeat
# 89 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_RuinValley_Text_Rocket1PostBattle, MSGBOX_AUTOCLOSE
# 90 "data/maps/SixIsland_RuinValley/scripts.pory"
	end
# 91 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_Text_Rocket1Intro::
# 92 "data/maps/SixIsland_RuinValley/scripts.pory"
	.string "Hey, have you seen our MASTER\n"
# 93 "data/maps/SixIsland_RuinValley/scripts.pory"
	.string "here somewhere?$"
# 94 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_Text_Rocket1Defeat::
# 95 "data/maps/SixIsland_RuinValley/scripts.pory"
	.string "Please help us!$"
# 96 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_Text_Rocket1PostBattle::
# 97 "data/maps/SixIsland_RuinValley/scripts.pory"
	.string "Our MASTER went into the\n"
# 98 "data/maps/SixIsland_RuinValley/scripts.pory"
	.string "cave and he hasn't come out!\l"
# 99 "data/maps/SixIsland_RuinValley/scripts.pory"
	.string "It's been two hours!$"
# 100 "data/maps/SixIsland_RuinValley/scripts.pory"

# 101 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_EventScript_Gym2::
# 102 "data/maps/SixIsland_RuinValley/scripts.pory"
	trainerbattle_single TRAINER_EXPERT_F, SixIsland_RuinValley_Text_Rocket2Intro, SixIsland_RuinValley_Text_Rocket2Defeat
# 103 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_RuinValley_Text_Rocket2PostBattle, MSGBOX_AUTOCLOSE
# 104 "data/maps/SixIsland_RuinValley/scripts.pory"
	end
# 105 "data/maps/SixIsland_RuinValley/scripts.pory"

# 106 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_Text_Rocket2Intro::
# 107 "data/maps/SixIsland_RuinValley/scripts.pory"
	.string "I've been standing here\n"
# 108 "data/maps/SixIsland_RuinValley/scripts.pory"
	.string "for two entire hours!$"
# 109 "data/maps/SixIsland_RuinValley/scripts.pory"

# 110 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_Text_Rocket2Defeat::
# 111 "data/maps/SixIsland_RuinValley/scripts.pory"
	.string "WAHHH!$"
# 112 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_Text_Rocket2PostBattle::
# 113 "data/maps/SixIsland_RuinValley/scripts.pory"
	.string "I can't take this anymore…$"
