#include "main.h"
#include <stdio.h>
/**
 * times_table - printing times table
 *
 * Return: no value
 */

void times_table(void)
{
	int g, h;
	int mult;

	for (g = 0; g <= 9; g++)
	{
		for (h = 0; h < 10; h++)
		{
			mult = g * h;

			if (h == 0)
			printf("%d, ", mult);
			else
			{
				printf("%2d", mult);
					if (h != 9)
						printf(", ");
			}
		}
		printf("\n");
	}
}
