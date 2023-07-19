#include "main.h"
/**
 * print_last_digit - printing the last digit
 * @last: returns last digit
 * Return: no return value
 */

int print_last_digit(int last)
{
	int n;

	n = last % 10;
	if (n < 0)
		n = -n;
	_putchar(n + '0');
	return (n);


}
