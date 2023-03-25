#include"main.h"
/**
 * print_triangle - this function uses the character# to
 * print out a triangle
 * @size: this is the size of the triangle
 * Return: always 0
 */
void print_triangle(int size)
{
	int rows, sign, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (rows = 1; rows <= size; rows++)
		{
			for (space = size - rows; space >= 1; space--)
			{
				_putchar(' ');
			}
			for (sign = 1; sign <= rows; sign++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
