#include"main.h"
/**
 * more_numbers - This function prints 10 times of numbers
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int p;

	for (i = 1; i <= 10; i++)
	{
		for (p = 0; p <= 14; p++)
		{
			if (p >= 10)
				_putchar('1');
			_putchar(p % 10 + '0');
		}
		_putchar('\n');
	}
}
