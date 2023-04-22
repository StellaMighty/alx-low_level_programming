#include "variadic_functions.h"
/**
 * print_all - this function prints all types of variables
 * @format: a list of types of arguments passed
 */

void print_all(const char * const format, ...)
{
	va_list printall;

	va_start(printall, format);

	char *my_char = va_arg(printall, char*);

	switch(format)
	{
		case 'c':
			printf("%c", char);
			break;
		case 'i':
			printf("%d", va_arg(printall, int));
			break;
		case 'f':
			printf("%f", va_arg(printall, float));
			break;
		case 's':
			printf("%s", my_char);
			break;
		default :
			printf("");
	

	}
	if (char* == NULL)
        printf("(nil)");

                if (i < n - 1)
                        printf("%s", separator);
	printf("\n");
        va_end(printall);
}
