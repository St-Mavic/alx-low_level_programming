#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copy a string
 * @dest: destination
 * @src: source
 *
 * Return: dest
 */
 
char *_strcpy(char *dest, char *src)
{
	char *res = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (res);

}
