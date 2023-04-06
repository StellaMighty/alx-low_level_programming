#include"main.h"
/**
 * _sqrt_recursion - thia function prints the squareroot
 * @n: the value to be squared
 *
 * Return: returns int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if ((n == 0) || (n == 1))
		return (n);
	return (sqrt_checker(n, 0));
}

/**
 * sqrt_checker - checks for the right squareroot value
 * @n: the first value
 * @d: the second value
 *
 * Return: it returns an int
 *
 */
int sqrt_checker(int n, int d)

    if ((d * d) == n)
        return d;


    else if ((d * d) >= n)
    {
        return (-1);
    }

    return sqrt_checker(n, (d + 1));
}
