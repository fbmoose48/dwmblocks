//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "weather.sh 03053",	1800,		0},

	{" ", "checkupdates | wc -l",	14400,		0},

	{"", "dig +short myip.opendns.com @resolver1.opendns.com",	120,		0},

	{"", "date '+%a %b %d %R'",					30,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
