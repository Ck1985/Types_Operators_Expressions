/* function any(s1, s2): return first location in string s1
   where any character in string s2 occurs or -1 if s1 
   no contains any character in string s2 */

static int any(char s1[], char s2[]) {
	int i, j, len, count;

	i = 0;
	while (s1[i] != '\0') {
		++i;
	}
	len = i;
	for (i = 0; s1[i] != '\0'; ++i) {
		count = 0;
		for (j = 0; s2[j] != '\0'; ++j) {
			if (s1[i] == s2[j]) {
				return i;
			}
		}
		++count;
	}
	if (count == len) {
		return -1;
	}
}