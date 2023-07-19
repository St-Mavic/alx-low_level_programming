#include "main.h"
/**
 * print_alphabet_x10 - printing alphabets 10 times
 *
 * Return: no return type
 */

void print_alphabet_x10(void)
{
	int c;
	char b;

	for (c = 1; c <= 10; c++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
