#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all arguments of the program
 * @ac: The number of arguments
 * @av: An array of pointers
 * Return: NULL
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	int sum = ac;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			sum++;
	}

	str = malloc(sizeof(char) * sum + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[k++] = av[i][j];

		str[k++] = '\n';
	}

	str[sum] = '\0';
	return (str);
}
