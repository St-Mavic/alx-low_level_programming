#include <stdio.h>
#include <stdlib.h>

/**
 * main - minimum number of coins
 * @argc: counter variable
 * @argv: string array
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int cents, mnCoins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		mnCoins++;
	}
	printf("%d\n", mnCoins);
	return (0);
}
