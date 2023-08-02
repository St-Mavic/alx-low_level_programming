#include "main.h"
/**
 * _puts_recursion - a recursive function
 * @s: a string parameter
 *
 * Return: no value
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
