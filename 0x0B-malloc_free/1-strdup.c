#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * @str: string parameter
 *
 * Return: str or null
 */

char *_strdup(char *str)
{
	int i, len = 0;
	char *aCopy;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		len++;
	aCopy = malloc(sizeof(char) * len + 1);
	if (aCopy == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		aCopy[i] = str[i];
	return (aCopy);
}
