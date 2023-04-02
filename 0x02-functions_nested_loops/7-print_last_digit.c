#include "main.h"
/**
 * print_last_digit - this prints out the last digit of numbers
 *
 * @num: the number to be considered
 * Return: returns an integer
 */

int print_last_digit(int num)
{
	int t;

	t = num % 10;
	if (t < 0)
		t *= -1;
	_putchar(t + '0');
	return (t);
}
