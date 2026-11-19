#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: the address of the two dimensional grid
 * @height: heigth of the grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int h;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	h = 0;
	while (h < height)
	{
		free(grid[h]);
		h++;
	}
	free(grid);
}
