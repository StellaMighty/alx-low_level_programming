#include "lists.h"
#include <stdio.h>

/**
 * print_first - the constructor attribute cause it to
 * implment before the main
 */

void print_first(void) __attribute__ ((constructor));

/**
 * print_first - The string to be printed
 */

void print_first(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
