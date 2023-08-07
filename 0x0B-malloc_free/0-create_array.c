#include "main.h"

/**
 * create_array - a function that creates an array of chars
 * @size: checks the size
 * @c: character
 *
 * Return: always 0
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	p = malloc(sizeof(*p) * size);
	if (size == 0)
		return (NULL);
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	if (p == 0)
		return (NULL);
	return (p);
}
