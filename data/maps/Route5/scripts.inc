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
	goto Route5_EventScript_NoEligiblePkmn
# 34 "data/maps/Route5/scripts.pory"
	release
# 35 "data/maps/Route5/scripts.pory"
	end
# 36 "data/maps/Route5/scripts.pory"

# 37 "data/maps/Route5/scripts.pory"
Route5_EventScript_NoEligiblePkmn::
# 38 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_NoEligiblePkmn
# 39 "data/maps/Route5/scripts.pory"
	release
# 40 "data/maps/Route5/scripts.pory"
	end
# 41 "data/maps/Route5/scripts.pory"

# 42 "data/maps/Route5/scripts.pory"
Route5_EventScript_Flag::
# 43 "data/maps/Route5/scripts.pory"
	setvar 0x8004, FAMECHECKER_DAISY
# 44 "data/maps/Route5/scripts.pory"
	callnative CheckFilledFameCheckerFor0x8004
# 45 "data/maps/Route5/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route5_EventScript_NoEligiblePkmn
# 46 "data/maps/Route5/scripts.pory"
	special LatiosRequirements
# 47 "data/maps/Route5/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route5_EventScript_NoEligiblePkmn
# 48 "data/maps/Route5/scripts.pory"
	setflag FLAG_LATIOS_CHECKED
# 49 "data/maps/Route5/scripts.pory"
	goto Route5_EventScript_Orbing
# 50 "data/maps/Route5/scripts.pory"
	end
# 51 "data/maps/Route5/scripts.pory"

# 52 "data/maps/Route5/scripts.pory"
Route5_EventScript_Orbing::
# 53 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_Whitney, MSGBOX_YESNO
# 54 "data/maps/Route5/scripts.pory"
	closemessage
# 55 "data/maps/Route5/scripts.pory"
	delay 40
# 56 "data/maps/Route5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route5_EventScript_NoWhitney
# 57 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_AQUA_LEADER, Route5_Text_YesWhitney, Route5_Text_PostWhitney, Route5_EventScript_PostWhitney, NO_MUSIC
# 58 "data/maps/Route5/scripts.pory"
	release
# 59 "data/maps/Route5/scripts.pory"
	end
# 60 "data/maps/Route5/scripts.pory"

# 61 "data/maps/Route5/scripts.pory"
Route5_EventScript_PostWhitney::
# 62 "data/maps/Route5/scripts.pory"
	special HealPlayerParty
# 63 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_WhitneyPostBattle
# 64 "data/maps/Route5/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 65 "data/maps/Route5/scripts.pory"
	special QuestLog_CutRecording
# 66 "data/maps/Route5/scripts.pory"
	lock
# 67 "data/maps/Route5/scripts.pory"
	faceplayer
# 68 "data/maps/Route5/scripts.pory"
	setwildbattle SPECIES_LATIOS, 70
# 69 "data/maps/Route5/scripts.pory"
	waitse
# 70 "data/maps/Route5/scripts.pory"
	playmoncry SPECIES_LATIOS, CRY_MODE_ENCOUNTER
# 71 "data/maps/Route5/scripts.pory"
	message Text_Gyaoo
# 72 "data/maps/Route5/scripts.pory"
	waitmessage
# 73 "data/maps/Route5/scripts.pory"
	waitmoncry
# 74 "data/maps/Route5/scripts.pory"
	delay 10
# 75 "data/maps/Route5/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 76 "data/maps/Route5/scripts.pory"
	waitbuttonpress
# 77 "data/maps/Route5/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 78 "data/maps/Route5/scripts.pory"
	special StartLegendaryBattle
# 79 "data/maps/Route5/scripts.pory"
	waitstate
# 80 "data/maps/Route5/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 81 "data/maps/Route5/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 82 "data/maps/Route5/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route5_EventScript_DefeatedCelebi
# 83 "data/maps/Route5/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route5_EventScript_RanFromCelebi
# 84 "data/maps/Route5/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route5_EventScript_RanFromCelebi
# 85 "data/maps/Route5/scripts.pory"
	setflag FLAG_CAUGHT_LATIOS
# 86 "data/maps/Route5/scripts.pory"
	clearflag FLAG_BRO_TRAINER
# 87 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_EndWhitney
# 88 "data/maps/Route5/scripts.pory"
	waitmessage
# 89 "data/maps/Route5/scripts.pory"
	release
# 90 "data/maps/Route5/scripts.pory"
	end
# 91 "data/maps/Route5/scripts.pory"

# 92 "data/maps/Route5/scripts.pory"
Route5_EventScript_PostWhitneyLatias::
# 93 "data/maps/Route5/scripts.pory"
	special HealPlayerParty
# 94 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_WhitneyPostBattle
# 95 "data/maps/Route5/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 96 "data/maps/Route5/scripts.pory"
	special QuestLog_CutRecording
# 97 "data/maps/Route5/scripts.pory"
	lock
# 98 "data/maps/Route5/scripts.pory"
	faceplayer
# 99 "data/maps/Route5/scripts.pory"
	setwildbattle SPECIES_LATIAS, 70
# 100 "data/maps/Route5/scripts.pory"
	waitse
# 101 "data/maps/Route5/scripts.pory"
	playmoncry SPECIES_LATIAS, CRY_MODE_ENCOUNTER
# 102 "data/maps/Route5/scripts.pory"
	message Text_Gyaoo
# 103 "data/maps/Route5/scripts.pory"
	waitmessage
# 104 "data/maps/Route5/scripts.pory"
	waitmoncry
# 105 "data/maps/Route5/scripts.pory"
	delay 10
# 106 "data/maps/Route5/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 107 "data/maps/Route5/scripts.pory"
	waitbuttonpress
# 108 "data/maps/Route5/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 109 "data/maps/Route5/scripts.pory"
	special StartLegendaryBattle
# 110 "data/maps/Route5/scripts.pory"
	waitstate
# 111 "data/maps/Route5/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 112 "data/maps/Route5/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 113 "data/maps/Route5/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route5_EventScript_DefeatedLatias
# 114 "data/maps/Route5/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route5_EventScript_RanFromLatias
# 115 "data/maps/Route5/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route5_EventScript_RanFromLatias
# 116 "data/maps/Route5/scripts.pory"
	setflag FLAG_CAUGHT_LATIAS
# 117 "data/maps/Route5/scripts.pory"
	clearflag FLAG_SIS_TRAINER
# 118 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_EndWhitney
# 119 "data/maps/Route5/scripts.pory"
	waitmessage
# 120 "data/maps/Route5/scripts.pory"
	release
# 121 "data/maps/Route5/scripts.pory"
	end
# 122 "data/maps/Route5/scripts.pory"

# 123 "data/maps/Route5/scripts.pory"
Route5_EventScript_DefeatedCelebi::
# 124 "data/maps/Route5/scripts.pory"
	setflag FLAG_CAUGHT_LATIOS
# 125 "data/maps/Route5/scripts.pory"
	clearflag FLAG_BRO_TRAINER
# 126 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_EndWhitney
# 127 "data/maps/Route5/scripts.pory"
	waitmessage
# 128 "data/maps/Route5/scripts.pory"
	goto EventScript_RemoveStaticMon
# 129 "data/maps/Route5/scripts.pory"
	end
# 130 "data/maps/Route5/scripts.pory"

# 131 "data/maps/Route5/scripts.pory"
Route5_EventScript_RanFromCelebi::
# 132 "data/maps/Route5/scripts.pory"
	setvar VAR_0x8004, SPECIES_LATIOS
# 133 "data/maps/Route5/scripts.pory"
	clearflag FLAG_BRO_TRAINER
# 134 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_EndWhitney
# 135 "data/maps/Route5/scripts.pory"
	waitmessage
# 136 "data/maps/Route5/scripts.pory"
	goto EventScript_MonFlewAway
# 137 "data/maps/Route5/scripts.pory"
	end
# 138 "data/maps/Route5/scripts.pory"

# 139 "data/maps/Route5/scripts.pory"
Route5_EventScript_DefeatedLatias::
# 140 "data/maps/Route5/scripts.pory"
	setflag FLAG_CAUGHT_LATIAS
# 141 "data/maps/Route5/scripts.pory"
	clearflag FLAG_SIS_TRAINER
# 142 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_EndWhitney
# 143 "data/maps/Route5/scripts.pory"
	waitmessage
# 144 "data/maps/Route5/scripts.pory"
	goto EventScript_RemoveStaticMon
# 145 "data/maps/Route5/scripts.pory"
	end
# 146 "data/maps/Route5/scripts.pory"

# 147 "data/maps/Route5/scripts.pory"
Route5_EventScript_RanFromLatias::
# 148 "data/maps/Route5/scripts.pory"
	setvar VAR_0x8004, SPECIES_LATIAS
# 149 "data/maps/Route5/scripts.pory"
	clearflag FLAG_SIS_TRAINER
# 150 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_EndWhitney
# 151 "data/maps/Route5/scripts.pory"
	waitmessage
# 152 "data/maps/Route5/scripts.pory"
	goto EventScript_MonFlewAway
# 153 "data/maps/Route5/scripts.pory"
	end
# 154 "data/maps/Route5/scripts.pory"

# 155 "data/maps/Route5/scripts.pory"
Route5_EventScript_NoWhitney::
# 156 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_NoWhitney
# 157 "data/maps/Route5/scripts.pory"
	release
# 158 "data/maps/Route5/scripts.pory"
	end
# 159 "data/maps/Route5/scripts.pory"

# 160 "data/maps/Route5/scripts.pory"
Route5_EventScript_End::
# 161 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_EndWhitney
# 162 "data/maps/Route5/scripts.pory"
	release
# 163 "data/maps/Route5/scripts.pory"
	end
# 164 "data/maps/Route5/scripts.pory"

# 165 "data/maps/Route5/scripts.pory"
Route5_Text_NoEligiblePkmn::
# 166 "data/maps/Route5/scripts.pory"
	.string "You have not meet the requirements.\p"
# 167 "data/maps/Route5/scripts.pory"
	.string "Come back when you do.$"
# 168 "data/maps/Route5/scripts.pory"

# 169 "data/maps/Route5/scripts.pory"
Route5_Text_RegiceCheck::
# 170 "data/maps/Route5/scripts.pory"
	.string "Hello there {PLAYER}.\p"
# 171 "data/maps/Route5/scripts.pory"
	.string "We are the JET TWINS.\p"
# 172 "data/maps/Route5/scripts.pory"
	.string "Beat us and you shall face two\n"
# 173 "data/maps/Route5/scripts.pory"
	.string "special POKEMON.\l"
# 174 "data/maps/Route5/scripts.pory"
	.string "But first, I want to see a\n"
# 175 "data/maps/Route5/scripts.pory"
	.string "Knowledge on the DAISY flower,\l"
# 176 "data/maps/Route5/scripts.pory"
	.string "and the OAK tree.\p"
# 177 "data/maps/Route5/scripts.pory"
	.string "As well as the REGIS\n"
# 178 "data/maps/Route5/scripts.pory"
	.string "and the ALIEN.$"
# 179 "data/maps/Route5/scripts.pory"

# 180 "data/maps/Route5/scripts.pory"
Route5_Text_Whitney::
# 181 "data/maps/Route5/scripts.pory"
	.string "So, you wish to face us?$"
# 182 "data/maps/Route5/scripts.pory"

# 183 "data/maps/Route5/scripts.pory"
Route5_Text_YesWhitney::
# 184 "data/maps/Route5/scripts.pory"
	.string "Very well! Prepare yourself!$"
# 185 "data/maps/Route5/scripts.pory"

# 186 "data/maps/Route5/scripts.pory"
Route5_Text_PostWhitney::
# 187 "data/maps/Route5/scripts.pory"
	.string "So you are worthy...$"
# 188 "data/maps/Route5/scripts.pory"

# 189 "data/maps/Route5/scripts.pory"
Route5_Text_WhitneyPostBattle::
# 190 "data/maps/Route5/scripts.pory"
	.string "Alright, you have bested me.\p"
# 191 "data/maps/Route5/scripts.pory"
	.string "Be prepared to face IT!$"
# 192 "data/maps/Route5/scripts.pory"

# 193 "data/maps/Route5/scripts.pory"
Route5_Text_EndWhitney::
# 194 "data/maps/Route5/scripts.pory"
	.string "You had one chance,\n"
# 195 "data/maps/Route5/scripts.pory"
	.string "Goodbye.$"
# 196 "data/maps/Route5/scripts.pory"

# 197 "data/maps/Route5/scripts.pory"
Route5_Text_NoWhitney::
# 198 "data/maps/Route5/scripts.pory"
	.string "Alright, take your time.$"
