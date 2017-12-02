// Types_Operators_Expressions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Exercise2_1.c"
#include "Exercise2_2.c"

#define VTAB '\013'
#define BELL '\007'

#define VTAB_2 '\xb'
#define BELL_2 '\x7'

#define MAXLINE 1000
#define LEAF 1

void determinesRangeVariable(void);
void determinesRangeVariable(void);
int getInputLineVer2(char s[MAXLINE]);
int strlen(const char[]);

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
	int lower;
	int upper;
	int step;
	char c;
	char line[1000];
	char esc = '\\';
	int i = 0;
	int limit = MAXLINE + 1;
	float eps = 1.0e-5;
	const double e = 2.71828182845905;
	const char msg[] = "warnings: ";
	/* ------------------------------ */

	/* ------------ Arithmetic Operators ----------- */
	int year = 1999;
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
		printf("%d is a leaf year\n", year);
	}
	else {
		printf("%d is not a leaf year\n", year);
	}

	char inputLine[MAXLINE];
	getInputLineVer2(inputLine);
	/* --------------------------------------------- */

	/* -------------- Type Conversion -------------- */

	/*---------------------------------------------- */
	return 0;
}