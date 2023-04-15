#include"main.h"
/**
 * _islower - determines which is lowercase
 * @c: the character that is meant to be checked
 * Return: 1 if character is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
