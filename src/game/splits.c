#ifdef __MINGW32__
#define WINVER 0x0500
#include <windows.h>
#endif
#include <stdio.h>
#include "splits.h"

int split_star = -1;
int splits[120];

void split_press (int stars) {
#ifdef __MINGW32__
	if (!splits[0]) {
		static char str[5];
		FILE *file = fopen("splits.txt", "r");
		if (file != NULL) {
			for(int i = 0; fgets(str, sizeof str, file ) != NULL; i++) {
				splits[i] = (int)atoi(str);
			}
		}
		fclose(file);
	}
#endif
	if ((splits[0]) && (splits[split_star] == stars || stars == -1 || splits[split_star] > 120)) {
		split_star++;
		split();
	}
}

void split (void) {
#ifdef __MINGW32__
	INPUT ip;
	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.wVk = 0x61; // virtual-key code for the "numpad 1" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));
#endif
}

void split_reset (void) {
	split_star = -1;
#ifdef __MINGW32__
	INPUT ip;
	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.wVk = 0x63; // virtual-key code for the "numpad 3" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));
#endif
}
