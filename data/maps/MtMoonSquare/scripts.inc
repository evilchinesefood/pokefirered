# 1 "data/maps/MtMoonSquare/scripts.pory"

# 2 "data/maps/MtMoonSquare/scripts.pory"

# 3 "data/maps/MtMoonSquare/scripts.pory"
MtMoonSquare_MapScripts::
# 4 "data/maps/MtMoonSquare/scripts.pory"
	.byte 0
# 5 "data/maps/MtMoonSquare/scripts.pory"

# 6 "data/maps/MtMoonSquare/scripts.pory"
MtMoonSquare_EventScript_Clefairy::
# 7 "data/maps/MtMoonSquare/scripts.pory"
	lock
# 8 "data/maps/MtMoonSquare/scripts.pory"
	faceplayer
# 9 "data/maps/MtMoonSquare/scripts.pory"
	waitse
# 10 "data/maps/MtMoonSquare/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 11 "data/maps/MtMoonSquare/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_Clefairy
# 12 "data/maps/MtMoonSquare/scripts.pory"
	waitmoncry
# 13 "data/maps/MtMoonSquare/scripts.pory"
	release
# 14 "data/maps/MtMoonSquare/scripts.pory"
    end
# 15 "data/maps/MtMoonSquare/scripts.pory"

# 16 "data/maps/MtMoonSquare/scripts.pory"
MtMoonSquare_EventScript_Jiggypuff::
# 17 "data/maps/MtMoonSquare/scripts.pory"
	lock
# 18 "data/maps/MtMoonSquare/scripts.pory"
	faceplayer
# 19 "data/maps/MtMoonSquare/scripts.pory"
	fadeoutbgm 0
# 20 "data/maps/MtMoonSquare/scripts.pory"
	playbgm MUS_JIGGLYPUFF, 0
# 21 "data/maps/MtMoonSquare/scripts.pory"
	message PewterCity_PokemonCenter_1F_Text_Jigglypuff
# 22 "data/maps/MtMoonSquare/scripts.pory"
	waitmessage
# 23 "data/maps/MtMoonSquare/scripts.pory"
	delay 455
# 24 "data/maps/MtMoonSquare/scripts.pory"
	playbgm MUS_SCHOOL, 1
# 25 "data/maps/MtMoonSquare/scripts.pory"
	release
# 26 "data/maps/MtMoonSquare/scripts.pory"
	end
# 27 "data/maps/MtMoonSquare/scripts.pory"

# 28 "data/maps/MtMoonSquare/scripts.pory"
MtMoonSquare_EventScript_NidoranF::
# 29 "data/maps/MtMoonSquare/scripts.pory"
	lock
# 30 "data/maps/MtMoonSquare/scripts.pory"
	faceplayer
# 31 "data/maps/MtMoonSquare/scripts.pory"
	waitse
# 32 "data/maps/MtMoonSquare/scripts.pory"
	playmoncry SPECIES_NIDORAN_F, CRY_MODE_NORMAL
# 33 "data/maps/MtMoonSquare/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_Nidoran
# 34 "data/maps/MtMoonSquare/scripts.pory"
	waitmoncry
# 35 "data/maps/MtMoonSquare/scripts.pory"
	release
# 36 "data/maps/MtMoonSquare/scripts.pory"
	end
# 37 "data/maps/MtMoonSquare/scripts.pory"

# 38 "data/maps/MtMoonSquare/scripts.pory"
MtMoonSquare_EventScript_NidoranM::
# 39 "data/maps/MtMoonSquare/scripts.pory"
	lock
# 40 "data/maps/MtMoonSquare/scripts.pory"
	faceplayer
# 41 "data/maps/MtMoonSquare/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 42 "data/maps/MtMoonSquare/scripts.pory"
	waitse
# 43 "data/maps/MtMoonSquare/scripts.pory"
	playmoncry SPECIES_NIDORAN_M, CRY_MODE_NORMAL
# 44 "data/maps/MtMoonSquare/scripts.pory"
	msgbox PewterCity_House1_Text_Nidoran
# 45 "data/maps/MtMoonSquare/scripts.pory"
	waitmoncry
# 46 "data/maps/MtMoonSquare/scripts.pory"
	release
# 47 "data/maps/MtMoonSquare/scripts.pory"
    end
# 48 "data/maps/MtMoonSquare/scripts.pory"

# 49 "data/maps/MtMoonSquare/scripts.pory"
MtMoonSquare_EventScript_Nidorino::
# 50 "data/maps/MtMoonSquare/scripts.pory"
	lock
# 51 "data/maps/MtMoonSquare/scripts.pory"
	faceplayer
# 52 "data/maps/MtMoonSquare/scripts.pory"
	waitse
# 53 "data/maps/MtMoonSquare/scripts.pory"
	playmoncry SPECIES_NIDORINO, CRY_MODE_NORMAL
# 54 "data/maps/MtMoonSquare/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_Nidorino
# 55 "data/maps/MtMoonSquare/scripts.pory"
	waitmoncry
# 56 "data/maps/MtMoonSquare/scripts.pory"
	release
# 57 "data/maps/MtMoonSquare/scripts.pory"
	end
# 58 "data/maps/MtMoonSquare/scripts.pory"

# 59 "data/maps/MtMoonSquare/scripts.pory"
MtMoonSquare_EventScript_ClawBall::
# 60 "data/maps/MtMoonSquare/scripts.pory"
	lock
# 61 "data/maps/MtMoonSquare/scripts.pory"
	faceplayer
# 62 "data/maps/MtMoonSquare/scripts.pory"
	msgbox MtMoonSquare_Text_ClawBall, MSGBOX_DEFAULT
# 63 "data/maps/MtMoonSquare/scripts.pory"
	release
# 64 "data/maps/MtMoonSquare/scripts.pory"
	end
# 65 "data/maps/MtMoonSquare/scripts.pory"

# 66 "data/maps/MtMoonSquare/scripts.pory"
MtMoonSquare_Text_ClawBall:
# 67 "data/maps/MtMoonSquare/scripts.pory"
	.string "A strange ball with claw marks\n"
# 68 "data/maps/MtMoonSquare/scripts.pory"
	.string "on it...$"
