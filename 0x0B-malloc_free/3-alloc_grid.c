#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid -  a function that returns
 * a pointer to a 2 dimensional array of integers.
 *
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: NULL for failure or 0/ neg height/ width
 */
int **alloc_grid(int width, int height)
{

	int **matrix;
	int first;
	int second;

	if (width < 1)
		return (NULL);
	if (height < 1)
		return (NULL);
	matrix = malloc(height * sizeof(int *));
	if (matrix == 0)
		return (NULL);
	for (first = 0; first < height; first++)
	{
		matrix[first] = malloc(width * sizeof(int));
		if (matrix[first] == 0)
		{
			for (second = 0; second < first; second++)
				free(matrix[second]);
			free(matrix);
			return (NULL);
		}
		for (second = 0; second < width; second++)
			matrix[first][second] = 0;
	}
	return (matrix);
}
