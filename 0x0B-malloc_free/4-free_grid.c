#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* free_grid - function to free a grid
* @grid: grid to be freed
* @height: height of grid
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
