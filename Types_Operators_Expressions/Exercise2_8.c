/* function rightrot(x, n): that return value of integre x
   rotated to the right by n bits positions */

static unsigned short rightrot(unsigned short x, int n) {
	int wordlength(void);
	unsigned short rbit;/* rightmost bit */

	rbit = x << (wordlength() - n);
	x = x >> n;
	x = x | rbit;

	return x;
}

static int wordlength(void)
{
	int i;
	unsigned v = (unsigned)~0;

	for (i = 1; (v = v >> 1)>0; i++)
		;
	return i;
}