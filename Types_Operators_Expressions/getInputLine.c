/* Copy input line into an array */

#include <stdio.h>

#define MAXLINE 1000

static void getInputLine(char inputLine[MAXLINE]) {
	int i, c;

	for (i = 0; i < MAXLINE - 1 && ((c = getchar()) != '\n') && c != EOF; ++i) {
		inputLine[i] = c;
	}
}