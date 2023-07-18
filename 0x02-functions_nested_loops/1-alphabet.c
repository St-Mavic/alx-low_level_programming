#include "main.h"
/**
 * print_alphabet - printing lower case characters
 *
 * Return: Always 0 (Successful)
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar (a);
	}
	_putchar('\n');
}
