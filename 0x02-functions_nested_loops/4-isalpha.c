#include"main.h"
/**
 * _isalpha - the checks for an alphabet character
 * @c is the character to be searched
 * Return: 1 if its an alphabet and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
