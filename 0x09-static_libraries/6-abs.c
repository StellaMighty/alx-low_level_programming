#include "main.h"
/**
 * _abs - this function computes the absolute value of an integer
 * @num: this is the number to be checked for absoluteness
 *
 * Return: it returns either 0 or 1
 */

int _abs(int num)
{
	int a;

	if (num < 0)
	{
		a = num * (-1);
		return (a);
	}
	else
		return (num);
}
