#include "main.h"

/**
 * string_nconcat - concatenate two strings
 * @s1: first parameter
 * @s2: second parameter
 * @n: number
 *
 * Return: a pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, s1_len = 0, s2_len = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1_len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2_len++;

	concat = malloc(sizeof(char) * (s1_len + n) + 1);
	if (concat == NULL)
		return (NULL);
	if (n >= s2_len)
	{
		for (i = 0; s1[i] != '\0'; i++)
			concat[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			concat[s1_len + i] = s2[i];
		concat[s1_len + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			concat[i] = s1[i];
		for (i = 0; i < n; i++)
			concat[s1_len + i] = s2[i];
		concat[s1_len + i] = '\0';
	}
	return (concat);
}
