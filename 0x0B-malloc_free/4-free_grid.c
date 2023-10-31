#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - a function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * @grid: matrix being passed
 * @height: freeing using this variable
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int num;

	for (num = 0; num < height; num++)
		free(grid[num]);
	free(grid);
}
