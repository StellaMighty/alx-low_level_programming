#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - this functioin prints numbers
 * @separator: a pointer
 * @n: numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	if (*separator == '\0')
		return;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
