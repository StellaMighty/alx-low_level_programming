#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator:the string to be printed between the strings
 * @n:the number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pstring;


	va_start(pstring, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		char *my_strings = va_arg(pstring, char*);

		printf("%s", my_strings);

		if (*my_strings == '\0')
			printf("(nil)");

		if (i < n - 1)
			printf("%s", separator);

	}
	printf("\n");
	va_end(pstring);
}
