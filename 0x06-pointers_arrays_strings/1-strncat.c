#include "main.h"
#include <string.h>
/**
 * _strncat - concatenating two strings
 * @dest: first string
 * @src: second string
 * @n: n byte
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen, i;

	destlen = strlen(dest);

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[destlen + i] = *src;
		src++;
	}
	dest[destlen + i] = '\0';
	return (dest);
}
