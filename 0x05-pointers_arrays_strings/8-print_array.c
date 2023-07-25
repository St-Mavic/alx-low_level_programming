#include "main.h"
#include <stdio.h>

/**
 * print_array - elements of array
 * @a: pointer to an arry
 * @n: parameter
 *
 * Return: no value
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
