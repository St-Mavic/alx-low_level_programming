#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - returns sum of para..
 * @n: parameter
 * Return: Always zero...
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;

	va_list add;

	va_start(add, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(add, unsigned int);
		if (n == 0)
			return (0);
	}
	va_end(add);
	return (sum);
}
