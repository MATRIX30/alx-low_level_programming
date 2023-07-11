#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* alloc_grid - allocate memory for a 2 dimensional array
* @width: width of grid
* @height: height of grid
* Return: pointer to grid
*/

int **alloc_grid(int width, int height)
{
	int **p = calloc(height, sizeof(int *));
	int i = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	if (p == NULL)
	{
		return (NULL);
	}

	for (; i < height; i++)
	{
		p[i] = calloc(width, sizeof(int));
		if (*(p + i) == NULL)
		{
			return (NULL);
		}
	}
	return (p);
}
