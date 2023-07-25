#include "main.h"

/**
 * puts_half - print half of a string
 *
 * @str: parameter
 *
 * Return: no value
 */

void puts_half(char *str)
{
	int i, n, count = 0;

	for (i = 0; str[i] != '\0'; i++)
		count++;
	n = count / 2;

	if (count % 2 == 1)
		n = ((count + 1) / 2);

	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
