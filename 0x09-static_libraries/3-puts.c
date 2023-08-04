#include "main.h"

/**
 * _puts - printing a string
 * @str: string parameter
 *
 * Return: no value
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
