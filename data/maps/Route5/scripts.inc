# 1 "data/maps/Route5/scripts.pory"

# 2 "data/maps/Route5/scripts.pory"
Route5_MapScripts::
# 3 "data/maps/Route5/scripts.pory"
	.byte 0
# 4 "data/maps/Route5/scripts.pory"

# 5 "data/maps/Route5/scripts.pory"
Route5_EventScript_UndergroundPathSign::
# 6 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_UndergroundPathSign, MSGBOX_SIGN
# 7 "data/maps/Route5/scripts.pory"
	end
# 8 "data/maps/Route5/scripts.pory"

# 9 "data/maps/Route5/scripts.pory"
Route5_EventScript_Bro::
# 10 "data/maps/Route5/scripts.pory"
	lock
# 11 "data/maps/Route5/scripts.pory"
	faceplayer
# 12 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_Bro, MSGBOX_DEFAULT
# 13 "data/maps/Route5/scripts.pory"
	release
# 14 "data/maps/Route5/scripts.pory"
	end
# 15 "data/maps/Route5/scripts.pory"

# 16 "data/maps/Route5/scripts.pory"
Route5_Text_Bro:
# 17 "data/maps/Route5/scripts.pory"
	.string "My sister and I are training\n"
# 18 "data/maps/Route5/scripts.pory"
	.string "to challenge the ELITE FOUR!$"
# 19 "data/maps/Route5/scripts.pory"

# 20 "data/maps/Route5/scripts.pory"
Route5_EventScript_Sis::
# 21 "data/maps/Route5/scripts.pory"
	lock
# 22 "data/maps/Route5/scripts.pory"
	faceplayer
# 23 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_Sis, MSGBOX_DEFAULT
# 24 "data/maps/Route5/scripts.pory"
	release
# 25 "data/maps/Route5/scripts.pory"
	end
# 26 "data/maps/Route5/scripts.pory"

# 27 "data/maps/Route5/scripts.pory"
Route5_Text_Sis:
# 28 "data/maps/Route5/scripts.pory"
	.string "My brother thinks he is so\n"
# 29 "data/maps/Route5/scripts.pory"
	.string "tough, but I always win!$"
