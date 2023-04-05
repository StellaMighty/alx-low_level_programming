#include "main.h"
/**
 * _print_rev_recursion - this function prints recursively a string in reverse
 * @s: this is the string to be printed
 *
 * Return: returns void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	return;
	_putchar('\n');
}
