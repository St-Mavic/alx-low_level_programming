#include "main.h"
/**
 * print_most_numbers - printing some numbers
 * Return: no value
 */

void print_most_numbers(void)
{
	int z;

	for (z = 0; z < 10; z++)
	{
		if (z != 2 && z != 4)
		{
			_putchar(z + '0');
		}
	}
	_putchar('\n');
}
