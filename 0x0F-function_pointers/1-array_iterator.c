#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - prints an array using a function
 * @array: this is the array to be printed
 * @size: this is the size of the array
 * @action: this is the pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
