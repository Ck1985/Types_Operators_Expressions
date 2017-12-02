#include <stdio.h>

#define MAXLINE 1000

static int getInputLineVer2(char inputLine[MAXLINE]) {
	int i, c;

	for (i = 0; i < MAXLINE - 1; ++i) {
		c = getchar();
		if (c == '\n') {
			break;
		}
		if (c == EOF) {
			break;
		}
		inputLine[i] = c;
	}

	return 0;
}