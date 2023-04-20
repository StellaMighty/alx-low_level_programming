#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Function that prints the name of a person
 * @name: name to be printed
 * @f: the function to print the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;

	(*f)(name);
}
