#include "main.h"
#include <stdlib.h>
/**
 * create_array - this function creates an array
 * @size: this value sets the size of the array
 * @c: this is the special character for the array
 *
 * Return: returns a pointer to the array or Null if unsuccesful
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str_array;

	if (size == 0)
	{
		return (NULL);
	}

	str_array = (char *)malloc(size * sizeof(char));

	if (str_array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str_array[i] = c;
	}

	return (str_array);
}
