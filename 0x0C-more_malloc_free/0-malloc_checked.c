#include "main.h"
/**
 * malloc_checked -  a function that allocates memory
 * @b: integer parameter
 *
 * Return: a pointer
 */

void *malloc_checked(unsigned int b)
{
	char *check;

	check = malloc(b);
	if (check == NULL)
		exit(98);
	else
		return (check);
}
