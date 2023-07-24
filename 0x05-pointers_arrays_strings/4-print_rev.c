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
	a = 0;

	for (i = 0; s[i] != '\0'; i++)
		a++;
	for (i = a - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
