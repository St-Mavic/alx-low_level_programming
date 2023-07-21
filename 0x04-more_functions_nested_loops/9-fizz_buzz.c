#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int g;

	for (g = 1; g <= 100; g++)
	{
		if (g % 3 == 0 && g % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (g % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (g % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (g == 100)
		{
			printf("%d", g);
		}
		else
			printf("%d ", g);
	}
	putchar('\n');
	return (0);

}
