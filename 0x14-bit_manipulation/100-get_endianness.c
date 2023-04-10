#include "main.h"

/**
 * get_endianness Checks the endianness
 *
 * Return-> 0 if a big endian and 1 if a `little endian
 */
int get_endianness(void)
{
	int x;
	char *y;

	x = 1;
	y = (char *)&x;
	return (*y);
}
