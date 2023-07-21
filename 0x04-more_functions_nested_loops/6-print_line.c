#include "main.h"
/**
 * print_line - printing a straight line
 * @n: accepts argument
 * Return: no value
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
			_putchar('_');
	}
	_putchar('\n');
}
