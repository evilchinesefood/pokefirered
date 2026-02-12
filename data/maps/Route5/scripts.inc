# 1 "data/maps/Route5/scripts.pory"

# 2 "data/maps/Route5/scripts.pory"
.set LOCALID_BRO, 2
# 3 "data/maps/Route5/scripts.pory"
.set LOCALID_SIS, 3
# 4 "data/maps/Route5/scripts.pory"
Route5_MapScripts::
# 5 "data/maps/Route5/scripts.pory"
	.byte 0
# 6 "data/maps/Route5/scripts.pory"

# 7 "data/maps/Route5/scripts.pory"
Route5_EventScript_UndergroundPathSign::
# 8 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_UndergroundPathSign, MSGBOX_SIGN
# 9 "data/maps/Route5/scripts.pory"
	end
# 10 "data/maps/Route5/scripts.pory"

# 11 "data/maps/Route5/scripts.pory"
Route5_EventScript_Bro::
# 12 "data/maps/Route5/scripts.pory"
	lock 
# 13 "data/maps/Route5/scripts.pory"
	faceplayer
# 14 "data/maps/Route5/scripts.pory"
	goto_if_set FLAG_CAUGHT_LATIOS, Route5_EventScript_End
# 15 "data/maps/Route5/scripts.pory"
	goto_if_set FLAG_LATIOS_CHECKED, Route5_EventScript_Orbing
# 16 "data/maps/Route5/scripts.pory"
	goto Route5_EventScript_OrbingCheck
# 17 "data/maps/Route5/scripts.pory"

# 18 "data/maps/Route5/scripts.pory"
Route5_EventScript_Sis::
# 19 "data/maps/Route5/scripts.pory"
	lock 
# 20 "data/maps/Route5/scripts.pory"
	faceplayer
# 21 "data/maps/Route5/scripts.pory"
	goto_if_set FLAG_CAUGHT_LATIAS, Route5_EventScript_End
# 22 "data/maps/Route5/scripts.pory"
	goto_if_set FLAG_LATIOS_CHECKED, Route5_EventScript_Orbing
# 23 "data/maps/Route5/scripts.pory"
	goto Route5_EventScript_OrbingCheck
# 24 "data/maps/Route5/scripts.pory"

# 25 "data/maps/Route5/scripts.pory"
Route5_EventScript_OrbingCheck::
# 26 "data/maps/Route5/scripts.pory"
	goto_if_set FLAG_LATIOS_CHECKED, Route5_EventScript_Orbing
# 27 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_RegiceCheck
# 28 "data/maps/Route5/scripts.pory"
	closemessage
# 29 "data/maps/Route5/scripts.pory"
	setvar VAR_0x8005, 1
# 30 "data/maps/Route5/scripts.pory"
	setvar 0x8004, FAMECHECKER_OAK
# 31 "data/maps/Route5/scripts.pory"
	callnative CheckFilledFameCheckerFor0x8004
# 32 "data/maps/Route5/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route5_EventScript_Flag
# 33 "data/maps/Route5/scripts.pory"
	release
# 34 "data/maps/Route5/scripts.pory"
	end
# 35 "data/maps/Route5/scripts.pory"

# 36 "data/maps/Route5/scripts.pory"
Route5_EventScript_NoEligiblePkmn::
# 37 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_NoEligiblePkmn
# 38 "data/maps/Route5/scripts.pory"
	release
# 39 "data/maps/Route5/scripts.pory"
	end
# 40 "data/maps/Route5/scripts.pory"

# 41 "data/maps/Route5/scripts.pory"
Route5_EventScript_Flag::
# 42 "data/maps/Route5/scripts.pory"
	setvar 0x8004, FAMECHECKER_DAISY
# 43 "data/maps/Route5/scripts.pory"
	callnative CheckFilledFameCheckerFor0x8004
# 44 "data/maps/Route5/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route5_EventScript_NoEligiblePkmn
# 45 "data/maps/Route5/scripts.pory"
	setflag FLAG_LATIOS_CHECKED
# 46 "data/maps/Route5/scripts.pory"
	goto Route5_EventScript_Orbing
# 47 "data/maps/Route5/scripts.pory"
	end
# 48 "data/maps/Route5/scripts.pory"

# 49 "data/maps/Route5/scripts.pory"
Route5_EventScript_Orbing::
# 50 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_Whitney, MSGBOX_YESNO
# 51 "data/maps/Route5/scripts.pory"
	closemessage
# 52 "data/maps/Route5/scripts.pory"
	delay 40
# 53 "data/maps/Route5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route5_EventScript_NoWhitney
# 54 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_AQUA_LEADER, Route5_Text_YesWhitney, Route5_Text_PostWhitney, Route5_EventScript_PostWhitney, NO_MUSIC
# 55 "data/maps/Route5/scripts.pory"
	release
# 56 "data/maps/Route5/scripts.pory"
	end
# 57 "data/maps/Route5/scripts.pory"

# 58 "data/maps/Route5/scripts.pory"
Route5_EventScript_PostWhitney::
# 59 "data/maps/Route5/scripts.pory"
	special HealPlayerParty
# 60 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_WhitneyPostBattle
# 61 "data/maps/Route5/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 62 "data/maps/Route5/scripts.pory"
	special QuestLog_CutRecording
# 63 "data/maps/Route5/scripts.pory"
	lock
# 64 "data/maps/Route5/scripts.pory"
	faceplayer
# 65 "data/maps/Route5/scripts.pory"
	setwildbattle SPECIES_LATIOS, 70
# 66 "data/maps/Route5/scripts.pory"
	waitse
# 67 "data/maps/Route5/scripts.pory"
	playmoncry SPECIES_LATIOS, CRY_MODE_ENCOUNTER
# 68 "data/maps/Route5/scripts.pory"
	message Text_Gyaoo
# 69 "data/maps/Route5/scripts.pory"
	waitmessage
# 70 "data/maps/Route5/scripts.pory"
	waitmoncry
# 71 "data/maps/Route5/scripts.pory"
	delay 10
# 72 "data/maps/Route5/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 73 "data/maps/Route5/scripts.pory"
	waitbuttonpress
# 74 "data/maps/Route5/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 75 "data/maps/Route5/scripts.pory"
	special StartLegendaryBattle
# 76 "data/maps/Route5/scripts.pory"
	waitstate
# 77 "data/maps/Route5/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 78 "data/maps/Route5/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 79 "data/maps/Route5/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route5_EventScript_DefeatedCelebi
# 80 "data/maps/Route5/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route5_EventScript_RanFromCelebi
# 81 "data/maps/Route5/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route5_EventScript_RanFromCelebi
# 82 "data/maps/Route5/scripts.pory"
	setflag FLAG_CAUGHT_LATIOS
# 83 "data/maps/Route5/scripts.pory"
	clearflag FLAG_BRO_TRAINER
# 84 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_EndWhitney
# 85 "data/maps/Route5/scripts.pory"
	waitmessage
# 86 "data/maps/Route5/scripts.pory"
	release
# 87 "data/maps/Route5/scripts.pory"
	end
# 88 "data/maps/Route5/scripts.pory"

# 89 "data/maps/Route5/scripts.pory"
Route5_EventScript_PostWhitneyLatias::
# 90 "data/maps/Route5/scripts.pory"
	special HealPlayerParty
# 91 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_WhitneyPostBattle
# 92 "data/maps/Route5/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 93 "data/maps/Route5/scripts.pory"
	special QuestLog_CutRecording
# 94 "data/maps/Route5/scripts.pory"
	lock
# 95 "data/maps/Route5/scripts.pory"
	faceplayer
# 96 "data/maps/Route5/scripts.pory"
	setwildbattle SPECIES_LATIAS, 70
# 97 "data/maps/Route5/scripts.pory"
	waitse
# 98 "data/maps/Route5/scripts.pory"
	playmoncry SPECIES_LATIAS, CRY_MODE_ENCOUNTER
# 99 "data/maps/Route5/scripts.pory"
	message Text_Gyaoo
# 100 "data/maps/Route5/scripts.pory"
	waitmessage
# 101 "data/maps/Route5/scripts.pory"
	waitmoncry
# 102 "data/maps/Route5/scripts.pory"
	delay 10
# 103 "data/maps/Route5/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 104 "data/maps/Route5/scripts.pory"
	waitbuttonpress
# 105 "data/maps/Route5/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 106 "data/maps/Route5/scripts.pory"
	special StartLegendaryBattle
# 107 "data/maps/Route5/scripts.pory"
	waitstate
# 108 "data/maps/Route5/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 109 "data/maps/Route5/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 110 "data/maps/Route5/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route5_EventScript_DefeatedLatias
# 111 "data/maps/Route5/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route5_EventScript_RanFromLatias
# 112 "data/maps/Route5/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route5_EventScript_RanFromLatias
# 113 "data/maps/Route5/scripts.pory"
	setflag FLAG_CAUGHT_LATIAS
# 114 "data/maps/Route5/scripts.pory"
	clearflag FLAG_SIS_TRAINER
# 115 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_EndWhitney
# 116 "data/maps/Route5/scripts.pory"
	waitmessage
# 117 "data/maps/Route5/scripts.pory"
	release
# 118 "data/maps/Route5/scripts.pory"
	end
# 119 "data/maps/Route5/scripts.pory"

# 120 "data/maps/Route5/scripts.pory"
Route5_EventScript_DefeatedCelebi::
# 121 "data/maps/Route5/scripts.pory"
	setflag FLAG_CAUGHT_LATIOS
# 122 "data/maps/Route5/scripts.pory"
	clearflag FLAG_BRO_TRAINER
# 123 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_EndWhitney
# 124 "data/maps/Route5/scripts.pory"
	waitmessage
# 125 "data/maps/Route5/scripts.pory"
	goto EventScript_RemoveStaticMon
# 126 "data/maps/Route5/scripts.pory"
	end
# 127 "data/maps/Route5/scripts.pory"

# 128 "data/maps/Route5/scripts.pory"
Route5_EventScript_RanFromCelebi::
# 129 "data/maps/Route5/scripts.pory"
	setvar VAR_0x8004, SPECIES_LATIOS
# 130 "data/maps/Route5/scripts.pory"
	clearflag FLAG_BRO_TRAINER
# 131 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_EndWhitney
# 132 "data/maps/Route5/scripts.pory"
	waitmessage
# 133 "data/maps/Route5/scripts.pory"
	goto EventScript_MonFlewAway
# 134 "data/maps/Route5/scripts.pory"
	end
# 135 "data/maps/Route5/scripts.pory"

# 136 "data/maps/Route5/scripts.pory"
Route5_EventScript_DefeatedLatias::
# 137 "data/maps/Route5/scripts.pory"
	setflag FLAG_CAUGHT_LATIAS
# 138 "data/maps/Route5/scripts.pory"
	clearflag FLAG_SIS_TRAINER
# 139 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_EndWhitney
# 140 "data/maps/Route5/scripts.pory"
	waitmessage
# 141 "data/maps/Route5/scripts.pory"
	goto EventScript_RemoveStaticMon
# 142 "data/maps/Route5/scripts.pory"
	end
# 143 "data/maps/Route5/scripts.pory"

# 144 "data/maps/Route5/scripts.pory"
Route5_EventScript_RanFromLatias::
# 145 "data/maps/Route5/scripts.pory"
	setvar VAR_0x8004, SPECIES_LATIAS
# 146 "data/maps/Route5/scripts.pory"
	clearflag FLAG_SIS_TRAINER
# 147 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_EndWhitney
# 148 "data/maps/Route5/scripts.pory"
	waitmessage
# 149 "data/maps/Route5/scripts.pory"
	goto EventScript_MonFlewAway
# 150 "data/maps/Route5/scripts.pory"
	end
# 151 "data/maps/Route5/scripts.pory"

# 152 "data/maps/Route5/scripts.pory"
Route5_EventScript_NoWhitney::
# 153 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_NoWhitney
# 154 "data/maps/Route5/scripts.pory"
	release
# 155 "data/maps/Route5/scripts.pory"
	end
# 156 "data/maps/Route5/scripts.pory"

# 157 "data/maps/Route5/scripts.pory"
Route5_EventScript_End::
# 158 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_EndWhitney
# 159 "data/maps/Route5/scripts.pory"
	release
# 160 "data/maps/Route5/scripts.pory"
	end
# 161 "data/maps/Route5/scripts.pory"

# 162 "data/maps/Route5/scripts.pory"
Route5_Text_NoEligiblePkmn::
# 163 "data/maps/Route5/scripts.pory"
	.string "You have not meet the requirements.\p"
# 164 "data/maps/Route5/scripts.pory"
	.string "Come back when you do.$"
# 165 "data/maps/Route5/scripts.pory"

# 166 "data/maps/Route5/scripts.pory"
Route5_Text_RegiceCheck::
# 167 "data/maps/Route5/scripts.pory"
	.string "Hello there {PLAYER}.\n"
# 168 "data/maps/Route5/scripts.pory"
	.string "I am the Frozen Mirage Trainer.\l"
# 169 "data/maps/Route5/scripts.pory"
	.string "Beat me and you shall face a\l"
# 170 "data/maps/Route5/scripts.pory"
	.string "special POKEMON.\l"
# 171 "data/maps/Route5/scripts.pory"
	.string "But first, I want to see a\l"
# 172 "data/maps/Route5/scripts.pory"
	.string "Three Headed Mascot,\l"
# 173 "data/maps/Route5/scripts.pory"
	.string "and knowledge on the Ice queen.$"
# 174 "data/maps/Route5/scripts.pory"

# 175 "data/maps/Route5/scripts.pory"
Route5_Text_Whitney::
# 176 "data/maps/Route5/scripts.pory"
	.string "So, you wish to face me?$"
# 177 "data/maps/Route5/scripts.pory"

# 178 "data/maps/Route5/scripts.pory"
Route5_Text_YesWhitney::
# 179 "data/maps/Route5/scripts.pory"
	.string "Very well! Prepare yourself!$"
# 180 "data/maps/Route5/scripts.pory"

# 181 "data/maps/Route5/scripts.pory"
Route5_Text_PostWhitney::
# 182 "data/maps/Route5/scripts.pory"
	.string "So you are worthy...$"
# 183 "data/maps/Route5/scripts.pory"

# 184 "data/maps/Route5/scripts.pory"
Route5_Text_WhitneyPostBattle::
# 185 "data/maps/Route5/scripts.pory"
	.string "Alright, you have bested me.\p"
# 186 "data/maps/Route5/scripts.pory"
	.string "Be prepared to face LATIOS!$"
# 187 "data/maps/Route5/scripts.pory"

# 188 "data/maps/Route5/scripts.pory"
Route5_Text_EndWhitney::
# 189 "data/maps/Route5/scripts.pory"
	.string "You had one chance,\n"
# 190 "data/maps/Route5/scripts.pory"
	.string "Goodbye.$"
# 191 "data/maps/Route5/scripts.pory"

# 192 "data/maps/Route5/scripts.pory"
Route5_Text_NoWhitney::
# 193 "data/maps/Route5/scripts.pory"
	.string "Alright, take your time.$"
