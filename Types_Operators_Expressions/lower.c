/* lower: Convert  character to lower - only ASCII */

int lower(char c) {
	if (c >= 'A' && c <= 'Z') {
		return c + ('a' - 'A');
	}
	else {
		return c;
	}
}