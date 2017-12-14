/* Function setbits(x, p, n, y): returns x with n bits that begins at position p
   set to rightmost n bits of y, leaving the other bits unchanged */

static unsigned int setbits(unsigned int x, int p, int n, unsigned int y) {
	unsigned int tempX_1, tempX_2, tempX_3, mask;
	unsigned int result;

	mask = ~0;
	mask = (((mask << (32 - n)) >> (32 - n)) & y) << (33 - p - n);
	tempX_2 = mask;

	tempX_1 = (x >> (32 - p + 1)) << (32 - p + 1);

	tempX_3 = (x << (32 - (33 - p - n))) >> (32 - (33 - p - n));

	result = tempX_1 | tempX_2 | tempX_3;
	
	return result;
}
