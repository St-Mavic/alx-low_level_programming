#include "main.h"
/**
 * print_number - printing numbers
 * @n: integer
 * Return: no value
 */

void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num / 10 != 0)
	{
		print_number(num / 10);
	}

	_putchar((num % 10) + '0');
}

