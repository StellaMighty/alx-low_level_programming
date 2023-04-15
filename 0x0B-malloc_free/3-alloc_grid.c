#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - the function that allocates memory to a 2d array
 * @width: this is the row size
 * @height: is the column size
 *
 * Return: returns NULL or a pointer
 */
int **alloc_grid(int width, int height)
{
	int **arr2d;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr2d = malloc(sizeof(int *) * width);

	if (arr2d == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		arr2d[i] = malloc(sizeof(int *) * height);
		if (arr2d[i] == NULL)
		{

			for (; i >= 0; i--)
				free(arr2d[i]);
			free(arr2d);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr2d[i][j] = 0;
	}
	return (arr2d);
}
