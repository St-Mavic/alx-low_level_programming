#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
*/

int main(void)
{
	int limit = 4000000;
	int num1 = 1;
	int num2 = 2;
	int nextnum;
	int sum = 2;

	while (nextnum <= limit)
	{
		nextnum = num1 + num2;
		if (nextnum % 2 == 0)
			sum = sum + nextnum;
		num1 = num2;
		num2 = nextnum;
	}
	printf("%d\n", sum);
	return (0);
}
