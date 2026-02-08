# 1 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"

# 2 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
CeladonCity_Condominiums_Roof_MapScripts::
# 3 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	.byte 0
# 4 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"

# 5 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
CeladonCity_Condominiums_Roof_EventScript_Sign::
# 6 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	msgbox CeladonCity_Condominiums_Roof_Text_IKnowEverything, MSGBOX_SIGN
# 7 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	end
# 8 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"

# 9 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
CeladonCity_Condominiums_Roof_EventScript_Whitney::
# 10 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	lock
# 11 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	faceplayer
# 12 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	goto_if_set TRAINER_RS_POKEMANIAC, CeladonCity_Condominiums_Roof_EventScript_PostWhitney
# 13 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	goto_if_set FLAG_PIKER_DEFEATED, CeladonCity_Condominiums_Roof_EventScript_EndWhitney
# 14 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	msgbox CeladonCity_Condominiums_Roof_Text_Whitney, MSGBOX_YESNO
# 15 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CeladonCity_Condominiums_Roof_EventScript_NoWhitney
# 16 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	trainerbattle_single TRAINER_RS_POKEMANIAC, CeladonCity_Condominiums_Roof_Text_YesWhitney, CeladonCity_Condominiums_Roof_Text_WhitneyDefeat, CeladonCity_Condominiums_Roof_EventScript_PostWhitney, NO_MUSIC
# 17 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	release
# 18 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	end
# 19 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"

# 20 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
CeladonCity_Condominiums_Roof_EventScript_PostWhitney::
# 21 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	msgbox CeladonCity_Condominiums_Roof_Text_WhitneyPostBattle
# 22 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	setflag FLAG_PIKER_DEFEATED
# 23 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	msgbox CeladonCity_Condominiums_Roof_Text_ReceivedSoulDew
# 24 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	release
# 25 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	end
# 26 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"

# 27 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
CeladonCity_Condominiums_Roof_EventScript_EndWhitney::
# 28 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	msgbox CeladonCity_Condominiums_Roof_Text_ReceivedSoulDew
# 29 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	release
# 30 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	end
# 31 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"

# 32 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"

# 33 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
CeladonCity_Condominiums_Roof_EventScript_NoWhitney::
# 34 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	msgbox CeladonCity_Condominiums_Roof_Text_NoWhitney
# 35 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	release
# 36 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	end
# 37 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"

# 38 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
CeladonCity_Condominiums_Roof_Text_Whitney::
# 39 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	.string "Placeholder$"
# 40 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"

# 41 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
CeladonCity_Condominiums_Roof_Text_ReceivedSoulDew::
# 42 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	.string "Placeholder$"
# 43 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"

# 44 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
CeladonCity_Condominiums_Roof_Text_NoWhitney::
# 45 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	.string "Placeholder$"
# 46 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"

# 47 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
CeladonCity_Condominiums_Roof_Text_YesWhitney::
# 48 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	.string "Placeholder$"
# 49 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
CeladonCity_Condominiums_Roof_Text_WhitneyDefeat::
# 50 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	.string "Placeholder$"
# 51 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
CeladonCity_Condominiums_Roof_Text_WhitneyPostBattle::
# 52 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	.string "Placeholder$"
