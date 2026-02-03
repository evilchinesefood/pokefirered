# 1 "data/maps/Route21_South/scripts.pory"

# 2 "data/maps/Route21_South/scripts.pory"
Route21_South_MapScripts::
# 3 "data/maps/Route21_South/scripts.pory"
	.byte 0
# 4 "data/maps/Route21_South/scripts.pory"

# 5 "data/maps/Route21_South/scripts.pory"
Route21_South_EventScript_OrbingCheck::
# 6 "data/maps/Route21_South/scripts.pory"
	goto_if_set FLAG_CAUGHT_KYOGRE, Route21_South_EventScript_End
# 7 "data/maps/Route21_South/scripts.pory"
	goto_if_set FLAG_KYOGRE_CHECKED, Route21_South_EventScript_Orbing
# 8 "data/maps/Route21_South/scripts.pory"
	msgbox Route21_South_Text_RegiceCheck
# 9 "data/maps/Route21_South/scripts.pory"
	closemessage
# 10 "data/maps/Route21_South/scripts.pory"
	goto_if_unset FLAG_RE_DEFEATED, Route21_South_EventScript_NoEligiblePkmn
# 11 "data/maps/Route21_South/scripts.pory"
	setvar 0x8004, FAMECHECKER_BLAINE
# 12 "data/maps/Route21_South/scripts.pory"
	callnative CheckFilledFameCheckerFor0x8004
# 13 "data/maps/Route21_South/scripts.pory"
	compare VAR_RESULT, TRUE
# 14 "data/maps/Route21_South/scripts.pory"
	goto_if_eq Route21_South_EventScript_Flag
# 15 "data/maps/Route21_South/scripts.pory"
	release
# 16 "data/maps/Route21_South/scripts.pory"
	end
# 17 "data/maps/Route21_South/scripts.pory"

# 18 "data/maps/Route21_South/scripts.pory"
Route21_South_EventScript_NoEligiblePkmn::
# 19 "data/maps/Route21_South/scripts.pory"
	msgbox Route21_South_Text_NoEligiblePkmn
# 20 "data/maps/Route21_South/scripts.pory"
	release
# 21 "data/maps/Route21_South/scripts.pory"
	end
# 22 "data/maps/Route21_South/scripts.pory"

# 23 "data/maps/Route21_South/scripts.pory"
Route21_South_EventScript_Flag::
# 24 "data/maps/Route21_South/scripts.pory"
	setflag FLAG_KYOGRE_CHECKED
# 25 "data/maps/Route21_South/scripts.pory"
	goto Route21_South_EventScript_Orbing
# 26 "data/maps/Route21_South/scripts.pory"
	end
# 27 "data/maps/Route21_South/scripts.pory"

# 28 "data/maps/Route21_South/scripts.pory"
Route21_South_EventScript_Orbing::
# 29 "data/maps/Route21_South/scripts.pory"
	msgbox Route21_South_Text_Whitney, MSGBOX_YESNO
# 30 "data/maps/Route21_South/scripts.pory"
	closemessage
# 31 "data/maps/Route21_South/scripts.pory"
	delay 40
# 32 "data/maps/Route21_South/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route21_South_EventScript_NoWhitney
# 33 "data/maps/Route21_South/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_M, Route21_South_Text_YesWhitney, Route21_South_Text_PostWhitney, Route21_South_EventScript_PostWhitney, NO_MUSIC
# 34 "data/maps/Route21_South/scripts.pory"
	release
# 35 "data/maps/Route21_South/scripts.pory"
	end
# 36 "data/maps/Route21_South/scripts.pory"

# 37 "data/maps/Route21_South/scripts.pory"
Route21_South_EventScript_PostWhitney::
# 38 "data/maps/Route21_South/scripts.pory"
	special HealPlayerParty
# 39 "data/maps/Route21_South/scripts.pory"
	msgbox Route21_South_Text_WhitneyPostBattle
# 40 "data/maps/Route21_South/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 41 "data/maps/Route21_South/scripts.pory"
	special QuestLog_CutRecording
# 42 "data/maps/Route21_South/scripts.pory"
	lock
# 43 "data/maps/Route21_South/scripts.pory"
	faceplayer
# 44 "data/maps/Route21_South/scripts.pory"
	setwildbattle SPECIES_KYOGRE, 70
# 45 "data/maps/Route21_South/scripts.pory"
	waitse
# 46 "data/maps/Route21_South/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 47 "data/maps/Route21_South/scripts.pory"
	message Text_Gyaoo
# 48 "data/maps/Route21_South/scripts.pory"
	waitmessage
# 49 "data/maps/Route21_South/scripts.pory"
	waitmoncry
# 50 "data/maps/Route21_South/scripts.pory"
	delay 10
# 51 "data/maps/Route21_South/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 52 "data/maps/Route21_South/scripts.pory"
	waitbuttonpress
# 53 "data/maps/Route21_South/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 54 "data/maps/Route21_South/scripts.pory"
	special StartLegendaryBattle
# 55 "data/maps/Route21_South/scripts.pory"
	waitstate
# 56 "data/maps/Route21_South/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 57 "data/maps/Route21_South/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 58 "data/maps/Route21_South/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route21_South_EventScript_DefeatedCelebi
# 59 "data/maps/Route21_South/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route21_South_EventScript_RanFromCelebi
# 60 "data/maps/Route21_South/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route21_South_EventScript_RanFromCelebi
# 61 "data/maps/Route21_South/scripts.pory"
	setflag FLAG_CAUGHT_KYOGRE
# 62 "data/maps/Route21_South/scripts.pory"

# 63 "data/maps/Route21_South/scripts.pory"
	release
# 64 "data/maps/Route21_South/scripts.pory"
	end
# 65 "data/maps/Route21_South/scripts.pory"

# 66 "data/maps/Route21_South/scripts.pory"
Route21_South_EventScript_DefeatedCelebi::
# 67 "data/maps/Route21_South/scripts.pory"
	setflag FLAG_CAUGHT_KYOGRE
# 68 "data/maps/Route21_South/scripts.pory"
	goto EventScript_RemoveStaticMon
# 69 "data/maps/Route21_South/scripts.pory"
	end
# 70 "data/maps/Route21_South/scripts.pory"

# 71 "data/maps/Route21_South/scripts.pory"
Route21_South_EventScript_RanFromCelebi::
# 72 "data/maps/Route21_South/scripts.pory"
	setvar VAR_0x8004, SPECIES_KYOGRE
# 73 "data/maps/Route21_South/scripts.pory"
	goto EventScript_MonFlewAway
# 74 "data/maps/Route21_South/scripts.pory"
	end
# 75 "data/maps/Route21_South/scripts.pory"

# 76 "data/maps/Route21_South/scripts.pory"
Route21_South_EventScript_NoWhitney::
# 77 "data/maps/Route21_South/scripts.pory"
	msgbox Route21_South_Text_NoWhitney
# 78 "data/maps/Route21_South/scripts.pory"
	release
# 79 "data/maps/Route21_South/scripts.pory"
	end
# 80 "data/maps/Route21_South/scripts.pory"

# 81 "data/maps/Route21_South/scripts.pory"
Route21_South_EventScript_End::
# 82 "data/maps/Route21_South/scripts.pory"
	msgbox Route21_South_Text_EndWhitney
# 83 "data/maps/Route21_South/scripts.pory"
	release
# 84 "data/maps/Route21_South/scripts.pory"
	end
# 85 "data/maps/Route21_South/scripts.pory"

# 86 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_NoEligiblePkmn::
# 87 "data/maps/Route21_South/scripts.pory"
	.string "You have not meet the requirements.\p"
# 88 "data/maps/Route21_South/scripts.pory"
	.string "Come back when you do.$"
# 89 "data/maps/Route21_South/scripts.pory"

# 90 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_RegiceCheck::
# 91 "data/maps/Route21_South/scripts.pory"
	.string "Hello there {PLAYER}.\n"
# 92 "data/maps/Route21_South/scripts.pory"
	.string "I am the Frozen Mirage Trainer.\l"
# 93 "data/maps/Route21_South/scripts.pory"
	.string "Beat me and you shall face a\l"
# 94 "data/maps/Route21_South/scripts.pory"
	.string "special POKEMON.\l"
# 95 "data/maps/Route21_South/scripts.pory"
	.string "But first, I want to see a\l"
# 96 "data/maps/Route21_South/scripts.pory"
	.string "Three Headed Mascot,\l"
# 97 "data/maps/Route21_South/scripts.pory"
	.string "and knowledge on the Ice queen.$"
# 98 "data/maps/Route21_South/scripts.pory"

# 99 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_Whitney::
# 100 "data/maps/Route21_South/scripts.pory"
	.string "So, you wish to face me?$"
# 101 "data/maps/Route21_South/scripts.pory"

# 102 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_YesWhitney::
# 103 "data/maps/Route21_South/scripts.pory"
	.string "Very well! Prepare yourself!$"
# 104 "data/maps/Route21_South/scripts.pory"

# 105 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_PostWhitney::
# 106 "data/maps/Route21_South/scripts.pory"
	.string "So you are worthy...$"
# 107 "data/maps/Route21_South/scripts.pory"

# 108 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_WhitneyPostBattle::
# 109 "data/maps/Route21_South/scripts.pory"
	.string "Alright, you have bested me./p"
# 110 "data/maps/Route21_South/scripts.pory"
	.string "Be prepared to face REGICE!$"
# 111 "data/maps/Route21_South/scripts.pory"

# 112 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_EndWhitney::
# 113 "data/maps/Route21_South/scripts.pory"
	.string "You had one chance,\n"
# 114 "data/maps/Route21_South/scripts.pory"
	.string "Goodbye.$"
# 115 "data/maps/Route21_South/scripts.pory"

# 116 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_NoWhitney::
# 117 "data/maps/Route21_South/scripts.pory"
	.string "Alright, take your time.$"
