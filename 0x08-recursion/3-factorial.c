#include "main.h"

/**
 * factorial - this function returns the factorial of a number
 * @n: this is the number which is to be factorial
 *
 * Return: it returnss an int
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
