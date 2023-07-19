#include <stdio.h>
/**
 * main - finding the fibonacci of a number
 * Return: Always 0
 */

int main(void)
{
	unsigned long int num1, num2, sum;
	int i;

	num1 = 1;
	num2 = 2;
	printf("%lu, ", num1);
	for (i = 1; i < 50; i++)
	{
		printf("%lu", num2);
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;

		if (i != 49)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
