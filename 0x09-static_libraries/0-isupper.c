#include"main.h"
/**
 * _isupper - This function checks for the uppercase character
 * @c: the variable that is checked
 * Return: 1 if c is uppercase and 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
