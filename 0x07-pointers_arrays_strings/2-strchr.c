#include "main.h"
/**
 * _strchr - locating a character in a string
 * @s: string parameter
 * @c: character
 * Return: null
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
