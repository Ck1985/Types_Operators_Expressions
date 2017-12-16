/* function rightrot(x, n): that return value of integer x
   rotated to the right by n bits positions */

unsigned int baseLength(void);

static unsigned int rightrot(unsigned int x, int n) {
	unsigned int result, mask, tempX_1, tempX_2;
	unsigned int length = 0;
	length = baseLength();
	mask = (unsigned int)~0;

	tempX_1 = x << length - n;
	tempX_2 = x >> n;

	result = tempX_1 | tempX_2;

	return result;
}

static int baseLength() {
	int i;
	unsigned int v = (unsigned int)~0;
	for (i = 1; (v = (v >> 1)) > 0; ++i)
		;
	return i;
}