/* Write a program to determines range char, short, int and long variables
   both signed and unsigned */

#include <stdio.h>
#include <limits.h>
#include <float.h>

static void determinesRangeVariable() {
	printf("Library limits.h\n");
	printf("The macro defined in this header, limit values of various variable types  like\n char, int, long:\n");
	printf("CHAR_BIT - define number of bits in a char: %d\n", CHAR_BIT);
	printf("SCHAR_MIN - define minimum signed char values: %d\n", SCHAR_MIN);
	printf("SCHAR_MAX - define maximum signed char values: %d\n", SCHAR_MAX);
	printf("UCHAR_MAX - define maximum unsigned char values: %#x\n", UCHAR_MAX);
	printf("CHAR_MIN - define minimum char value: %d\n", CHAR_MIN);
	printf("CHAR_MAX - define maximum char value: %d\n", CHAR_MAX);
	printf("MB_LEN_MAX - define maximum number of bytes in a multibyte character: %d\n", MB_LEN_MAX);
	printf("SHRT_MIN - define minimum signed short value: %d\n", SHRT_MIN);
	printf("SHRT_MAX - define maximum signed short value: %d\n", SHRT_MAX);
	printf("USHRT_MAX - define maximum unsigned short value: %#x\n", USHRT_MAX);
	printf("INT_MIN - define minimum signed int value: %d\n", INT_MIN);
	printf("INT_MAX - define maximum signed int value: %d\n", INT_MAX);
	printf("UINT_MAX - define maximum unsigned int value: %#x\n", UINT_MAX);
	printf("LONG_MIN - define minimum signed long value: %d\n", LONG_MIN);
	printf("LONG_MAX - define maximum signed long value: %d\n", LONG_MAX);
	printf("ULONG_MAX - define maximum unsigned long value: %#x\n", ULONG_MAX);
	printf("LLONG_MIN - define minimum signed long long value: %lldi64 - 1\n", LLONG_MIN);
	printf("LLONG_MAX - define maximum signed long long value: %lldi64\n", LLONG_MAX);
	printf("ULLONG_MAX - define maximum unsigned long long vlaue: %#llxui64\n", ULLONG_MAX);
}

static void determinesRangeVariableVer_2() {
	printf("Determine range of char, short, int, long:\n");
	printf("A/ Range of signed type data: \n");
	printf("   Minimum signed char value: %d\n", -(char)((unsigned char)~0 >> 1) - 1);
	printf("   Maximum signed char value: %d\n", (char)((unsigned char)~0 >> 1));
	printf("   Minimum signed short value: %d\n", -(short)((unsigned short)~0 >> 1) - 1);
	printf("   Maximum signed short value: %d\n", (short)((unsigned short)~0 >> 1));
	printf("   Minimum signed int value: %d\n", -(int)((unsigned int)~0 >> 1) - 1);
	printf("   Maximum signed int value: %d\n", (int)((unsigned int)~0 >> 1));
	printf("   Minimum signed long value: %ld\n", -(long)((unsigned long)~0 >> 1) - 1);
	printf("   Maximum signed long value: %ld\n", (long)((unsigned long)~0 >> 1));
	printf("B/ Range of unsigned type data: \n");
	printf("   Maximum signed char value: %d\n", (unsigned char)~0);
	printf("   Maximum signed short value: %d\n", (unsigned short)~0);
	printf("   Maximum signed int value: %u\n", (unsigned int)~0);
	printf("   Maximum signed long value: %lu\n", (unsigned long)~0);
}

