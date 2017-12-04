/* Program converts a string hexal into its equivalent integer value */

#include <stdio.h>
#include <math.h>

static int getStringHecxa(char inputLine[], int limit) {
	int i, c, len;

	len = 0;
	for (i = 0; i < limit - 1 && (c = getchar()) != '\n' && c != EOF; ++i) {
		if (i == 0) {
			if (c != '0') {
				printf("This number format is not hexaldecimal (Error-1)!\n");
				while ((c = getchar()) != '\n');
				return -1;
			}
			else {
				inputLine[i] = c;
				continue;
			}
		}
		else if (i == 1) {
			if (c != 'x' && c != 'X') {
				printf("This number format is not hexaldecimal (Error-2) !\n");
				while ((c = getchar()) != '\n');
				return -1;
			}
			else {
				inputLine[i] = c;
				continue;
			}
		}
		else {
			if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'F') || (c >= 'a' && c <= 'f')) {
				inputLine[i] = c;
			}
			else {
				printf("This number format is not hexaldeciam (Error-3) !\n");
				while ((c = getchar()) != '\n');
				return -1;
			}
		}
	}
	len = i;
	return len;
}

static unsigned long convertHexToDecimal(char stringHecxa[], int lenHecxa) {
	int i, power, hexDigit;
	unsigned long result;

	power = 0;
	result = 0;
	for (i = 2; i < lenHecxa; ++i) {
		power = lenHecxa - 1 - i;
		if (stringHecxa[i] >= '0' && stringHecxa[i] <= '9') {
			hexDigit = stringHecxa[i] - '0';
		}
		else if (stringHecxa[i] >= 'a' && stringHecxa[i] <= 'f') {
			hexDigit = stringHecxa[i] - 'a' + 10;
		}
		else if (stringHecxa[i] >= 'A' && stringHecxa[i] <= 'F') {
			hexDigit = stringHecxa[i] - 'A' + 10;
		}
		result = result + pow(16, power) * hexDigit;
	}
	return result;
}

