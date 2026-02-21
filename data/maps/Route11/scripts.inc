# 1 "data/maps/Route11/scripts.pory"

# 2 "data/maps/Route11/scripts.pory"
Route11_MapScripts::
# 3 "data/maps/Route11/scripts.pory"
	.byte 0
# 4 "data/maps/Route11/scripts.pory"

# 5 "data/maps/Route11/scripts.pory"
Route11_EventScript_DiglettsCaveSign::
# 6 "data/maps/Route11/scripts.pory"
	msgbox Route11_Text_DiglettsCave, MSGBOX_SIGN
# 7 "data/maps/Route11/scripts.pory"
	end
# 8 "data/maps/Route11/scripts.pory"

# 9 "data/maps/Route11/scripts.pory"
Route11_EventScript_Kecleon::
# 10 "data/maps/Route11/scripts.pory"
	lock
# 11 "data/maps/Route11/scripts.pory"
	faceplayer
# 12 "data/maps/Route11/scripts.pory"
	msgbox Route11_Text_Kecleon, MSGBOX_DEFAULT
# 13 "data/maps/Route11/scripts.pory"
	release
# 14 "data/maps/Route11/scripts.pory"
	end
# 15 "data/maps/Route11/scripts.pory"

# 16 "data/maps/Route11/scripts.pory"
Route11_Text_Kecleon:
# 17 "data/maps/Route11/scripts.pory"
	.string "Have you ever seen a KECLEON?\n"
# 18 "data/maps/Route11/scripts.pory"
	.string "They can turn invisible!$"
