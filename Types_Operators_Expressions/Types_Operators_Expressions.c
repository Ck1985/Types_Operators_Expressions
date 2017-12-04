// Types_Operators_Expressions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdbool.h>
#include "Exercise2_1.c"
#include "Exercise2_2.c"
#include "Exercise2_3.c"
#include "atoi.c"

#define VTAB '\013'
#define BELL '\007'

#define VTAB_2 '\xb'
#define BELL_2 '\x7'

#define MAXLINE 1000
#define LEAF 1
//#define YES 1
//#define NO 0

char inputLine[MAXLINE];

void determinesRangeVariable(void);
void determinesRangeVariable(void);
int getInputLineVer2(char s[MAXLINE]);
int strlen(const char[]);
int atoi(char s[]);
int lower(char c);
int getStringHecxa(char inputLine[], int limit);
unsigned long convertHexToDecimal(char stringHecxa[], int lenHacxa);

int main()
{
	/* ----------------------------- */
	//determinesRangeVariable();
	//determinesRangeVariableVer_2();
	/* ----------------------------- */

	/* ----------- Constants ----------- */
	//char line[MAXLINE + 1];
	//int days[31 + 28 + LEAF + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31];
	//enum boolean { NO, YES };
	//enum escapes {BELL_3 = '\a', BACKSPACE = '\b', TAB = '\t', NEWLINE = '\n', VTAB_3 = '\v', RETURN = '\r'};
	//enum months {JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};
	/*---------------------------------- */

	/* ---------Declarations--------- */
	//int lower, upper, step;
	//char c, line[1000];
	/*int lower;
	int upper;
	int step;
	char c;
	char line[1000];
	char esc = '\\';
	int i = 0;
	int limit = MAXLINE + 1;
	float eps = 1.0e-5;
	const double e = 2.71828182845905;
	const char msg[] = "warnings: ";*/
	/* ------------------------------ */

	/* ------------ Arithmetic Operators ----------- */
	/*int year = 1999;
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
		printf("%d is a leaf year\n", year);
	}
	else {
		printf("%d is not a leaf year\n", year);
	}

	char inputLine[MAXLINE];
	getInputLineVer2(inputLine);*/
	/* --------------------------------------------- */

	/* -------------- Type Conversion -------------- */
	int len;
	while (true) {
		len = getStringHecxa(inputLine, MAXLINE);
		if (len == -1) {
			continue;
		}
		else {
			printf("%d\n", len);
			break;
		}
	}

	unsigned long result = convertHexToDecimal(inputLine, len);
	printf("%lu\n", result);
	/*---------------------------------------------- */
	return 0;
}

/*int mgetline(char s[], int lim)
{
	int c, i;

	for (i = 0; i<lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';

	return i;
}

int htoi(char s[])
{
	int hexdigit, i, inhex, n;
	i = 0;
	if (s[i] == '0')
	{
		++i;
		if (s[i] == 'x' || s[i] == 'X')
			++i;
	}

	n = 0;
	inhex = YES;

	for (; inhex == YES; ++i)
	{
		if (s[i] >= '0' && s[i] <= '9')
			hexdigit = s[i] - '0';
		else if (s[i] >= 'a' && s[i] <= 'f')
			hexdigit = s[i] - 'a' + 10;
		else if (s[i] >= 'A' && s[i] <= 'F')
			hexdigit = s[i] - 'A' + 10;
		else
			inhex = NO;

		if (inhex == YES)
			n = 16 * n + hexdigit;
	}
	return n;
}*/