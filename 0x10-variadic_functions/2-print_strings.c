#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a function that prints string
 * @separator: first parame..
 * @n: second para...
 * Return: always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char *str;

	va_list string;

	va_start(string, n);
	for (a = 0; a < n; a++)
	{
		str = va_arg(string, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (a != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
