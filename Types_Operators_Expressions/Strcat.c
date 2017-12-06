/* strcat: Concatenate t to end of s; s must be enough */

static void strcat(char s[], char t[]) {
	int i, j;

	i = j = 0;
	while (s[i] != '\0') {
		i++;
	}
	while ((s[i++] = t[j++]) != '\0')
		;
}