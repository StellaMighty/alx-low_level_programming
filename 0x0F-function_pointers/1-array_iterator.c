#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - prints an array using a function
 * @array: this is the array to be printed
 * @size: this is the size of the array
 * @action: this is the pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	size_t i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
