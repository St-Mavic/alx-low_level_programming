#include "main.h"

/**
 * binary_to_uint - converts a binary to an integer
 * @b: pointer to a char
 *
 * Return: a value
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int a = 0;

	if (b == NULL)
		return (0);

	while (b[a])
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
		val = val << 1;
		if (b[a] == '1')
			val += 1;
		a++;
	}
	return (val);
}
