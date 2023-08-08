#include "main.h"
/**
 * free_grid - a function that frees a 2 dimensional grid
 * @grid: a pointer
 * @height: counter
 */

void free_grid(int **grid, int height)
{
	int a = 0;

	while (a < height)
	{
		free(grid[a]);
		a++;
	}
	free(grid);
}
