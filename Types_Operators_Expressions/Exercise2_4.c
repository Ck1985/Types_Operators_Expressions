/* squeezeVer2: deletes each character in string s1 
   that matches any character in string s2 */

#include <stdbool.h>

static void squeezeVer2(char s1[], char s2[]) {
	int posPointer, movePointer, posPointer_2, count, len = 0;
	
	while (s2[len] != '\0') {
		++len;
	}
	for (posPointer = 0; s1[posPointer] != '\0'; ++posPointer) {
		count = 0;
		for (posPointer_2 = 0; s2[posPointer_2] != '\0'; ++posPointer_2) {
			if (s1[posPointer] == s2[posPointer_2]) {
				break;
			}
			else {
				++count;
			}			
		}
		if (count == len) {
			putchar(s1[posPointer]);
		}
	}
	printf("\n");
}