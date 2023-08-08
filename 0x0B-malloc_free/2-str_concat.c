#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: s1 and s2;
 */

char *str_concat(char *s1, char *s2)
{
	int i, s1_len = 0, s2_len = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		s1_len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2_len++;

	concat = malloc(sizeof(char) * (s1_len + s2_len) + 1);
	if (concat == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		concat[s1_len + i] = s2[i];
	return (concat);
}
