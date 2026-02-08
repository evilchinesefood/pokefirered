# 1 "data/maps/RockTunnel_B1F/scripts.pory"

# 2 "data/maps/RockTunnel_B1F/scripts.pory"
RockTunnel_B1F_MapScripts::
# 3 "data/maps/RockTunnel_B1F/scripts.pory"
	.byte 0
# 4 "data/maps/RockTunnel_B1F/scripts.pory"

# 5 "data/maps/RockTunnel_B1F/scripts.pory"
RockTunnel_B1F_EventScript_Sofia::
# 6 "data/maps/RockTunnel_B1F/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_SOFIA, RockTunnel_B1F_Text_SofiaIntro, RockTunnel_B1F_Text_SofiaDefeat
# 7 "data/maps/RockTunnel_B1F/scripts.pory"
	msgbox RockTunnel_B1F_Text_SofiaPostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/RockTunnel_B1F/scripts.pory"
	end
# 9 "data/maps/RockTunnel_B1F/scripts.pory"

# 10 "data/maps/RockTunnel_B1F/scripts.pory"
RockTunnel_B1F_EventScript_Martha::
# 11 "data/maps/RockTunnel_B1F/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_MARTHA, RockTunnel_B1F_Text_MarthaIntro, RockTunnel_B1F_Text_MarthaDefeat
# 12 "data/maps/RockTunnel_B1F/scripts.pory"
	msgbox RockTunnel_B1F_Text_MarthaPostBattle, MSGBOX_AUTOCLOSE
# 13 "data/maps/RockTunnel_B1F/scripts.pory"
	end
# 14 "data/maps/RockTunnel_B1F/scripts.pory"

# 15 "data/maps/RockTunnel_B1F/scripts.pory"
RockTunnel_B1F_EventScript_Dudley::
# 16 "data/maps/RockTunnel_B1F/scripts.pory"
	trainerbattle_single TRAINER_HIKER_DUDLEY, RockTunnel_B1F_Text_DudleyIntro, RockTunnel_B1F_Text_DudleyDefeat
# 17 "data/maps/RockTunnel_B1F/scripts.pory"
	msgbox RockTunnel_B1F_Text_DudleyPostBattle, MSGBOX_AUTOCLOSE
# 18 "data/maps/RockTunnel_B1F/scripts.pory"
	end
# 19 "data/maps/RockTunnel_B1F/scripts.pory"

# 20 "data/maps/RockTunnel_B1F/scripts.pory"
RockTunnel_B1F_EventScript_Allen::
# 21 "data/maps/RockTunnel_B1F/scripts.pory"
	trainerbattle_single TRAINER_HIKER_ALLEN, RockTunnel_B1F_Text_AllenIntro, RockTunnel_B1F_Text_AllenDefeat
# 22 "data/maps/RockTunnel_B1F/scripts.pory"
	msgbox RockTunnel_B1F_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
# 23 "data/maps/RockTunnel_B1F/scripts.pory"
	end
# 24 "data/maps/RockTunnel_B1F/scripts.pory"

# 25 "data/maps/RockTunnel_B1F/scripts.pory"
RockTunnel_B1F_EventScript_Eric::
# 26 "data/maps/RockTunnel_B1F/scripts.pory"
	trainerbattle_single TRAINER_HIKER_ERIC, RockTunnel_B1F_Text_EricIntro, RockTunnel_B1F_Text_EricDefeat
# 27 "data/maps/RockTunnel_B1F/scripts.pory"
	msgbox RockTunnel_B1F_Text_EricPostBattle, MSGBOX_AUTOCLOSE
# 28 "data/maps/RockTunnel_B1F/scripts.pory"
	end
# 29 "data/maps/RockTunnel_B1F/scripts.pory"

# 30 "data/maps/RockTunnel_B1F/scripts.pory"
RockTunnel_B1F_EventScript_Cooper::
# 31 "data/maps/RockTunnel_B1F/scripts.pory"
	trainerbattle_single TRAINER_POKEMANIAC_COOPER, RockTunnel_B1F_Text_CooperIntro, RockTunnel_B1F_Text_CooperDefeat
# 32 "data/maps/RockTunnel_B1F/scripts.pory"
	msgbox RockTunnel_B1F_Text_CooperPostBattle, MSGBOX_AUTOCLOSE
# 33 "data/maps/RockTunnel_B1F/scripts.pory"
	end
# 34 "data/maps/RockTunnel_B1F/scripts.pory"

# 35 "data/maps/RockTunnel_B1F/scripts.pory"
RockTunnel_B1F_EventScript_Steve::
# 36 "data/maps/RockTunnel_B1F/scripts.pory"
	trainerbattle_single TRAINER_POKEMANIAC_STEVE, RockTunnel_B1F_Text_SteveIntro, RockTunnel_B1F_Text_SteveDefeat
# 37 "data/maps/RockTunnel_B1F/scripts.pory"
	msgbox RockTunnel_B1F_Text_StevePostBattle, MSGBOX_AUTOCLOSE
# 38 "data/maps/RockTunnel_B1F/scripts.pory"
	end
# 39 "data/maps/RockTunnel_B1F/scripts.pory"

# 40 "data/maps/RockTunnel_B1F/scripts.pory"
RockTunnel_B1F_EventScript_Winston::
# 41 "data/maps/RockTunnel_B1F/scripts.pory"
	trainerbattle_single TRAINER_POKEMANIAC_WINSTON, RockTunnel_B1F_Text_WinstonIntro, RockTunnel_B1F_Text_WinstonDefeat
# 42 "data/maps/RockTunnel_B1F/scripts.pory"
	msgbox RockTunnel_B1F_Text_WinstonPostBattle, MSGBOX_AUTOCLOSE
# 43 "data/maps/RockTunnel_B1F/scripts.pory"
	end
# 44 "data/maps/RockTunnel_B1F/scripts.pory"

# 45 "data/maps/RockTunnel_B1F/scripts.pory"
RockTunnel_B1F_EventScript_OrbingCheck::
# 46 "data/maps/RockTunnel_B1F/scripts.pory"
	goto_if_set FLAG_CAUGHT_REGIROCK, RockTunnel_B1F_EventScript_End
# 47 "data/maps/RockTunnel_B1F/scripts.pory"
	goto_if_set FLAG_REGIROCK_CHECKED, RockTunnel_B1F_EventScript_Orbing
# 48 "data/maps/RockTunnel_B1F/scripts.pory"
	msgbox RockTunnel_B1F_Text_RegiceCheck
# 49 "data/maps/RockTunnel_B1F/scripts.pory"
	closemessage
# 50 "data/maps/RockTunnel_B1F/scripts.pory"
	setvar VAR_0x8005, 1
# 51 "data/maps/RockTunnel_B1F/scripts.pory"
	special IsDodrioInParty
# 52 "data/maps/RockTunnel_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, RockTunnel_B1F_EventScript_NoEligiblePkmn
# 53 "data/maps/RockTunnel_B1F/scripts.pory"
	setvar 0x8004, FAMECHECKER_BRUNO
# 54 "data/maps/RockTunnel_B1F/scripts.pory"
	callnative CheckFilledFameCheckerFor0x8004
# 55 "data/maps/RockTunnel_B1F/scripts.pory"
	compare VAR_RESULT, TRUE
# 56 "data/maps/RockTunnel_B1F/scripts.pory"
	goto_if_eq RockTunnel_B1F_EventScript_Flag
# 57 "data/maps/RockTunnel_B1F/scripts.pory"
	release
# 58 "data/maps/RockTunnel_B1F/scripts.pory"
	end
# 59 "data/maps/RockTunnel_B1F/scripts.pory"

# 60 "data/maps/RockTunnel_B1F/scripts.pory"
RockTunnel_B1F_EventScript_NoEligiblePkmn::
# 61 "data/maps/RockTunnel_B1F/scripts.pory"
	msgbox RockTunnel_B1F_Text_NoEligiblePkmn
# 62 "data/maps/RockTunnel_B1F/scripts.pory"
	release
# 63 "data/maps/RockTunnel_B1F/scripts.pory"
	end
# 64 "data/maps/RockTunnel_B1F/scripts.pory"

# 65 "data/maps/RockTunnel_B1F/scripts.pory"
RockTunnel_B1F_EventScript_Flag::
# 66 "data/maps/RockTunnel_B1F/scripts.pory"
	setflag FLAG_REGIROCK_CHECKED
# 67 "data/maps/RockTunnel_B1F/scripts.pory"
	goto RockTunnel_B1F_EventScript_Orbing
# 68 "data/maps/RockTunnel_B1F/scripts.pory"
	end
# 69 "data/maps/RockTunnel_B1F/scripts.pory"

# 70 "data/maps/RockTunnel_B1F/scripts.pory"
RockTunnel_B1F_EventScript_Orbing::
# 71 "data/maps/RockTunnel_B1F/scripts.pory"
	msgbox RockTunnel_B1F_Text_Whitney, MSGBOX_YESNO
# 72 "data/maps/RockTunnel_B1F/scripts.pory"
	closemessage
# 73 "data/maps/RockTunnel_B1F/scripts.pory"
	delay 40
# 74 "data/maps/RockTunnel_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RockTunnel_B1F_EventScript_NoWhitney
# 75 "data/maps/RockTunnel_B1F/scripts.pory"
	trainerbattle_single TRAINER_RS_TUBER_M, RockTunnel_B1F_Text_YesWhitney, RockTunnel_B1F_Text_PostWhitney, RockTunnel_B1F_EventScript_PostWhitney, NO_MUSIC
# 76 "data/maps/RockTunnel_B1F/scripts.pory"
	release
# 77 "data/maps/RockTunnel_B1F/scripts.pory"
	end
# 78 "data/maps/RockTunnel_B1F/scripts.pory"

# 79 "data/maps/RockTunnel_B1F/scripts.pory"
RockTunnel_B1F_EventScript_PostWhitney::
# 80 "data/maps/RockTunnel_B1F/scripts.pory"
	special HealPlayerParty
# 81 "data/maps/RockTunnel_B1F/scripts.pory"
	msgbox RockTunnel_B1F_Text_WhitneyPostBattle
# 82 "data/maps/RockTunnel_B1F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 83 "data/maps/RockTunnel_B1F/scripts.pory"
	special QuestLog_CutRecording
# 84 "data/maps/RockTunnel_B1F/scripts.pory"
	lock
# 85 "data/maps/RockTunnel_B1F/scripts.pory"
	faceplayer
# 86 "data/maps/RockTunnel_B1F/scripts.pory"
	setwildbattle SPECIES_REGIROCK, 70
# 87 "data/maps/RockTunnel_B1F/scripts.pory"
	waitse
# 88 "data/maps/RockTunnel_B1F/scripts.pory"
	playmoncry SPECIES_REGIROCK, CRY_MODE_ENCOUNTER
# 89 "data/maps/RockTunnel_B1F/scripts.pory"
	message Text_Gyaoo
# 90 "data/maps/RockTunnel_B1F/scripts.pory"
	waitmessage
# 91 "data/maps/RockTunnel_B1F/scripts.pory"
	waitmoncry
# 92 "data/maps/RockTunnel_B1F/scripts.pory"
	delay 10
# 93 "data/maps/RockTunnel_B1F/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 94 "data/maps/RockTunnel_B1F/scripts.pory"
	waitbuttonpress
# 95 "data/maps/RockTunnel_B1F/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 96 "data/maps/RockTunnel_B1F/scripts.pory"
	special StartLegendaryBattle
# 97 "data/maps/RockTunnel_B1F/scripts.pory"
	waitstate
# 98 "data/maps/RockTunnel_B1F/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 99 "data/maps/RockTunnel_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 100 "data/maps/RockTunnel_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, RockTunnel_B1F_EventScript_DefeatedCelebi
# 101 "data/maps/RockTunnel_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, RockTunnel_B1F_EventScript_RanFromCelebi
# 102 "data/maps/RockTunnel_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, RockTunnel_B1F_EventScript_RanFromCelebi
# 103 "data/maps/RockTunnel_B1F/scripts.pory"
	setflag FLAG_CAUGHT_REGIROCK
# 104 "data/maps/RockTunnel_B1F/scripts.pory"

# 105 "data/maps/RockTunnel_B1F/scripts.pory"
	release
# 106 "data/maps/RockTunnel_B1F/scripts.pory"
	end
# 107 "data/maps/RockTunnel_B1F/scripts.pory"

# 108 "data/maps/RockTunnel_B1F/scripts.pory"
RockTunnel_B1F_EventScript_DefeatedCelebi::
# 109 "data/maps/RockTunnel_B1F/scripts.pory"
	setflag FLAG_CAUGHT_REGIROCK
# 110 "data/maps/RockTunnel_B1F/scripts.pory"
	goto EventScript_RemoveStaticMon
# 111 "data/maps/RockTunnel_B1F/scripts.pory"
	end
# 112 "data/maps/RockTunnel_B1F/scripts.pory"

# 113 "data/maps/RockTunnel_B1F/scripts.pory"
RockTunnel_B1F_EventScript_RanFromCelebi::
# 114 "data/maps/RockTunnel_B1F/scripts.pory"
	setvar VAR_0x8004, SPECIES_CELEBI
# 115 "data/maps/RockTunnel_B1F/scripts.pory"
	goto EventScript_MonFlewAway
# 116 "data/maps/RockTunnel_B1F/scripts.pory"
	end
# 117 "data/maps/RockTunnel_B1F/scripts.pory"

# 118 "data/maps/RockTunnel_B1F/scripts.pory"
RockTunnel_B1F_EventScript_NoWhitney::
# 119 "data/maps/RockTunnel_B1F/scripts.pory"
	msgbox RockTunnel_B1F_Text_NoWhitney
# 120 "data/maps/RockTunnel_B1F/scripts.pory"
	release
# 121 "data/maps/RockTunnel_B1F/scripts.pory"
	end
# 122 "data/maps/RockTunnel_B1F/scripts.pory"

# 123 "data/maps/RockTunnel_B1F/scripts.pory"
RockTunnel_B1F_EventScript_End::
# 124 "data/maps/RockTunnel_B1F/scripts.pory"
	msgbox RockTunnel_B1F_Text_EndWhitney
# 125 "data/maps/RockTunnel_B1F/scripts.pory"
	release
# 126 "data/maps/RockTunnel_B1F/scripts.pory"
	end
# 127 "data/maps/RockTunnel_B1F/scripts.pory"

# 128 "data/maps/RockTunnel_B1F/scripts.pory"
RockTunnel_B1F_Text_NoEligiblePkmn::
# 129 "data/maps/RockTunnel_B1F/scripts.pory"
	.string "You have not meet the requirements.\p"
# 130 "data/maps/RockTunnel_B1F/scripts.pory"
	.string "Come back when you do.$"
# 131 "data/maps/RockTunnel_B1F/scripts.pory"

# 132 "data/maps/RockTunnel_B1F/scripts.pory"
RockTunnel_B1F_Text_RegiceCheck::
# 133 "data/maps/RockTunnel_B1F/scripts.pory"
	.string "Hello there {PLAYER}.\n"
# 134 "data/maps/RockTunnel_B1F/scripts.pory"
	.string "I am the Frozen Mirage Trainer.\l"
# 135 "data/maps/RockTunnel_B1F/scripts.pory"
	.string "Beat me and you shall face a\l"
# 136 "data/maps/RockTunnel_B1F/scripts.pory"
	.string "special POKEMON.\l"
# 137 "data/maps/RockTunnel_B1F/scripts.pory"
	.string "But first, I want to see a\l"
# 138 "data/maps/RockTunnel_B1F/scripts.pory"
	.string "Three Headed Mascot,\l"
# 139 "data/maps/RockTunnel_B1F/scripts.pory"
	.string "and knowledge on the Ice queen.$"
# 140 "data/maps/RockTunnel_B1F/scripts.pory"

# 141 "data/maps/RockTunnel_B1F/scripts.pory"
RockTunnel_B1F_Text_Whitney::
# 142 "data/maps/RockTunnel_B1F/scripts.pory"
	.string "So, you wish to face me?$"
# 143 "data/maps/RockTunnel_B1F/scripts.pory"

# 144 "data/maps/RockTunnel_B1F/scripts.pory"
RockTunnel_B1F_Text_YesWhitney::
# 145 "data/maps/RockTunnel_B1F/scripts.pory"
	.string "Very well! Prepare yourself!$"
# 146 "data/maps/RockTunnel_B1F/scripts.pory"

# 147 "data/maps/RockTunnel_B1F/scripts.pory"
RockTunnel_B1F_Text_PostWhitney::
# 148 "data/maps/RockTunnel_B1F/scripts.pory"
	.string "So you are worthy...$"
# 149 "data/maps/RockTunnel_B1F/scripts.pory"

# 150 "data/maps/RockTunnel_B1F/scripts.pory"
RockTunnel_B1F_Text_WhitneyPostBattle::
# 151 "data/maps/RockTunnel_B1F/scripts.pory"
	.string "Alright, you have bested me./p"
# 152 "data/maps/RockTunnel_B1F/scripts.pory"
	.string "Be prepared to face REGIROCK!$"
# 153 "data/maps/RockTunnel_B1F/scripts.pory"

# 154 "data/maps/RockTunnel_B1F/scripts.pory"
RockTunnel_B1F_Text_EndWhitney::
# 155 "data/maps/RockTunnel_B1F/scripts.pory"
	.string "You had one chance,\n"
# 156 "data/maps/RockTunnel_B1F/scripts.pory"
	.string "Goodbye.$"
# 157 "data/maps/RockTunnel_B1F/scripts.pory"

# 158 "data/maps/RockTunnel_B1F/scripts.pory"
RockTunnel_B1F_Text_NoWhitney::
# 159 "data/maps/RockTunnel_B1F/scripts.pory"
	.string "Alright, take your time.$"
