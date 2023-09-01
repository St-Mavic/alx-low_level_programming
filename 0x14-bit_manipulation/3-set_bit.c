#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: integer parameter
 * @index: a pointer that is the index, starting from 0
 * of the bit you want to set
 *
 * Return: a value
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	*n |= (1UL << index);
	return (1);

}
