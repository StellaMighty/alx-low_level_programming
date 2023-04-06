#include "main.h"
/**
 * _strlen_recursion - the function returns the length of a string
 * @s: the string to be checked
 *
 * Return: - returns an int
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return(0);
	}
	return 1 + (_strlen_recursion(s + 1));
}
