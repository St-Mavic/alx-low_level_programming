#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adding numbers
 * @argc: counter
 * @argv: string array
 *
 * Return: integer
 */

int main(int argc, char *argv[])
{
	int a, b, sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error");
				return (1);
			}
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
