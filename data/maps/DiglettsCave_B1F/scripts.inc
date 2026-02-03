# 1 "data/maps/DiglettsCave_B1F/scripts.pory"

# 2 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_MapScripts::
# 3 "data/maps/DiglettsCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DiglettsCave_B1F_OnTransition
# 4 "data/maps/DiglettsCave_B1F/scripts.pory"
	.byte 0
# 5 "data/maps/DiglettsCave_B1F/scripts.pory"

# 6 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_OnTransition::
# 7 "data/maps/DiglettsCave_B1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_DIGLETTS_CAVE_B1F
# 8 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 9 "data/maps/DiglettsCave_B1F/scripts.pory"

# 10 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_Freddy::
# 11 "data/maps/DiglettsCave_B1F/scripts.pory"
	lock
# 12 "data/maps/DiglettsCave_B1F/scripts.pory"
	faceplayer
# 13 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_FREDDY, DiglettsCave_B1F_EventScript_RematchFreddy
# 14 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_Freddy, MSGBOX_YESNO
# 15 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, DiglettsCave_B1F_EventScript_NoFreddy
# 16 "data/maps/DiglettsCave_B1F/scripts.pory"
	trainerbattle_single TRAINER_FREDDY, DiglettsCave_B1F_Text_YesFreddy, DiglettsCave_B1F_Text_FreddyDefeat, DiglettsCave_B1F_EventScript_PostFreddy, NO_MUSIC
# 17 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 18 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 19 "data/maps/DiglettsCave_B1F/scripts.pory"

# 20 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_PostFreddy::
# 21 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_FreddyPostBattle
# 22 "data/maps/DiglettsCave_B1F/scripts.pory"
	setflag FLAG_DEFEATED_FREDDY
# 23 "data/maps/DiglettsCave_B1F/scripts.pory"
	cleartrainerflag TRAINER_FREDDY
# 24 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 25 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 26 "data/maps/DiglettsCave_B1F/scripts.pory"

# 27 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_NoFreddy::
# 28 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_NoFreddy
# 29 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 30 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 31 "data/maps/DiglettsCave_B1F/scripts.pory"

# 32 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_RematchFreddy::
# 33 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_RematchFreddy, MSGBOX_YESNO
# 34 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, DiglettsCave_B1F_EventScript_NoFreddy
# 35 "data/maps/DiglettsCave_B1F/scripts.pory"
	trainerbattle_single TRAINER_FREDDY, DiglettsCave_B1F_Text_YesFreddy, DiglettsCave_B1F_Text_RematchFreddyDefeat, DiglettsCave_B1F_EventScript_PostRematchFreddy, NO_MUSIC
# 36 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 37 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 38 "data/maps/DiglettsCave_B1F/scripts.pory"

# 39 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_PostRematchFreddy::
# 40 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_PostRematchFreddy
# 41 "data/maps/DiglettsCave_B1F/scripts.pory"
	cleartrainerflag TRAINER_FREDDY
# 42 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 43 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 44 "data/maps/DiglettsCave_B1F/scripts.pory"

# 45 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_OrbingCheck::
# 46 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_set FLAG_CAUGHT_GROUDON, DiglettsCave_B1F_EventScript_End
# 47 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_set FLAG_GROUNDON_CHECKED, DiglettsCave_B1F_EventScript_Orbing
# 48 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_RegiceCheck
# 49 "data/maps/DiglettsCave_B1F/scripts.pory"
	closemessage
# 50 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_unset FLAG_RE_DEFEATED, DiglettsCave_B1F_EventScript_NoEligiblePkmn
# 51 "data/maps/DiglettsCave_B1F/scripts.pory"
	setvar 0x8004, FAMECHECKER_BLAINE
# 52 "data/maps/DiglettsCave_B1F/scripts.pory"
	callnative CheckFilledFameCheckerFor0x8004
# 53 "data/maps/DiglettsCave_B1F/scripts.pory"
	compare VAR_RESULT, TRUE
# 54 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_eq DiglettsCave_B1F_EventScript_Flag
# 55 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 56 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 57 "data/maps/DiglettsCave_B1F/scripts.pory"

# 58 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_NoEligiblePkmn::
# 59 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_NoEligiblePkmn
# 60 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 61 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 62 "data/maps/DiglettsCave_B1F/scripts.pory"

# 63 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_Flag::
# 64 "data/maps/DiglettsCave_B1F/scripts.pory"
	setflag FLAG_GROUNDON_CHECKED
# 65 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto DiglettsCave_B1F_EventScript_Orbing
# 66 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 67 "data/maps/DiglettsCave_B1F/scripts.pory"

# 68 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_Orbing::
# 69 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_Whitney, MSGBOX_YESNO
# 70 "data/maps/DiglettsCave_B1F/scripts.pory"
	closemessage
# 71 "data/maps/DiglettsCave_B1F/scripts.pory"
	delay 40
# 72 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, DiglettsCave_B1F_EventScript_NoWhitney
# 73 "data/maps/DiglettsCave_B1F/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_F, DiglettsCave_B1F_Text_YesWhitney, DiglettsCave_B1F_Text_PostWhitney, DiglettsCave_B1F_EventScript_PostWhitney, NO_MUSIC
# 74 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 75 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 76 "data/maps/DiglettsCave_B1F/scripts.pory"

# 77 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_PostWhitney::
# 78 "data/maps/DiglettsCave_B1F/scripts.pory"
	special HealPlayerParty
# 79 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_WhitneyPostBattle
# 80 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 81 "data/maps/DiglettsCave_B1F/scripts.pory"
	special QuestLog_CutRecording
# 82 "data/maps/DiglettsCave_B1F/scripts.pory"
	lock
# 83 "data/maps/DiglettsCave_B1F/scripts.pory"
	faceplayer
# 84 "data/maps/DiglettsCave_B1F/scripts.pory"
	setwildbattle SPECIES_GROUDON, 70
# 85 "data/maps/DiglettsCave_B1F/scripts.pory"
	waitse
# 86 "data/maps/DiglettsCave_B1F/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 87 "data/maps/DiglettsCave_B1F/scripts.pory"
	message Text_Gyaoo
# 88 "data/maps/DiglettsCave_B1F/scripts.pory"
	waitmessage
# 89 "data/maps/DiglettsCave_B1F/scripts.pory"
	waitmoncry
# 90 "data/maps/DiglettsCave_B1F/scripts.pory"
	delay 10
# 91 "data/maps/DiglettsCave_B1F/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 92 "data/maps/DiglettsCave_B1F/scripts.pory"
	waitbuttonpress
# 93 "data/maps/DiglettsCave_B1F/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 94 "data/maps/DiglettsCave_B1F/scripts.pory"
	special StartLegendaryBattle
# 95 "data/maps/DiglettsCave_B1F/scripts.pory"
	waitstate
# 96 "data/maps/DiglettsCave_B1F/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 97 "data/maps/DiglettsCave_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 98 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, DiglettsCave_B1F_EventScript_DefeatedCelebi
# 99 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, DiglettsCave_B1F_EventScript_RanFromCelebi
# 100 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, DiglettsCave_B1F_EventScript_RanFromCelebi
# 101 "data/maps/DiglettsCave_B1F/scripts.pory"
	setflag FLAG_CAUGHT_GROUDON
# 102 "data/maps/DiglettsCave_B1F/scripts.pory"

# 103 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 104 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 105 "data/maps/DiglettsCave_B1F/scripts.pory"

# 106 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_DefeatedCelebi::
# 107 "data/maps/DiglettsCave_B1F/scripts.pory"
	setflag FLAG_CAUGHT_GROUDON
# 108 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto EventScript_RemoveStaticMon
# 109 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 110 "data/maps/DiglettsCave_B1F/scripts.pory"

# 111 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_RanFromCelebi::
# 112 "data/maps/DiglettsCave_B1F/scripts.pory"
	setvar VAR_0x8004, SPECIES_GROUDON
# 113 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto EventScript_MonFlewAway
# 114 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 115 "data/maps/DiglettsCave_B1F/scripts.pory"

# 116 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_NoWhitney::
# 117 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_NoWhitney
# 118 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 119 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 120 "data/maps/DiglettsCave_B1F/scripts.pory"

# 121 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_End::
# 122 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_EndWhitney
# 123 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 124 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 125 "data/maps/DiglettsCave_B1F/scripts.pory"

# 126 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_Text_NoEligiblePkmn::
# 127 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "You have not meet the requirements.\p"
# 128 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "Come back when you do.$"
# 129 "data/maps/DiglettsCave_B1F/scripts.pory"

# 130 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_Text_RegiceCheck::
# 131 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "Hello there {PLAYER}.\n"
# 132 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "I am the Frozen Mirage Trainer.\l"
# 133 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "Beat me and you shall face a\l"
# 134 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "special POKEMON.\l"
# 135 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "But first, I want to see a\l"
# 136 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "Three Headed Mascot,\l"
# 137 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "and knowledge on the Ice queen.$"
# 138 "data/maps/DiglettsCave_B1F/scripts.pory"

# 139 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_Text_Whitney::
# 140 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "So, you wish to face me?$"
# 141 "data/maps/DiglettsCave_B1F/scripts.pory"

# 142 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_Text_YesWhitney::
# 143 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "Very well! Prepare yourself!$"
# 144 "data/maps/DiglettsCave_B1F/scripts.pory"

# 145 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_Text_PostWhitney::
# 146 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "So you are worthy...$"
# 147 "data/maps/DiglettsCave_B1F/scripts.pory"

# 148 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_Text_WhitneyPostBattle::
# 149 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "Alright, you have bested me./p"
# 150 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "Be prepared to face REGICE!$"
# 151 "data/maps/DiglettsCave_B1F/scripts.pory"

# 152 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_Text_EndWhitney::
# 153 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "You had one chance,\n"
# 154 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "Goodbye.$"
# 155 "data/maps/DiglettsCave_B1F/scripts.pory"

# 156 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_Text_NoWhitney::
# 157 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "Alright, take your time.$"
