#include"main.h"
/**
 * print_line -  a function that prints a line across the terminal
 *@n: the number of times to print
 * Return: void
 */
void print_line(int n)
{
	int count = 0;

	if (n > 0)
	{
		while (count <= n)
		{
			_putchar('_');
			count++;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
