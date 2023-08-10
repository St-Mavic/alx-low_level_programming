#include "main.h"

/**
 * _calloc - a function that allocates memory
 * @nmemb: integer parameter
 * @size: second integer
 *
 * Return: a pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *cal;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	cal = calloc(nmemb, size);
	if (cal == NULL)
		return (NULL);
	return (cal);
}
