# 1 "data/maps/Route21_North/scripts.pory"

# 2 "data/maps/Route21_North/scripts.pory"
Route21_North_MapScripts::
# 3 "data/maps/Route21_North/scripts.pory"
	.byte 0
# 4 "data/maps/Route21_North/scripts.pory"

# 5 "data/maps/Route21_North/scripts.pory"
Route21_North_EventScript_Clamperl::
# 6 "data/maps/Route21_North/scripts.pory"
	lock
# 7 "data/maps/Route21_North/scripts.pory"
	faceplayer
# 8 "data/maps/Route21_North/scripts.pory"
	msgbox Route21_North_Text_Clamperl, MSGBOX_DEFAULT
# 9 "data/maps/Route21_North/scripts.pory"
	release
# 10 "data/maps/Route21_North/scripts.pory"
	end
# 11 "data/maps/Route21_North/scripts.pory"

# 12 "data/maps/Route21_North/scripts.pory"
Route21_North_Text_Clamperl:
# 13 "data/maps/Route21_North/scripts.pory"
	.string "I'm trying to catch a CLAMPERL.\n"
# 14 "data/maps/Route21_North/scripts.pory"
	.string "They're so hard to find!$"
