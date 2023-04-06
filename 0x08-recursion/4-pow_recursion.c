#include "main.h"

/**
 * _pow_recursion - this function give the exponential of a number
 * @x: this is the number to be multiplied
 * @y: this is the power to be raised to
 *
 * Return: it returns an int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
