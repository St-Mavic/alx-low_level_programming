#include <stdio.h>

/**
 * main - entry point
 * @argc: counter variable
 * @argv: string array
 *
 * Return: always zero
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
