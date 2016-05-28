#pragma once
#include <map>
#include "inc\types.h"
#include <math.h>

const std::map<int, color_t> standartColorsRGB =
{
	{ 0,{ 8 , 8 , 8 } },
	{ 1,{ 15 , 15 , 15 } },
	{ 2,{ 28 , 30 , 33 } },
	{ 3,{ 41 , 44 , 46 } },
	{ 4,{ 90 , 94 , 102 } },
	{ 5,{ 119 , 124 , 135 } },
	{ 6,{ 81 , 84 , 89 } },
	{ 7,{ 50 , 59 , 71 } },
	{ 8,{ 51 , 51 , 51 } },
	{ 9,{ 31 , 34 , 38 } },
	{ 10,{ 35 , 41 , 46 } },
	{ 11,{ 18 , 17 , 16 } },
	{ 12,{ 5 , 5 , 5 } },
	{ 13,{ 18 , 18 , 18 } },
	{ 14,{ 47 , 50 , 51 } },
	{ 15,{ 8 , 8 , 8 } },
	{ 16,{ 18 , 18 , 18 } },
	{ 17,{ 32 , 34 , 36 } },
	{ 18,{ 87 , 89 , 97 } },
	{ 19,{ 35 , 41 , 46 } },
	{ 20,{ 50 , 59 , 71 } },
	{ 21,{ 15 , 16 , 18 } },
	{ 22,{ 33 , 33 , 33 } },
	{ 23,{ 91 , 93 , 94 } },
	{ 24,{ 136 , 138 , 153 } },
	{ 25,{ 105 , 113 , 135 } },
	{ 26,{ 59 , 70 , 84 } },
	{ 27,{ 105 , 0 , 0 } },
	{ 28,{ 138 , 11 , 0 } },
	{ 29,{ 107 , 0 , 0 } },
	{ 30,{ 97 , 16 , 9 } },
	{ 31,{ 74 , 10 , 10 } },
	{ 32,{ 71 , 14 , 14 } },
	{ 33,{ 56 , 12 , 0 } },
	{ 34,{ 38 , 3 , 11 } },
	{ 35,{ 99 , 0 , 18 } },
	{ 36,{ 128 , 40 , 0 } },
	{ 37,{ 110 , 79 , 45 } },
	{ 38,{ 189 , 72 , 0 } },
	{ 39,{ 120 , 0 , 0 } },
	{ 40,{ 54 , 0 , 0 } },
	{ 41,{ 171 , 63 , 0 } },
	{ 42,{ 222 , 126 , 0 } },
	{ 43,{ 82 , 0 , 0 } },
	{ 44,{ 140 , 4 , 4 } },
	{ 45,{ 74 , 16 , 0 } },
	{ 46,{ 89 , 37 , 37 } },
	{ 47,{ 117 , 66 , 49 } },
	{ 48,{ 33 , 8 , 4 } },
	{ 49,{ 0 , 18 , 7 } },
	{ 50,{ 0 , 26 , 11 } },
	{ 51,{ 0 , 33 , 30 } },
	{ 52,{ 31 , 38 , 30 } },
	{ 53,{ 0 , 56 , 5 } },
	{ 54,{ 11 , 65 , 69 } },
	{ 55,{ 65 , 133 , 3 } },
	{ 56,{ 15 , 31 , 21 } },
	{ 57,{ 2 , 54 , 19 } },
	{ 58,{ 22 , 36 , 25 } },
	{ 59,{ 42 , 54 , 37 } },
	{ 60,{ 69 , 92 , 86 } },
	{ 61,{ 0 , 13 , 20 } },
	{ 62,{ 0 , 16 , 41 } },
	{ 63,{ 28 , 47 , 79 } },
	{ 64,{ 0 , 27 , 87 } },
	{ 65,{ 59 , 78 , 120 } },
	{ 66,{ 39 , 45 , 59 } },
	{ 67,{ 149 , 178 , 219 } },
	{ 68,{ 62 , 98 , 122 } },
	{ 69,{ 28 , 49 , 64 } },
	{ 70,{ 0 , 85 , 196 } },
	{ 71,{ 26 , 24 , 46 } },
	{ 72,{ 22 , 22 , 41 } },
	{ 73,{ 14 , 49 , 109 } },
	{ 74,{ 57 , 90 , 131 } },
	{ 75,{ 9 , 20 , 46 } },
	{ 76,{ 15 , 16 , 33 } },
	{ 77,{ 21 , 42 , 82 } },
	{ 78,{ 50 , 70 , 84 } },
	{ 79,{ 21 , 37 , 99 } },
	{ 80,{ 34 , 59 , 161 } },
	{ 81,{ 31 , 31 , 161 } },
	{ 82,{ 3 , 14 , 46 } },
	{ 83,{ 15 , 30 , 115 } },
	{ 84,{ 0 , 28 , 50 } },
	{ 85,{ 42 , 55 , 84 } },
	{ 86,{ 48 , 60 , 94 } },
	{ 87,{ 59 , 103 , 150 } },
	{ 88,{ 245 , 137 , 15 } },
	{ 89,{ 217 , 166 , 0 } },
	{ 90,{ 74 , 52 , 27 } },
	{ 91,{ 162 , 168 , 39 } },
	{ 92,{ 86 , 143 , 0 } },
	{ 93,{ 87 , 81 , 75 } },
	{ 94,{ 41 , 27 , 6 } },
	{ 95,{ 38 , 33 , 23 } },
	{ 96,{ 18 , 13 , 7 } },
	{ 97,{ 51 , 33 , 17 } },
	{ 98,{ 61 , 48 , 35 } },
	{ 99,{ 94 , 83 , 67 } },
	{ 100,{ 55 , 56 , 43 } },
	{ 101,{ 34 , 25 , 24 } },
	{ 102,{ 87 , 80 , 54 } },
	{ 103,{ 36 , 19 , 9 } },
	{ 104,{ 59 , 23 , 0 } },
	{ 105,{ 110 , 98 , 70 } },
	{ 106,{ 153 , 141 , 115 } },
	{ 107,{ 207 , 192 , 165 } },
	{ 108,{ 31 , 23 , 9 } },
	{ 109,{ 61 , 49 , 29 } },
	{ 110,{ 102 , 88 , 71 } },
	{ 111,{ 240 , 240 , 240 } },
	{ 112,{ 179 , 185 , 201 } },
	{ 113,{ 97 , 95 , 85 } },
	{ 114,{ 36 , 30 , 26 } },
	{ 115,{ 23 , 20 , 19 } },
	{ 116,{ 59 , 55 , 47 } },
	{ 117,{ 59 , 64 , 69 } },
	{ 118,{ 26 , 30 , 33 } },
	{ 119,{ 94 , 100 , 107 } },
	{ 120,{ 0 , 0 , 0 } },
	{ 121,{ 176 , 176 , 176 } },
	{ 122,{ 153 , 153 , 153 } },
	{ 123,{ 181 , 101 , 25 } },
	{ 124,{ 196 , 92 , 51 } },
	{ 125,{ 71 , 120 , 60 } },
	{ 126,{ 186 , 132 , 37 } },
	{ 127,{ 42 , 119 , 161 } },
	{ 128,{ 36 , 48 , 34 } },
	{ 129,{ 107 , 95 , 84 } },
	{ 130,{ 201 , 110 , 52 } },
	{ 131,{ 217 , 217 , 217 } },
	{ 132,{ 240 , 240 , 240 } },
	{ 133,{ 63 , 66 , 40 } },
	{ 134,{ 255 , 255 , 255 } },
	{ 135,{ 176 , 18 , 89 } },
	{ 136,{ 246 , 151 , 153 } },
	{ 137,{ 143 , 47 , 85 } },
	{ 138,{ 194 , 102 , 16 } },
	{ 139,{ 105 , 189 , 69 } },
	{ 140,{ 0 , 174 , 239 } },
	{ 141,{ 0 , 1 , 8 } },
	{ 142,{ 5 , 0 , 8 } },
	{ 143,{ 8 , 0 , 0 } },
	{ 144,{ 86 , 87 , 81 } },
	{ 145,{ 50 , 6 , 66 } },
	{ 146,{ 0 , 8 , 15 } },
	{ 147,{ 8 , 8 , 8 } },
	{ 148,{ 50 , 6 , 66 } },
	{ 149,{ 5 , 0 , 8 } },
	{ 150,{ 107 , 11 , 0 } },
	{ 151,{ 18 , 23 , 16 } },
	{ 152,{ 50 , 51 , 37 } },
	{ 153,{ 59 , 53 , 45 } },
	{ 154,{ 112 , 102 , 86 } },
	{ 155,{ 43 , 48 , 43 } },
	{ 156,{ 65 , 67 , 71 } },
	{ 157,{ 102 , 144 , 181 } },
	{ 158,{ 71 , 57 , 27 } },
	{ 159,{ 71 , 57 , 27 } },
	{ 160,{ 255 , 216 , 89 } },
};



const std::map<std::string, color_t> allColors =
{
	{ "HUD_COLOUR_PURE_WHITE",{ 255,255,255,255 } },
	{ "HUD_COLOUR_WHITE",{ 240,240,240,255 } },
	{ "HUD_COLOUR_BLACK",{ 0,0,0,255 } },
	{ "HUD_COLOUR_GREY",{ 155,155,155,255 } },
	{ "HUD_COLOUR_GREYLIGHT",{ 205,205,205,255 } },
	{ "HUD_COLOUR_GREYDARK",{ 77,77,77,255 } },
	{ "HUD_COLOUR_RED",{ 224,50,50,255 } },
	{ "HUD_COLOUR_REDLIGHT",{ 240,153,153,255 } },
	{ "HUD_COLOUR_REDDARK",{ 112,25,25,255 } },
	{ "HUD_COLOUR_BLUE",{ 93,182,229,255, } },
	{ "HUD_COLOUR_BLUELIGHT",{ 174,219,242,255 } },
	{ "HUD_COLOUR_BLUEDARK",{ 47,92,115,255 } },
	{ "HUD_COLOUR_YELLOW",{ 240,200,80,255 } },
	{ "HUD_COLOUR_YELLOWLIGHT",{ 254,235,169,255 } },
	{ "HUD_COLOUR_YELLOWDARK",{ 126,107,41,255 } },
	{ "HUD_COLOUR_ORANGE",{ 255,133,85,255 } },
	{ "HUD_COLOUR_ORANGELIGHT",{ 255,194,170,255 } },
	{ "HUD_COLOUR_ORANGEDARK",{ 127,66,42,255 } },
	{ "HUD_COLOUR_GREEN",{ 114,204,114,255 } },
	{ "HUD_COLOUR_GREENLIGHT",{ 185,230,185,255 } },
	{ "HUD_COLOUR_GREENDARK",{ 57,102,57,255 } },
	{ "HUD_COLOUR_PURPLE",{ 100,79,142,255 } },
	{ "HUD_COLOUR_PURPLELIGHT",{ 78,167,199,255 } },
	{ "HUD_COLOUR_PURPLEDARK",{ 50,39,71,255 } },
	{ "HUD_COLOUR_PINK",{ 203,54,148,255, } },
	{ "HUD_COLOUR_RADAR_HEALTH",{ 53,154,71,255 } },
	{ "HUD_COLOUR_RADAR_DAMAGE",{ 235,36,39,255 } },
	{ "HUD_COLOUR_NET_PLAYER1",{ 194,80,80,255 } },
	{ "HUD_COLOUR_NET_PLAYER2",{ 156,110,175,255 } },
	{ "HUD_COLOUR_NET_PLAYER3",{ 255,123,196,255, } },
	{ "HUD_COLOUR_NET_PLAYER4",{ 229,176,147,255 } },
	{ "HUD_COLOUR_NET_PLAYER5",{ 199,131,209,255 } },
	{ "HUD_COLOUR_NET_PLAYER6",{ 215,189,121,255 } },
	{ "HUD_COLOUR_NET_PLAYER7",{ 139,179,167,255 } },
	{ "HUD_COLOUR_NET_PLAYER8",{ 123,156,84,255 } },
	{ "HUD_COLOUR_NET_PLAYER9",{ 144,127,153,255 } },
	{ "HUD_COLOUR_NET_PLAYER10",{ 106,196,191,255 } },
	{ "HUD_COLOUR_NET_PLAYER11",{ 214,196,153,255 } },
	{ "HUD_COLOUR_NET_PLAYER12",{ 234,142,80,255 } },
	{ "HUD_COLOUR_NET_PLAYER13",{ 152,203,234,255 } },
	{ "HUD_COLOUR_NET_PLAYER14",{ 178,98,135,255 } },
	{ "HUD_COLOUR_NET_PLAYER15",{ 144,142,122,255 } },
	{ "HUD_COLOUR_NET_PLAYER16",{ 166,117,94,255 } },
	{ "HUD_COLOUR_NET_PLAYER17",{ 175,168,168,255 } },
	{ "HUD_COLOUR_NET_PLAYER18",{ 232,142,155,255 } },
	{ "HUD_COLOUR_NET_PLAYER19",{ 187,214,91,255 } },
	{ "HUD_COLOUR_NET_PLAYER20",{ 12,123,86,255 } },
	{ "HUD_COLOUR_NET_PLAYER21",{ 123,196,255,255 } },
	{ "HUD_COLOUR_NET_PLAYER22",{ 171,60,230,255 } },
	{ "HUD_COLOUR_NET_PLAYER23",{ 206,169,13,255 } },
	{ "HUD_COLOUR_NET_PLAYER24",{ 71,99,173,255 } },
	{ "HUD_COLOUR_NET_PLAYER25",{ 42,166,185,255 } },
	{ "HUD_COLOUR_NET_PLAYER26",{ 186,157,125,255 } },
	{ "HUD_COLOUR_NET_PLAYER27",{ 201,225,255,255 } },
	{ "HUD_COLOUR_NET_PLAYER28",{ 240,240,150,255 } },
	{ "HUD_COLOUR_NET_PLAYER29",{ 237,140,161,255 } },
	{ "HUD_COLOUR_NET_PLAYER30",{ 249,138,138,255 } },
	{ "HUD_COLOUR_NET_PLAYER31",{ 252,239,166,255 } },
	{ "HUD_COLOUR_NET_PLAYER32",{ 240,240,240,255 } },
	{ "HUD_COLOUR_SIMPLEBLIP_DEFAULT",{ 159,201,166,255 } },
	{ "HUD_COLOUR_MENU_BLUE",{ 140,140,140,255 } },
	{ "HUD_COLOUR_MENU_BLUE_EXTRA_DARK",{ 40,40,40,255 } },
	{ "HUD_COLOUR_MENU_YELLOW",{ 240,160,0,255 } },
	{ "HUD_COLOUR_MENU_GREY",{ 140,140,140,255 } },
	{ "HUD_COLOUR_MENU_GREY_DARK",{ 60,60,60,255 } },
	{ "HUD_COLOUR_MENU_HIGHLIGHT",{ 30,30,30,255 } },
	{ "HUD_COLOUR_MENU_STANDARD",{ 140,140,140,255 } },
	{ "HUD_COLOUR_MENU_DIMMED",{ 75,75,75,255 } },
	{ "HUD_COLOUR_MENU_EXTRA_DIMMED",{ 50,50,50,255 } },
	{ "HUD_COLOUR_BRIEF_TITLE",{ 95,95,95,255 } },
	{ "HUD_COLOUR_MID_GREY_MP",{ 100,100,100,255 } },
	{ "HUD_COLOUR_NET_PLAYER1_DARK",{ 97,40,40,255 } },
	{ "HUD_COLOUR_NET_PLAYER2_DARK",{ 78,55,87,255 } },
	{ "HUD_COLOUR_NET_PLAYER3_DARK",{ 121,40,85,255 } },
	{ "HUD_COLOUR_NET_PLAYER4_DARK",{ 114,88,73,255 } },
	{ "HUD_COLOUR_NET_PLAYER5_DARK",{ 99,65,104,255 } },
	{ "HUD_COLOUR_NET_PLAYER6_DARK",{ 107,94,60,255 } },
	{ "HUD_COLOUR_NET_PLAYER7_DARK",{ 69,89,83,255 } },
	{ "HUD_COLOUR_NET_PLAYER8_DARK",{ 61,78,42,255 } },
	{ "HUD_COLOUR_NET_PLAYER9_DARK",{ 72,63,76,255 } },
	{ "HUD_COLOUR_NET_PLAYER10_DARK",{ 53,98,95,255 } },
	{ "HUD_COLOUR_NET_PLAYER11_DARK",{ 107,98,76,255 } },
	{ "HUD_COLOUR_NET_PLAYER12_DARK",{ 117,71,40,255 } },
	{ "HUD_COLOUR_NET_PLAYER13_DARK",{ 76,101,117,255 } },
	{ "HUD_COLOUR_NET_PLAYER14_DARK",{ 65,35,47,255 } },
	{ "HUD_COLOUR_NET_PLAYER15_DARK",{ 72,71,61,255 } },
	{ "HUD_COLOUR_NET_PLAYER16_DARK",{ 85,58,47,255 } },
	{ "HUD_COLOUR_NET_PLAYER17_DARK",{ 87,84,84,255 } },
	{ "HUD_COLOUR_NET_PLAYER18_DARK",{ 116,71,77,255 } },
	{ "HUD_COLOUR_NET_PLAYER19_DARK",{ 93,107,45,255 } },
	{ "HUD_COLOUR_NET_PLAYER20_DARK",{ 6,61,43,255 } },
	{ "HUD_COLOUR_NET_PLAYER21_DARK",{ 61,98,127,255 } },
	{ "HUD_COLOUR_NET_PLAYER22_DARK",{ 85,30,115,255 } },
	{ "HUD_COLOUR_NET_PLAYER23_DARK",{ 103,84,6,255 } },
	{ "HUD_COLOUR_NET_PLAYER24_DARK",{ 35,49,86,255 } },
	{ "HUD_COLOUR_NET_PLAYER25_DARK",{ 21,83,92,255 } },
	{ "HUD_COLOUR_NET_PLAYER26_DARK",{ 93,98,62,255 } },
	{ "HUD_COLOUR_NET_PLAYER27_DARK",{ 100,112,127,255 } },
	{ "HUD_COLOUR_NET_PLAYER28_DARK",{ 120,120,75,255 } },
	{ "HUD_COLOUR_NET_PLAYER29_DARK",{ 152,76,93,255 } },
	{ "HUD_COLOUR_NET_PLAYER30_DARK",{ 124,69,69,255 } },
	{ "HUD_COLOUR_NET_PLAYER31_DARK",{ 10,43,50,255 } },
	{ "HUD_COLOUR_NET_PLAYER32_DARK",{ 95,95,10,255 } },
	{ "HUD_COLOUR_BRONZE",{ 180,130,97,255 } },
	{ "HUD_COLOUR_SILVER",{ 150,153,161,255 } },
	{ "HUD_COLOUR_GOLD",{ 214,181,99,255 } },
	{ "HUD_COLOUR_PLATINUM",{ 166,221,190,255 } },
	{ "HUD_COLOUR_GANG1",{ 29,100,153,255 } },
	{ "HUD_COLOUR_GANG2",{ 214,116,15,255 } },
	{ "HUD_COLOUR_GANG3",{ 135,125,142,255 } },
	{ "HUD_COLOUR_GANG4",{ 229,119,185,255 } },
	{ "HUD_COLOUR_SAME_CREW,",{ 252,239,166,255 } },
	{ "HUD_COLOUR_FREEMODE,",{ 45,110,185,255 } },
	{ "HUD_COLOUR_PAUSE_BG",{ 0,0,0,186 } },
	{ "HUD_COLOUR_FRIENDLY",{ 93,182,229,255, } },
	{ "HUD_COLOUR_ENEMY",{ 194,80,80,255 } },
	{ "HUD_COLOUR_FREEMODE_DARK",{22,55,92,255}},
	{"HUD_COLOUR_INACTIVE_MISSION",{154,154,154,255}},
	{"HUD_COLOUR_DAMAGE",{ 194,80,80,255 }},
	{ "HUD_COLOUR_PINKLIGHT",{ 252,115,201,255 } },
	{ "HUD_COLOUR_PM_MITEM_HIGHLIGHT",{ 252,177,49,255 } },
	{ "HUD_COLOUR_SCRIPT_VARIABLE",{ 0,0,0,255 } },
	{ "HUD_COLOUR_YOGA",{ 109,247,204,255 } },
	{ "HUD_COLOUR_TENNIS",{ 241,101,34,255 } },
	{ "HUD_COLOUR_GOLF",{ 214,189,97,255 } },
	{ "HUD_COLOUR_SOCIAL_CLUB",{ 234,153,28,255 } },
	{ "HUD_COLOUR_PLATFORM_BLUE",{11,55,123,255}},
	{"HUD_COLOUR_PLATFORM_GREEN",{ 146,200,62,255 }},
	{ "HUD_COLOUR_PLATFORM_GREY",{ 234,153,28,255 } },
	{ "HUD_COLOUR_FACEBOOK_BLUE",{ 66,89,148,255 } },
	{ "HUD_COLOUR_INGAME_BG",{ 0,0,0,186 } },
	{ "HUD_COLOUR_WAYPOINT",{ 164,76,242,255 } },
	{ "HUD_COLOUR_MICHAEL",{ 101,180,212,255 } },
	{ "HUD_COLOUR_FRANKLIN",{ 171,237,171,255 } },
	{ "HUD_COLOUR_TREVOR",{ 255,163,87,255 } },
	{ "HUD_COLOUR_GOLF_P2",{ 235,239,30,255 } },
	{ "HUD_COLOUR_GOLF_P3",{ 255,149,14,255 } },
	{ "HUD_COLOUR_GOLF_P4",{ 246,60,161,255 } },
	{ "HUD_COLOUR_WAYPOINTLIGHT",{210,166,249,255}},
	{"HUD_COLOUR_WAYPOINTDARK",{ 82,38,121,255 }},
	{ "HUD_COLOUR_PANEL_LIGHT",{ 0,0,0,77 } },
	{ "HUD_COLOUR_MICHAEL_DARK",{ 72,103,116,255 } },
	{ "HUD_COLOUR_FRANKLIN_DARK",{ 85,118,85,255 } },
	{ "HUD_COLOUR_TREVOR_DARK",{ 127,81,43,255 } },
	{ "HUD_COLOUR_PAUSEMAP_TINT",{ 0,0,0,215 } },
	{ "HUD_COLOUR_PAUSE_DESELECT",{ 100,100,100,127 } },
	{ "HUD_COLOUR_PM_WEAPONS_LOCKED",{ 240,240,240,191 } },
	{ "HUD_COLOUR_PAUSEMAP_TINT_HALF",{ 0,0,0,215 } },
	{ "HUD_COLOUR_NORTH_BLUE_OFFICIAL,",{ 0,71,133,255 } },
	{ "HUD_COLOUR_SCRIPT_VARIABLE_2",{ 0,0,0,255 } },
	{ "HUD_COLOUR_H",{ 33,118,37,255 } },
	{ "HUD_COLOUR_HDARK",{ 37,102,40,255 } },
	{ "HUD_COLOUR_T",{ 234,153,28,255 } },
	{ "HUD_COLOUR_TDARK",{ 225,140,8,255 } },
	{ "HUD_COLOUR_HSHARD",{ 20,40,0,255 } },
	{ "HUD_COLOUR_CONTROLLER_MICHAEL",{ 48,255,255,255 } },
	{ "HUD_COLOUR_CONTROLLER_FRANKLIN",{ 48,255,0,255 } },
	{ "HUD_COLOUR_CONTROLLER_TREVOR",{176,80,0,255}},
	{"HUD_COLOUR_CONTROLLER_CHOP",{ 127,0,0,255 }},
	{ "HUD_COLOUR_VIDEO_EDITOR_VIDEO",{ 53,166,224,255 } },
	{ "HUD_COLOUR_VIDEO_EDITOR_AUDIO",{ 162,79,157,255 } },
	{ "HUD_COLOUR_VIDEO_EDITOR_TEXT",{ 104,192,141,255 } },
	{ "HUD_COLOUR_HB_BLUE",{ 29,100,153,255 } },
	{ "HUD_COLOUR_HB_YELLOW",{ 234,153, 28,255 } },
	{ "HUD_COLOUR_VIDEO_EDITOR_SCORE",{240,160,1,255}},
	{"HUD_COLOUR_VIDEO_EDITOR_AUDIO_FADEOUT",{ 59,34,57,255 }},
	{ "HUD_COLOUR_VIDEO_EDITOR_TEXT_FADEOUT",{ 41,68,53,255 } },
	{ "HUD_COLOUR_VIDEO_EDITOR_SCORE_FADEOUT",{ 82,58,10,255 } },
	{ "HUD_COLOUR_HEIST_BACKGROUND",{ 37,102,40,186 } },
	{ "HUD_COLOUR_VIDEO_EDITOR_AMBIENT_FADEOUT",{ 80,70,34,255 } },
	{ "HUD_COLOUR_PURE_WHITE",{ 255,255,255,255 } },
	{ "HUD_COLOUR_WHITE",{ 240,240,240,255 } },
	{ "HUD_COLOUR_BLACK",{ 0,0,0,255 } },
	{ "HUD_COLOUR_GREY",{ 155,155,155,255 } },
	{ "HUD_COLOUR_GREYLIGHT",{ 205,205,205,255 } },
	{ "HUD_COLOUR_GREYDARK",{ 77,77,77,255 } },
	{ "HUD_COLOUR_RED",{ 224,50,50,255 } },
	{ "HUD_COLOUR_REDLIGHT",{ 240,153,153,255 } },
	{ "HUD_COLOUR_REDDARK",{ 112,25,25,255 } },
	{ "HUD_COLOUR_BLUE",{ 93,182,229,255, } },
	{ "HUD_COLOUR_BLUELIGHT",{ 174,219,242,255 } },
	{ "HUD_COLOUR_BLUEDARK",{ 47,92,115,255 } },
	{ "HUD_COLOUR_YELLOW",{ 240,200,80,255 } },
	{ "HUD_COLOUR_YELLOWLIGHT",{ 254,235,169,255 } },
	{ "HUD_COLOUR_YELLOWDARK",{ 126,107,41,255 } },
	{ "HUD_COLOUR_ORANGE",{ 255,133,85,255 } },
	{ "HUD_COLOUR_ORANGELIGHT",{ 255,194,170,255 } },
	{ "HUD_COLOUR_ORANGEDARK",{ 127,66,42,255 } },
	{ "HUD_COLOUR_GREEN",{ 114,204,114,255 } },
	{ "HUD_COLOUR_GREENLIGHT",{ 185,230,185,255 } },
	{ "HUD_COLOUR_GREENDARK",{ 57,102,57,255 } },
	{ "HUD_COLOUR_PURPLE",{ 100,79,142,255 } },
	{ "HUD_COLOUR_PURPLELIGHT",{ 78,167,199,255 } },
	{ "HUD_COLOUR_PURPLEDARK",{ 50,39,71,255 } },
	{ "HUD_COLOUR_PINK",{ 203,54,148,255, } },
	{ "HUD_COLOUR_RADAR_HEALTH",{ 53,154,71,255 } },
	{ "HUD_COLOUR_RADAR_DAMAGE",{ 235,36,39,255 } },
	{ "HUD_COLOUR_NET_PLAYER1",{ 194,80,80,255 } },
	{ "HUD_COLOUR_NET_PLAYER2",{ 156,110,175,255 } },
	{ "HUD_COLOUR_NET_PLAYER3",{ 255,123,196,255, } },
	{ "HUD_COLOUR_NET_PLAYER4",{ 229,176,147,255 } },
	{ "HUD_COLOUR_NET_PLAYER5",{ 199,131,209,255 } },
	{ "HUD_COLOUR_NET_PLAYER6",{ 215,189,121,255 } },
	{ "HUD_COLOUR_NET_PLAYER7",{ 139,179,167,255 } },
	{ "HUD_COLOUR_NET_PLAYER8",{ 123,156,84,255 } },
	{ "HUD_COLOUR_NET_PLAYER9",{ 144,127,153,255 } },
	{ "HUD_COLOUR_NET_PLAYER10",{ 106,196,191,255 } },
	{ "HUD_COLOUR_NET_PLAYER11",{ 214,196,153,255 } },
	{ "HUD_COLOUR_NET_PLAYER12",{ 234,142,80,255 } },
	{ "HUD_COLOUR_NET_PLAYER13",{ 152,203,234,255 } },
	{ "HUD_COLOUR_NET_PLAYER14",{ 178,98,135,255 } },
	{ "HUD_COLOUR_NET_PLAYER15",{ 144,142,122,255 } },
	{ "HUD_COLOUR_NET_PLAYER16",{ 166,117,94,255 } },
	{ "HUD_COLOUR_NET_PLAYER17",{ 175,168,168,255 } },
	{ "HUD_COLOUR_NET_PLAYER18",{ 232,142,155,255 } },
	{ "HUD_COLOUR_NET_PLAYER19",{ 187,214,91,255 } },
	{ "HUD_COLOUR_NET_PLAYER20",{ 12,123,86,255 } },
	{ "HUD_COLOUR_NET_PLAYER21",{ 123,196,255,255 } },
	{ "HUD_COLOUR_NET_PLAYER22",{ 171,60,230,255 } },
	{ "HUD_COLOUR_NET_PLAYER23",{ 206,169,13,255 } },
	{ "HUD_COLOUR_NET_PLAYER24",{ 71,99,173,255 } },
	{ "HUD_COLOUR_NET_PLAYER25",{ 42,166,185,255 } },
	{ "HUD_COLOUR_NET_PLAYER26",{ 186,157,125,255 } },
	{ "HUD_COLOUR_NET_PLAYER27",{ 201,225,255,255 } },
	{ "HUD_COLOUR_NET_PLAYER28",{ 240,240,150,255 } },
	{ "HUD_COLOUR_NET_PLAYER29",{ 237,140,161,255 } },
	{ "HUD_COLOUR_NET_PLAYER30",{ 249,138,138,255 } },
	{ "HUD_COLOUR_NET_PLAYER31",{ 252,239,166,255 } },
	{ "HUD_COLOUR_NET_PLAYER32",{ 240,240,240,255 } },
	{ "HUD_COLOUR_SIMPLEBLIP_DEFAULT",{ 159,201,166,255 } },
	{ "HUD_COLOUR_MENU_BLUE",{ 140,140,140,255 } },
	{ "HUD_COLOUR_MENU_BLUE_EXTRA_DARK",{ 40,40,40,255 } },
	{ "HUD_COLOUR_MENU_YELLOW",{ 240,160,0,255 } },
	{ "HUD_COLOUR_MENU_GREY",{ 140,140,140,255 } },
	{ "HUD_COLOUR_MENU_GREY_DARK",{ 60,60,60,255 } },
	{ "HUD_COLOUR_MENU_HIGHLIGHT",{ 30,30,30,255 } },
	{ "HUD_COLOUR_MENU_STANDARD",{ 140,140,140,255 } },
	{ "HUD_COLOUR_MENU_DIMMED",{ 75,75,75,255 } },
	{ "HUD_COLOUR_MENU_EXTRA_DIMMED",{ 50,50,50,255 } },
	{ "HUD_COLOUR_BRIEF_TITLE",{ 95,95,95,255 } },
	{ "HUD_COLOUR_MID_GREY_MP",{ 100,100,100,255 } },
	{ "HUD_COLOUR_NET_PLAYER1_DARK",{ 97,40,40,255 } },
	{ "HUD_COLOUR_NET_PLAYER2_DARK",{78,55,87,255}},
	{"HUD_COLOUR_NET_PLAYER3_DARK",{ 121,40,85,255 }},
	{ "HUD_COLOUR_NET_PLAYER4_DARK",{ 114,88,73,255 } },
	{ "HUD_COLOUR_NET_PLAYER5_DARK",{ 99,65,104,255 } },
	{ "HUD_COLOUR_NET_PLAYER6_DARK",{ 107,94,60,255 } },
	{ "HUD_COLOUR_NET_PLAYER7_DARK",{ 69,89,83,255 } },
	{ "HUD_COLOUR_NET_PLAYER8_DARK",{ 61,78,42,255 } },
	{ "HUD_COLOUR_NET_PLAYER9_DARK",{ 72,63,76,255 } },
	{ "HUD_COLOUR_NET_PLAYER10_DARK",{ 53,98,95,255 } },
	{ "HUD_COLOUR_NET_PLAYER11_DARK",{ 107,98,76,255 } },
	{ "HUD_COLOUR_NET_PLAYER12_DARK",{ 117,71,40,255 } },
	{ "HUD_COLOUR_NET_PLAYER13_DARK",{ 76,101,117,255 } },
	{ "HUD_COLOUR_NET_PLAYER14_DARK",{ 65,35,47,255 } },
	{ "HUD_COLOUR_NET_PLAYER15_DARK",{ 72,71,61,255 } },
	{ "HUD_COLOUR_NET_PLAYER16_DARK",{ 85,58,47,255 } },
	{ "HUD_COLOUR_NET_PLAYER17_DARK",{ 87,84,84,255 } },
	{ "HUD_COLOUR_NET_PLAYER18_DARK",{ 116,71,77,255 } },
	{ "HUD_COLOUR_NET_PLAYER19_DARK",{ 93,107,45,255 } },
	{ "HUD_COLOUR_NET_PLAYER20_DARK",{ 6,61,43,255 } },
	{ "HUD_COLOUR_NET_PLAYER21_DARK",{ 61,98,127,255 } },
	{ "HUD_COLOUR_NET_PLAYER22_DARK",{ 85,30,115,255 } },
	{ "HUD_COLOUR_NET_PLAYER23_DARK",{ 103,84,6,255 } },
	{ "HUD_COLOUR_NET_PLAYER24_DARK",{ 35,49,86,255 } },
	{ "HUD_COLOUR_NET_PLAYER25_DARK",{ 21,83,92,255 } },
	{ "HUD_COLOUR_NET_PLAYER26_DARK",{ 93,98,62,255 } },
	{ "HUD_COLOUR_NET_PLAYER27_DARK",{ 100,112,127,255 } },
	{ "HUD_COLOUR_NET_PLAYER28_DARK",{ 120,120,75,255 } },
	{ "HUD_COLOUR_NET_PLAYER29_DARK",{ 152,76,93,255 } },
	{ "HUD_COLOUR_NET_PLAYER30_DARK",{ 124,69,69,255 } },
	{ "HUD_COLOUR_NET_PLAYER31_DARK",{ 10,43,50,255 } },
	{ "HUD_COLOUR_NET_PLAYER32_DARK",{ 95,95,10,255 } },
	{ "HUD_COLOUR_BRONZE",{ 180,130,97,255 } },
	{ "HUD_COLOUR_SILVER",{ 150,153,161,255 } },
	{ "HUD_COLOUR_GOLD",{ 214,181,99,255 } },
	{ "HUD_COLOUR_PLATINUM",{ 166,221,190,255 } },
	{ "HUD_COLOUR_GANG1",{ 29,100,153,255 } },
	{ "HUD_COLOUR_GANG2",{ 214,116,15,255 } },
	{ "HUD_COLOUR_GANG3",{ 135,125,142,255 } },
	{ "HUD_COLOUR_GANG4",{ 229,119,185,255 } },
	{ "HUD_COLOUR_SAME_CREW",{ 252,239,166,255 } },
	{ "HUD_COLOUR_FREEMODE",{ 45,110,185,255 } },
	{ "HUD_COLOUR_PAUSE_BG",{ 0,0,0,186 } },
	{ "HUD_COLOUR_FRIENDLY",{ 93,182,229,255, } },
	{ "HUD_COLOUR_ENEMY",{ 194,80,80,255 } },
	{ "HUD_COLOUR_FREEMODE_DARK",{ 22,55,92,255 } },
	{ "HUD_COLOUR_INACTIVE_MISSION",{ 154,154,154,255 } },
	{ "HUD_COLOUR_DAMAGE",{ 194,80,80,255 } },
	{ "HUD_COLOUR_PINKLIGHT",{ 252,115,201,255 } },
	{ "HUD_COLOUR_PM_MITEM_HIGHLIGHT",{ 252,177,49,255 } },
	{ "HUD_COLOUR_SCRIPT_VARIABLE",{ 0,0,0,255 } },
	{ "HUD_COLOUR_YOGA",{ 109,247,204,255 } },
	{ "HUD_COLOUR_TENNIS",{ 241,101,34,255 } },
	{ "HUD_COLOUR_GOLF",{ 214,189,97,255 } },
	{ "HUD_COLOUR_SOCIAL_CLUB",{ 234,153,28,255 } },
	{ "HUD_COLOUR_PLATFORM_BLUE",{ 11,55,123,255 } },
	{ "HUD_COLOUR_PLATFORM_GREEN",{ 146,200,62,255 } },
	{ "HUD_COLOUR_PLATFORM_GREY",{ 234,153,28,255 } },
	{ "HUD_COLOUR_FACEBOOK_BLUE",{ 66,89,148,255 } },
	{ "HUD_COLOUR_INGAME_BG",{ 0,0,0,186 } },
	{ "HUD_COLOUR_WAYPOINT",{ 164,76,242,255 } },
	{ "HUD_COLOUR_MICHAEL",{ 101,180,212,255 } },
	{ "HUD_COLOUR_FRANKLIN",{ 171,237,171,255 } },
	{ "HUD_COLOUR_TREVOR",{ 255,163,87,255 } },
	{ "HUD_COLOUR_GOLF_P2",{ 235,239,30,255 } },
	{ "HUD_COLOUR_GOLF_P3",{ 255,149,14,255 } },
	{ "HUD_COLOUR_GOLF_P4",{ 246,60,161,255 } },
	{ "HUD_COLOUR_WAYPOINTLIGHT",{210,166,249,255}},
	{"HUD_COLOUR_WAYPOINTDARK",{ 82,38,121,255 }},
	{ "HUD_COLOUR_PANEL_LIGHT",{ 0,0,0,77 } },
	{ "HUD_COLOUR_MICHAEL_DARK",{ 72,103,116,255 } },
	{ "HUD_COLOUR_FRANKLIN_DARK",{ 85,118,85,255 } },
	{ "HUD_COLOUR_TREVOR_DARK",{ 127,81,43,255 } },
	{ "HUD_COLOUR_PAUSE_DESELECT",{ 100,100,100,127 } },
	{ "HUD_COLOUR_PM_WEAPONS_LOCKED",{ 240,240,240,191 } },
	{ "HUD_COLOUR_PAUSEMAP_TINT_HALF",{ 0,0,0,215 } },
	{ "HUD_COLOUR_NORTH_BLUE_OFFICIAL",{ 0,71,133,255 } },
	{ "HUD_COLOUR_SCRIPT_VARIABLE_2",{ 0,0,0,255 } },
	{ "HUD_COLOUR_H",{ 33,118,37,255 } },
	{ "HUD_COLOUR_HDARK",{ 37,102,40,255 } },
	{ "HUD_COLOUR_T",{ 234,153,28,255 } },
	{ "HUD_COLOUR_TDARK",{ 225,140,8,255 } },
	{ "HUD_COLOUR_HSHARD",{ 20,40,0,255 } },
	{ "HUD_COLOUR_CONTROLLER_MICHAEL",{ 48,255,255,255 } },
	{ "HUD_COLOUR_CONTROLLER_FRANKLIN",{ 48,255,0,255 } },
	{ "HUD_COLOUR_CONTROLLER_TREVOR",{ 176,80,0,255 } },
	{ "HUD_COLOUR_CONTROLLER_CHOP",{ 127,0,0,255 } },
	{ "HUD_COLOUR_VIDEO_EDITOR_VIDEO",{ 53,166,224,255 } },
	{ "HUD_COLOUR_VIDEO_EDITOR_AUDIO",{ 162,79,157,255 } },
	{ "HUD_COLOUR_VIDEO_EDITOR_TEXT",{ 104,192,141,255 } },
	{ "HUD_COLOUR_HB_BLUE",{ 29,100,153,255 } },
	{ "HUD_COLOUR_HB_YELLOW",{ 234,153,28,255 } },
	{ "HUD_COLOUR_VIDEO_EDITOR_SCORE",{ 240,160,1,255 } },
	{ "HUD_COLOUR_VIDEO_EDITOR_AUDIO_FADEOUT",{ 162,79,157,255 } },
	{ "HUD_COLOUR_VIDEO_EDITOR_TEXT_FADEOUT",{ 104,192,141,255 } },
	{ "HUD_COLOUR_VIDEO_EDITOR_SCORE_FADEOUT",{ 240,160,1,255 } },
	{ "HUD_COLOUR_HEIST_BACKGROUND",{ 37,102,40,186 } },
	{ "HUD_COLOUR_VIDEO_EDITOR_AMBIENT_FADEOUT",{ 80,70,34,255 } },
};