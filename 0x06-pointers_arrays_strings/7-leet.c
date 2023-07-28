#include "main.h"

/**
 * leet - encoding
 * @s: string
 *
 * Return: s
 */

char *leet(char *s)
{
	int i, j;

	char *b = "aAeEoOTtLl";
	char *c = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == b[j])
				s[i] = c[j];
		}
	}
	return (s);
}
