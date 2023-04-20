#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: the elements of the array
 * @size: the number of elements in the array
 * @cmp: this a pointer to the function to be used
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size < 0)
		return (-1);
}
