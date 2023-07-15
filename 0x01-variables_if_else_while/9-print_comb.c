#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Successful)
 */

int main(void)
{
int a;
for (a = 0; a < 10; a++)
	putchar(a + '0');
for (a = 0; a < 10; a++)
putchar(',');
for (a = 0; a < 10; a++)
putchar(' ');
putchar('\n');
return (0);
}
