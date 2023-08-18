#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - a function that prints numbers
 * @separator: a constant para..
 * @n: integer param
 * Return: always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;

	va_list num;

	va_start(num, n);
	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(num, int));
		if (a != n - 1 && separator != NULL)
			printf("%s", separator);

	}
	va_end(num);
	printf("\n");
}
