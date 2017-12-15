// Types_Operators_Expressions.cpp : Defines the entry point for the console application.
//

#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <limits.h>
#include "stdafx.h"
#include "Exercise2_1.c"
#include "Exercise2_2.c"
#include "Exercise2_3.c"
#include "Exercise2_4.c"
#include "Exercise2_5.c"
#include "Exercise2_6.c"
#include "Exercise2_7.c"
#include "Exercise2_8.c"
#include "atoi.c"
#include "Squeeze.c"
#include "Strcat.c"
#include "GetBits.c"

#define VTAB '\013'
#define BELL '\007'

#define VTAB_2 '\xb'
#define BELL_2 '\x7'

#define MAXLINE 1000
#define LEAF 1

char inputLine[MAXLINE];

void determinesRangeVariable(void);
void determinesRangeVariable(void);
int getInputLineVer2(char s[MAXLINE]);
int strlen(const char[]);
int atoi(char s[]);
int lower(char c);
int getStringHecxa(char inputLine[], int limit);
unsigned long convertHexToDecimal(char stringHecxa[], int lenHacxa);
void squeeze(char s[], int c);
void myStrcat(char s[], char t[]);
void squeezeVer2(char s1[], char s2[]);
int any(char s1[], char s2[]);
unsigned getbits(unsigned x, int p, int n);
unsigned int setbits(unsigned int x, int p, int n, unsigned int y);
unsigned int invert(unsigned int x, int p, int n);
unsigned short rightrot(unsigned short x, int n);

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
	/*int len;
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
	printf("%lu\n", result);*/
	/*---------------------------------------------- */

	/* ----------- Increment And Decrement Operators ------------- */
	//squeeze(s, c);
	//strcat(s, t);

	/*char s1[] = "abc fgh";
	char s2[] = "gb ";
	printf("Source String s1: %s\n", s1);
	printf("Pattern String s2: %s\n", s2);
	squeezeVer2(s1, s2);*/

	/*char s1[] = "cao xuan quy";
	char s2[] = "q";
	printf("%d\n", any(s1, s2));*/
	/* ----------------------------------------------------------- */

	/* ------------ Bitwise Opertors------------------------ */
	/*int x, y;
	x = 1;
	y = 2;

	printf("x & y = %d\n", x & y);
	printf("x && y = %d\n", x && y);
	printf("x << 2 = %d\n", x << 2);
	printf("%d\n", 077);
	printf("%d\n", 0xffff);
	printf("x & ~077 = %d\n", x & ~077);*/

	/*unsigned int result_1 = setbits(0x12341234U, 15, 8, 0x56785678U);
	printf("%u\n", result_1);
	result_1 = setbits(0x3256U, 8, 5, 0x6872U);
	printf("%u\n", result_1);*/

	/*unsigned int result = invert(0x56785678, 9, 6);
	printf("%u\n", result);*/

	printf("%u", (unsigned short)rightrot((unsigned short)0xBA47, (int)5));
	/* ----------------------------------------------------- */
}