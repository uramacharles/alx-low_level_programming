#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid -   function that frees a 2 dimensional grid
 *previously created by alloc_grid function
 * @grid: 2 dim. array to free
 * @height: input height (size)
 * Return: free'd grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
