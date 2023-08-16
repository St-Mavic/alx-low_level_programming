#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer.
 * @array: an array
 * @size: checks for the size
 * @cmp: pointer to a function
 * Return: 1 or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) == 1)
			return (a);
	}
	return (-1);
}
