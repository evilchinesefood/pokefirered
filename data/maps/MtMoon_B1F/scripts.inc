# 1 "data/maps/MtMoon_B1F/scripts.pory"

# 2 "data/maps/MtMoon_B1F/scripts.pory"
MtMoon_B1F_MapScripts::
# 3 "data/maps/MtMoon_B1F/scripts.pory"
	.byte 0
# 4 "data/maps/MtMoon_B1F/scripts.pory"

# 5 "data/maps/MtMoon_B1F/scripts.pory"
MtMoon_B1F_EventScript_Sableye::
# 6 "data/maps/MtMoon_B1F/scripts.pory"
	lock
# 7 "data/maps/MtMoon_B1F/scripts.pory"
	faceplayer
# 8 "data/maps/MtMoon_B1F/scripts.pory"
	msgbox MtMoon_B1F_Text_Sableye, MSGBOX_DEFAULT
# 9 "data/maps/MtMoon_B1F/scripts.pory"
	release
# 10 "data/maps/MtMoon_B1F/scripts.pory"
	end
# 11 "data/maps/MtMoon_B1F/scripts.pory"

# 12 "data/maps/MtMoon_B1F/scripts.pory"
MtMoon_B1F_Text_Sableye:
# 13 "data/maps/MtMoon_B1F/scripts.pory"
	.string "A strange shadow lurks in\n"
# 14 "data/maps/MtMoon_B1F/scripts.pory"
	.string "the darkness...$"
