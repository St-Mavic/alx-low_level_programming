#include "main.h"

/**
 * _strncpy - copying strings
 * @dest: first string
 * @src: second string
 * @n: nth byte
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
