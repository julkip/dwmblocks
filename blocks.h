//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"🕸", "ip addr show dev enp3s0 | awk '/inet / {print $2}' | sed 's/\\/24//'", 60, 0},
	{"💙", "LC_ALL=C top -bn 1 | awk '/^%Cpu/ {print 100 - $8\"%\"}'", 30, 0},
	{"🧠", "free -h | awk '/^Speicher/ { print $3\"/\"$2}' | sed s/i//g",	30,		0},
	{"💽", "df -h /home | tail -1 | awk '{print $3\"/\"$2}'",			30,		0},
	{"⏰", "date +\"%a %d. %b %H:%M:%S\"", 1, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
