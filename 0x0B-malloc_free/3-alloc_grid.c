#include "main.h"

/**
 * alloc_grid - a pointer to a 2 dimensional array of integers.
 * @width: int parameter
 * @height: rows of array
 *
 * Return: aray of integers
 */

int **alloc_grid(int width, int height)
{
	int a, b;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		arr[a] = malloc(sizeof(int) * width);
		if (arr[a] == NULL)
		{
			free(arr);
			for (b = 0; b <= height; b++)
				free(arr[b]);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			arr[a][b] = 0;
	}
	return (arr);
}
