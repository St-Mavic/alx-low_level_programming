#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always(0) Success
 */
int main(void)
{
	int a = 0;
	int b = 0;

	while (a < 100)
	{
		b = a + 1;
		while (b < 100)
		{
		putchar((a / 10) + '0');
		putchar((a % 10) + '0');
		putchar(' ');
		putchar((b / 10) + '0');
		putchar((b % 10) + '0');
		if (a + b < 197)
		{
		putchar(',');
		putchar(' ');
		}
		b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
