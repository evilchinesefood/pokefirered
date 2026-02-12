# 1 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 2 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_MapScripts::
# 3 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.byte 0
# 4 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 5 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji::
# 6 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	lock
# 7 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	faceplayer
# 8 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	goto_if_unset FLAG_JIRACHI_WISH, LavenderTown_VolunteerPokemonHouse_EventScript_SoulDewCheck
# 9 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	goto_if_set FLAG_GOT_POKE_FLUTE, LavenderTown_VolunteerPokemonHouse_EventScript_AlreadyHavePokeFlute
# 10 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_IdLikeYouToHaveThis
# 11 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	checkitemspace ITEM_POKE_FLUTE
# 12 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, LavenderTown_VolunteerPokemonHouse_EventScript_NoRoomForPokeFlute
# 13 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	setflag FLAG_GOT_POKE_FLUTE
# 14 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	giveitem_msg LavenderTown_VolunteerPokemonHouse_Text_ReceivedPokeFluteFromMrFuji, ITEM_POKE_FLUTE, 1, MUS_OBTAIN_KEY_ITEM
# 15 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_ExplainPokeFlute
# 16 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
# 17 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 18 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 19 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_SoulDewCheck::
# 20 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	goto_if_set FLAG_GOT_SOUL_DEW, LavenderTown_VolunteerPokemonHouse_EventScript_AlreadyHavePokeFlute
# 21 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	setvar VAR_0x8004, FAMECHECKER_MRFUJI
# 22 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	callnative CheckFilledFameCheckerFor0x8004
# 23 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LavenderTown_VolunteerPokemonHouse_EventScript_SoulDewGiven
# 24 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_FameCheckerNotEnough
# 25 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
# 26 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 27 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 28 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_SoulDewGiven::
# 29 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_ThankYouForHelping
# 30 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	checkitemspace ITEM_SOUL_DEW
# 31 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	giveitem ITEM_SOUL_DEW
# 32 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeladonCity_Restaurant_EventScript_NoRoomForCoinCase
# 33 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_GotDew
# 34 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	setflag FLAG_GOT_SOUL_DEW
# 35 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	clearflag FLAG_SECOND_SOUL_DEW
# 36 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
# 37 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 38 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 39 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_Text_FameCheckerNotEnough::
# 40 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "PLACEHOLDER.$"
# 41 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 42 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_Text_GotDew::
# 43 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "You received the SOUL DEW.$"
# 44 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 45 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_Text_ThankYouForHelping::
# 46 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "Thank you for helping me with my work.\n"
# 47 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "I hope you enjoy the SOUL DEW.$"
# 48 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 49 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_AlreadyHavePokeFlute::
# 50 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_HasPokeFluteHelpedYou
# 51 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
# 52 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 53 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 54 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_NoRoomForPokeFlute::
# 55 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MustMakeRoomForThis
# 56 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
# 57 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 58 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 59 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_LittleGirl::
# 60 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	lock
# 61 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	faceplayer
# 62 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	famechecker FAMECHECKER_MRFUJI, 0
# 63 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MrFujiLooksAfterOrphanedMons
# 64 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
# 65 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 66 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 67 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_LittleBoy::
# 68 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MonsNiceToHug, MSGBOX_NPC
# 69 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 70 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 71 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_Youngster::
# 72 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	lock
# 73 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	faceplayer
# 74 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	goto_if_set FLAG_RESCUED_MR_FUJI, LavenderTown_VolunteerPokemonHouse_EventScript_YoungsterFujiBack
# 75 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_WhereDidMrFujiGo
# 76 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
# 77 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 78 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 79 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_YoungsterFujiBack::
# 80 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MrFujiWasPrayingForCubonesMother
# 81 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
# 82 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 83 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 84 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_Nidorino::
# 85 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	lock
# 86 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	faceplayer
# 87 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	waitse
# 88 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	playmoncry SPECIES_NIDORINO, CRY_MODE_NORMAL
# 89 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_Nidorino
# 90 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	waitmoncry
# 91 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
# 92 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 93 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 94 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_Psyduck::
# 95 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	lock
# 96 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	faceplayer
# 97 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	waitse
# 98 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_NORMAL
# 99 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_Psyduck
# 100 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	waitmoncry
# 101 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
# 102 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 103 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 104 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_PokemonFanMagazine::
# 105 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	lockall
# 106 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	famechecker FAMECHECKER_MRFUJI, 2
# 107 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_GrandPrizeDrawingClipped
# 108 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	releaseall
# 109 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 110 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 111 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_Bookshelf::
# 112 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_PokemonMagazinesLineShelf, MSGBOX_SIGN
# 113 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
