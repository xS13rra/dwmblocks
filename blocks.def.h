//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/
	{"", "/home/user/.config/dwmblocks_scripts/cpu_temp",			5,		1},
	{"", "/home/user/.config/dwmblocks_scripts/ram_usage",			5,		2},
	{"🔊", "pamixer --get-volume-human",					0,		3},
	{"💻", "light | awk -F '.' '{print $1}'",								0,		4},
	{"", "/home/user/.config/dwmblocks_scripts/bat",			60,		5},
	{"", "/home/user/.config/dwmblocks_scripts/internet",			15,		6},
	{"", "/home/user/.config/dwmblocks_scripts/traffic",			1,		7},
	{"", "/home/user/.config/dwmblocks_scripts/clock",			15,		8},
};
//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
