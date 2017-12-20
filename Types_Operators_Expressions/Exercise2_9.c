/* function bitCountVer2: counting 1-bits in x */

static int bitCountVer2(unsigned int x) {
	int countBit;

	for (countBit = 0; x != 0; x = x & (x - 1)) {
		++countBit;
	}
	return countBit;
}