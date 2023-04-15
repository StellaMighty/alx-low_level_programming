#include"main.h"
/**
 * _isdigit - This function checks for digits between 0 and 9
 * @c: This is the value to be checked
 *
 * Return: it returns 1 if it is a digit and 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
