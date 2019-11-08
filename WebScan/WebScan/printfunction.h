#include <stdio.h>
#include <windows.h>

HANDLE hConsole;
CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
WORD saved_attributes;

void resetAttributes() {
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	/* Save current attributes */
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	saved_attributes = consoleInfo.wAttributes;
}

void printBanner(void) {
	resetAttributes();
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
	printf("__          __  _     _____                 \n"
		"\\ \\        / / | |   / ____|                \n"
		" \\ \\  /\\  / /__| |__| (___   ___ __ _ _ __  \n"
		"  \\ \\/  \\/ / _ \\ '_ \\\\___ \\ / __/ _` | '_ \\ \n"
		"   \\  /\\  /  __/ |_) |___) | (_| (_| | | | |\n"
		"    \\/  \\/ \\___|_.__/_____/ \\___\\__,_|_| |_|\n"
		"    From WebScan V1.0 | Built by Group8     \n ");
	printf("\n");
	SetConsoleTextAttribute(hConsole, saved_attributes);
	printf("Welcome To WebScan!!\n");
}

void printStartScan(char *func) {
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
	printf("[*]Start Scanning %s\n", func);
	SetConsoleTextAttribute(hConsole, saved_attributes);
}

void printLog(char *log) {
	resetAttributes();
	SetConsoleTextAttribute(hConsole, saved_attributes);
	printf("[+]%s\n", log);
	SetConsoleTextAttribute(hConsole, saved_attributes);
}

void printSucc(char *succ) {
	SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
	printf("[+]%s\n", succ);
	SetConsoleTextAttribute(hConsole, saved_attributes);
}

void printSuccNoLine(char *succ, int extrainfo) {
	SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
	printf("[+]%s%ld", succ, extrainfo);
	SetConsoleTextAttribute(hConsole, saved_attributes);
}

void printSuccNoLine(char *succ) {
	SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
	printf("[+]%s", succ);
	SetConsoleTextAttribute(hConsole, saved_attributes);
}

void printAlert(char *alert) {
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
	printf("[-]%s\n", alert);
	SetConsoleTextAttribute(hConsole, saved_attributes);
}

void printAlert(char *alert, char *extrainfo) {
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
	printf("[-]%s%s\n", alert, extrainfo);
	SetConsoleTextAttribute(hConsole, saved_attributes);
}

void printAlert(char *alert, int extrainfo) {
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
	printf("[-]%s%d\n", alert, extrainfo);
	SetConsoleTextAttribute(hConsole, saved_attributes);
}

void printHelp(void)
{
	printf("How To Use: \n");
	printf(" WebScan -u <host> -l <website_language> -d <dictionary> -p [port, port range] -v -h.\n");
	printf(" \n");
	printf("Options: \n");
	printf(" -h,--help      show this help message. \n");
	printf(" -v,--version   show the version of this program.\n");
	printf(" -u,--url       scan a target or network(e.g. [http://]google.com,192.168.1.1, 192.168.1.1-192.168.1.100).\n");
	printf(" -d,--dict      use own dictionary.\n");
	printf(" -p,--port      scan appointed ports.\n");
	printf(" \n");
	printf("Example: \n");
	printf(" WebScan -u github.com -l php -p 80-500\n");
	printf(" Will scan from port 80 to port 500 on the github.com web site and scan common directories based on php.\n");
	printf(" \n");
	printf(" Page on site: https://github.com/chasenz/repo-gwu-csci_6221 \n");
	printf(" \n");
	printf(" Coded for and by the GROUP_8 team.\n");
	printf(" Copyright (c) 2019 by GROUP_8, All rights reserved.\n");
	printf(" \n");
}
