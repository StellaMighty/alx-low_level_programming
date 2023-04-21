#include "variadic_functions.h"

/**
 * sum_them_all - sums all the elements
 * @n: these are the elements to be summed
 * Return: it returns an int or 0 on failure
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list summat;

	if (n == 0)
		return (0);

	va_start(summat, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(summat, int);
	}

	va_end(summat);
	return (sum);
}
