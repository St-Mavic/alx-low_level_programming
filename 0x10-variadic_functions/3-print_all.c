#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Prints all of the arguments when specified
 * @format: specifies the necessary operations
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i;
	int j;
	char *str;
	va_list all;

	va_start(all, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(all, int));
				j = 0;
				break;
			case 'i':
				printf("%i", va_arg(all, int));
				j = 0;
				break;
			case 'f':
				printf("%f", va_arg(all, double));
				j = 0;
				break;
			case 's':
				str = va_arg(all, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				j = 0;
				break;
			default:
				j = 1;
				break;
		}
		if (format[i + 1] != '\0' && j == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(all);
}
