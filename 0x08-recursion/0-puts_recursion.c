#include "main.h"
/**
 * _puts_recursion - this function prints a string recursively
 * @s: the string to be printed out
 *
 * Return: always 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);

}
