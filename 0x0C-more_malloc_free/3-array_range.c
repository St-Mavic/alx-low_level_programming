#include "main.h"

/**
 * array_range - a function that creates an array of integers.
 * @min: minimum num
 * @max: maximum number
 *
 * Return: A pointer
 */

int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		arr[i] = min++;
	return (arr);
}
