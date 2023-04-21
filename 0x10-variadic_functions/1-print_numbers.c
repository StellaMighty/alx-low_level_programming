#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - this functioin prints numbers
 * @separator: a pointer
 * @n: numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));

		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
