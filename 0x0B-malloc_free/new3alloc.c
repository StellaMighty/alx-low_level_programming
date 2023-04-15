#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - a pointer to a 2 dimensional array
 * @width: the width of the 2d array
 * @height: the height of the 2d array
 *
 * Return: returns a pointer on sucess and NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i, j, zer = 0;
	int **arr[width][height];

	if (width <= 0 || height <= 0)
		return NULL;
	**arr = (int **) malloc(width * sizeof(int));

	for (i = 0; i < width; i++)
	{
		arr[i] = (int*) malloc(height * sizeof(int));
		for (j = 0; j < height; j++)
		{
			arr[i][j] = zer;

		}
	}
	return (**arr);
}
