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
	unsigned int i;

	p = malloc(sizeof(char) * size);
	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	if (p == NULL)
		return (NULL);
	return (p);
}
