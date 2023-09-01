#include "main.h"

/**
 * get_endianness - checks the endianness.
 */

int get_endianness(void)
{
	unsigned int a = 1;
	char *s = (char *)&a;

	if (*s)
		return (1);
	return (0);
}
