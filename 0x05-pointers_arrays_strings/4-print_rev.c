#include "main.h"
#include <string.h>

/**
 * print_rev - printing strings in revers
 * @s: string parameter
 *
 * Return: no value
 */

void print_rev(char *s)
{
	int i, a;
	a = strlen(s);

	for ( i = a - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
