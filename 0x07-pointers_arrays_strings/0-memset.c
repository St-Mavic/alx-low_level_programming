#include "main.h"

/**
 * _memset - Function
 * @n: n parameter
 * @s: char pointer
 * @b: function parameter
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
