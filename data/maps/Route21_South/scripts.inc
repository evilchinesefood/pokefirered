# 1 "data/maps/Route21_South/scripts.pory"

# 2 "data/maps/Route21_South/scripts.pory"
Route21_South_MapScripts::
# 3 "data/maps/Route21_South/scripts.pory"
	.byte 0
# 4 "data/maps/Route21_South/scripts.pory"

# 5 "data/maps/Route21_South/scripts.pory"
Route21_South_EventScript_OrbingCheck::
# 6 "data/maps/Route21_South/scripts.pory"
	lock
# 7 "data/maps/Route21_South/scripts.pory"
	faceplayer
# 8 "data/maps/Route21_South/scripts.pory"
	msgbox Route21_South_Text_OrbingCheck, MSGBOX_DEFAULT
# 9 "data/maps/Route21_South/scripts.pory"
	release
# 10 "data/maps/Route21_South/scripts.pory"
	end
# 11 "data/maps/Route21_South/scripts.pory"

# 12 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_OrbingCheck:
# 13 "data/maps/Route21_South/scripts.pory"
	.string "The water around here has an\n"
# 14 "data/maps/Route21_South/scripts.pory"
	.string "unusual glow to it...$"
