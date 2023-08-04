#include "main.h"

/**
 * _strspn - getting the length of substrings
 * @s: string pra
 * @accept: second paras
 * Return: value
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	char *p;

	while (*s)
	{
		p = accept;
		while (*p && *p != *s)
		{
			p++;
		}
		if (!*p)
		{
			return (i);
		}
		s++;
		i++;
	}
	return (i);
}
