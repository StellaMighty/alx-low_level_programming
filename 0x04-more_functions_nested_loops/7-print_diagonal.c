#include"main.h"
/**
 * print_diagonal -  a function that prints a diagonal line on screen
 * @n: the number of times the diagonal sholud be drawn
 * Return: void
 */
void print_diagonal(int n)
{
	int p;
	int r;

	if (n <= 0)
		_putchar('\n');
	for (p = 0; p < n; p++)
	{
		for (r = 0; r < p; p++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
