# 1 "data/maps/Route21_South/scripts.pory"

# 2 "data/maps/Route21_South/scripts.pory"
.set LOCALID_MIRAGE, 6
# 3 "data/maps/Route21_South/scripts.pory"
Route21_South_MapScripts::
# 4 "data/maps/Route21_South/scripts.pory"
	.byte 0
# 5 "data/maps/Route21_South/scripts.pory"

# 6 "data/maps/Route21_South/scripts.pory"
Route21_South_EventScript_OrbingCheck::
# 7 "data/maps/Route21_South/scripts.pory"
	lock
# 8 "data/maps/Route21_South/scripts.pory"
	faceplayer
# 9 "data/maps/Route21_South/scripts.pory"
	goto_if_unset FLAG_ORBING, Route21_South_EventScript_NeedOrb
# 10 "data/maps/Route21_South/scripts.pory"
	goto_if_set FLAG_CAUGHT_KYOGRE, Route21_South_EventScript_End
# 11 "data/maps/Route21_South/scripts.pory"
	goto_if_set FLAG_KYOGRE_CHECKED, Route21_South_EventScript_Orbing
# 12 "data/maps/Route21_South/scripts.pory"
	msgbox Route21_South_Text_RegiceCheck
# 13 "data/maps/Route21_South/scripts.pory"
	closemessage
# 14 "data/maps/Route21_South/scripts.pory"
	goto_if_unset FLAG_RE_DEFEATED, Route21_South_EventScript_NoEligiblePkmn
# 15 "data/maps/Route21_South/scripts.pory"
	setvar 0x8004, FAMECHECKER_BLAINE
# 16 "data/maps/Route21_South/scripts.pory"
	callnative CheckFilledFameCheckerFor0x8004
# 17 "data/maps/Route21_South/scripts.pory"
	compare VAR_RESULT, TRUE
# 18 "data/maps/Route21_South/scripts.pory"
	goto_if_eq Route21_South_EventScript_Flag
# 19 "data/maps/Route21_South/scripts.pory"
	release
# 20 "data/maps/Route21_South/scripts.pory"
	end
# 21 "data/maps/Route21_South/scripts.pory"

# 22 "data/maps/Route21_South/scripts.pory"
Route21_South_EventScript_NeedOrb::
# 23 "data/maps/Route21_South/scripts.pory"
	msgbox Route21_South_Text_NeedOrb
# 24 "data/maps/Route21_South/scripts.pory"
	release
# 25 "data/maps/Route21_South/scripts.pory"
	end
# 26 "data/maps/Route21_South/scripts.pory"

# 27 "data/maps/Route21_South/scripts.pory"
Route21_South_EventScript_NoEligiblePkmn::
# 28 "data/maps/Route21_South/scripts.pory"
	msgbox Route21_South_Text_NoEligiblePkmn
# 29 "data/maps/Route21_South/scripts.pory"
	release
# 30 "data/maps/Route21_South/scripts.pory"
	end
# 31 "data/maps/Route21_South/scripts.pory"

# 32 "data/maps/Route21_South/scripts.pory"
Route21_South_EventScript_Flag::
# 33 "data/maps/Route21_South/scripts.pory"
	setflag FLAG_KYOGRE_CHECKED
# 34 "data/maps/Route21_South/scripts.pory"
	goto Route21_South_EventScript_Orbing
# 35 "data/maps/Route21_South/scripts.pory"
	end
# 36 "data/maps/Route21_South/scripts.pory"

# 37 "data/maps/Route21_South/scripts.pory"
Route21_South_EventScript_Orbing::
# 38 "data/maps/Route21_South/scripts.pory"
	msgbox Route21_South_Text_Whitney, MSGBOX_YESNO
# 39 "data/maps/Route21_South/scripts.pory"
	closemessage
# 40 "data/maps/Route21_South/scripts.pory"
	delay 40
# 41 "data/maps/Route21_South/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route21_South_EventScript_NoWhitney
# 42 "data/maps/Route21_South/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_M, Route21_South_Text_YesWhitney, Route21_South_Text_PostWhitney, Route21_South_EventScript_PostWhitney, NO_MUSIC
# 43 "data/maps/Route21_South/scripts.pory"
	release
# 44 "data/maps/Route21_South/scripts.pory"
	end
# 45 "data/maps/Route21_South/scripts.pory"

# 46 "data/maps/Route21_South/scripts.pory"
Route21_South_EventScript_PostWhitney::
# 47 "data/maps/Route21_South/scripts.pory"
	special HealPlayerParty
# 48 "data/maps/Route21_South/scripts.pory"
	msgbox Route21_South_Text_WhitneyPostBattle
# 49 "data/maps/Route21_South/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 50 "data/maps/Route21_South/scripts.pory"
	special QuestLog_CutRecording
# 51 "data/maps/Route21_South/scripts.pory"
	lock
# 52 "data/maps/Route21_South/scripts.pory"
	faceplayer
# 53 "data/maps/Route21_South/scripts.pory"
	setwildbattle SPECIES_KYOGRE, 70
# 54 "data/maps/Route21_South/scripts.pory"
	waitse
# 55 "data/maps/Route21_South/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 56 "data/maps/Route21_South/scripts.pory"
	message Text_Gyaoo
# 57 "data/maps/Route21_South/scripts.pory"
	waitmessage
# 58 "data/maps/Route21_South/scripts.pory"
	waitmoncry
# 59 "data/maps/Route21_South/scripts.pory"
	delay 10
# 60 "data/maps/Route21_South/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 61 "data/maps/Route21_South/scripts.pory"
	waitbuttonpress
# 62 "data/maps/Route21_South/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 63 "data/maps/Route21_South/scripts.pory"
	special StartLegendaryBattle
# 64 "data/maps/Route21_South/scripts.pory"
	waitstate
# 65 "data/maps/Route21_South/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 66 "data/maps/Route21_South/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 67 "data/maps/Route21_South/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route21_South_EventScript_DefeatedCelebi
# 68 "data/maps/Route21_South/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route21_South_EventScript_RanFromCelebi
# 69 "data/maps/Route21_South/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route21_South_EventScript_RanFromCelebi
# 70 "data/maps/Route21_South/scripts.pory"
	setflag FLAG_CAUGHT_KYOGRE
# 71 "data/maps/Route21_South/scripts.pory"
	clearflag FLAG_WATER_TRAINER
# 72 "data/maps/Route21_South/scripts.pory"
	msgbox Route21_South_Text_EndWhitney
# 73 "data/maps/Route21_South/scripts.pory"
	waitmessage
# 74 "data/maps/Route21_South/scripts.pory"
	release
# 75 "data/maps/Route21_South/scripts.pory"
	end
# 76 "data/maps/Route21_South/scripts.pory"

# 77 "data/maps/Route21_South/scripts.pory"
Route21_South_EventScript_DefeatedCelebi::
# 78 "data/maps/Route21_South/scripts.pory"
	setflag FLAG_CAUGHT_KYOGRE
# 79 "data/maps/Route21_South/scripts.pory"
	clearflag FLAG_WATER_TRAINER
# 80 "data/maps/Route21_South/scripts.pory"
	msgbox Route21_South_Text_EndWhitney
# 81 "data/maps/Route21_South/scripts.pory"
	waitmessage
# 82 "data/maps/Route21_South/scripts.pory"
	goto EventScript_RemoveStaticMon
# 83 "data/maps/Route21_South/scripts.pory"
	end
# 84 "data/maps/Route21_South/scripts.pory"

# 85 "data/maps/Route21_South/scripts.pory"
Route21_South_EventScript_RanFromCelebi::
# 86 "data/maps/Route21_South/scripts.pory"
	setvar VAR_0x8004, SPECIES_KYOGRE
# 87 "data/maps/Route21_South/scripts.pory"
	clearflag FLAG_WATER_TRAINER
# 88 "data/maps/Route21_South/scripts.pory"
	msgbox Route21_South_Text_EndWhitney
# 89 "data/maps/Route21_South/scripts.pory"
	waitmessage
# 90 "data/maps/Route21_South/scripts.pory"
	goto EventScript_MonFlewAway
# 91 "data/maps/Route21_South/scripts.pory"
	end
# 92 "data/maps/Route21_South/scripts.pory"

# 93 "data/maps/Route21_South/scripts.pory"
Route21_South_EventScript_NoWhitney::
# 94 "data/maps/Route21_South/scripts.pory"
	msgbox Route21_South_Text_NoWhitney
# 95 "data/maps/Route21_South/scripts.pory"
	release
# 96 "data/maps/Route21_South/scripts.pory"
	end
# 97 "data/maps/Route21_South/scripts.pory"

# 98 "data/maps/Route21_South/scripts.pory"
Route21_South_EventScript_End::
# 99 "data/maps/Route21_South/scripts.pory"
	clearflag FLAG_WATER_TRAINER
# 100 "data/maps/Route21_South/scripts.pory"
	msgbox Route21_South_Text_EndWhitney
# 101 "data/maps/Route21_South/scripts.pory"
	waitmessage
# 102 "data/maps/Route21_South/scripts.pory"
	fadescreen FADE_TO_BLACK
# 103 "data/maps/Route21_South/scripts.pory"
	removeobject LOCALID_MIRAGE
# 104 "data/maps/Route21_South/scripts.pory"
	fadescreen FADE_FROM_BLACK	
# 105 "data/maps/Route21_South/scripts.pory"
	release
# 106 "data/maps/Route21_South/scripts.pory"
	end
# 107 "data/maps/Route21_South/scripts.pory"

# 108 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_NeedOrb::
# 109 "data/maps/Route21_South/scripts.pory"
	.string "You need the ORBING to face me.$"
# 110 "data/maps/Route21_South/scripts.pory"

# 111 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_NoEligiblePkmn::
# 112 "data/maps/Route21_South/scripts.pory"
	.string "You have not meet the requirements.\p"
# 113 "data/maps/Route21_South/scripts.pory"
	.string "Come back when you do.$"
# 114 "data/maps/Route21_South/scripts.pory"

# 115 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_RegiceCheck::
# 116 "data/maps/Route21_South/scripts.pory"
	.string "Hello there {PLAYER}.\n"
# 117 "data/maps/Route21_South/scripts.pory"
	.string "I am the Frozen Mirage Trainer.\l"
# 118 "data/maps/Route21_South/scripts.pory"
	.string "Beat me and you shall face a\l"
# 119 "data/maps/Route21_South/scripts.pory"
	.string "special POKEMON.\l"
# 120 "data/maps/Route21_South/scripts.pory"
	.string "But first, I want to see a\l"
# 121 "data/maps/Route21_South/scripts.pory"
	.string "Three Headed Mascot,\l"
# 122 "data/maps/Route21_South/scripts.pory"
	.string "and knowledge on the Ice queen.$"
# 123 "data/maps/Route21_South/scripts.pory"

# 124 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_Whitney::
# 125 "data/maps/Route21_South/scripts.pory"
	.string "So, you wish to face me?$"
# 126 "data/maps/Route21_South/scripts.pory"

# 127 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_YesWhitney::
# 128 "data/maps/Route21_South/scripts.pory"
	.string "Very well! Prepare yourself!$"
# 129 "data/maps/Route21_South/scripts.pory"

# 130 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_PostWhitney::
# 131 "data/maps/Route21_South/scripts.pory"
	.string "So you are worthy...$"
# 132 "data/maps/Route21_South/scripts.pory"

# 133 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_WhitneyPostBattle::
# 134 "data/maps/Route21_South/scripts.pory"
	.string "Alright, you have bested me.\p"
# 135 "data/maps/Route21_South/scripts.pory"
	.string "Be prepared to face REGICE!$"
# 136 "data/maps/Route21_South/scripts.pory"

# 137 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_EndWhitney::
# 138 "data/maps/Route21_South/scripts.pory"
	.string "You had one chance,\n"
# 139 "data/maps/Route21_South/scripts.pory"
	.string "Goodbye.$"
# 140 "data/maps/Route21_South/scripts.pory"

# 141 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_NoWhitney::
# 142 "data/maps/Route21_South/scripts.pory"
	.string "Alright, take your time.$"
