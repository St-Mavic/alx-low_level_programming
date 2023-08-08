#include "main.h"
#include <stdlib.h>

/**
 * Num - A function that keeps record of the number of words in a string
 * @s: string to evaluate
 * Return: total number of words
 */
int Num(char *s)
{
	int a = 0, i, b = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			a = 0;
		else if (a == 0)
		{
			a = 1;
			b++;
		}
	}
	return (b);
}

/**
 * **strtow - function that splits a string into words
 * @str: string parameter
 * Return: pointer to an array of strings, if successful
 *         else, NULL if function fails
 */
char **strtow(char *str)
{
	char **strings, *temp;
	int i, j, l;
	int k = 0, len = 0, words, c = 0;

	while (*(str + len))
		len++;
	words = Num(str);
	if (words == 0)
		return (NULL);

	strings = (char **) malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				l = i;
				temp = (char *) malloc(sizeof(char) * (c + 1));
				if (temp == NULL)
					return (NULL);
				while (j < l)
					*temp++ = str[j++];
				*temp = '\0';
				strings[k] = temp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			j = i;
	}
	strings[k] = NULL;
	return (strings);
}
