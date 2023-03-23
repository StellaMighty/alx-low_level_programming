#include"main.h"
/**
 * print_line -  a function that prints a line across the terminal
 *@n: the number of times to print
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
