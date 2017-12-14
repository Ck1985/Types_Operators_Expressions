/* Function invert(x, p, n): that return x with n bits that 
   begins at position p inverted, leaving the others unchanged */

static unsigned int invert(unsigned int x, int p, int n) {
	unsigned int result, tempX_1, tempX_2, tempX_3;

	tempX_1 = x >> (32 - p);
	tempX_1 = tempX_1 << (32 - p);

	tempX_2 = x << 32 - (p - 1);
	tempX_2 = tempX_2 >> 32 - n;
	tempX_2 = tempX_2 << 32 - (p - 1) - n;
	tempX_2 = ~tempX_2;
	tempX_2 = tempX_2 << p - 1;
	tempX_2 = tempX_2 >> 32 - n;
	tempX_2 = tempX_2 << 32 - (p - 1) - n;

	tempX_3 = x << p - 1 + n;
	tempX_3 = tempX_3 >> p - 1 + n;

	result = tempX_1 | tempX_2 | tempX_3;

	return result;
}