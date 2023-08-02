#include "main.h"

/**
 * _print_rev_recursion - prints strings in reverse
 * @s: returns a string
 *
 * Return: no value
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
