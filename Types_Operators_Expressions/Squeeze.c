/* squeeze: remove all c frm s */

static void squeeze(char s[], int c) {
	int i, j;

	for (i = j = 0; s[i] != '\0'; ++i) {
		/*if (s[i] != c) {
			s[j++] = s[i];
		}*/
		// This code equivalent above
		if (s[i] != c) {
			s[j] = s[i];
			j++;
		}
	}
	s[j] = '\0';
}