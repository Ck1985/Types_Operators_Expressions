/* Function lowerVer: Convert Upper into lower */

static char lowerVer2(char c) {
	 return ((c >= 'A') && (c <= 'Z')) ? (c + ('a' - 'A')) : c;
}