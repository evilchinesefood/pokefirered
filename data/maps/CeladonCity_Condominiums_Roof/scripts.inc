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
	msgbox CeladonCity_Condominiums_Roof_Text_Whitney, MSGBOX_DEFAULT
# 13 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	release
# 14 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	end
# 15 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"

# 16 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
CeladonCity_Condominiums_Roof_Text_Whitney:
# 17 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	.string "The view from up here is\n"
# 18 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	.string "amazing!$"
