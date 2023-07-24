#include "main.h"

/**
 * swap_int - swapping integers
 * @a: parameter 1
 * @b: parameter 2
 *
 * Return: no value
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
