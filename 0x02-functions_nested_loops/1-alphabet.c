#include"main.h"
/**
 * print_alphabet - this function prints lowercase alphabets
 * Return: always 0
 */
void print_alphabet(void)
{
	char p;

	for (p = 'a'; p <= 'z'; p++)
	{
		_putchar(p);
	}
	_putchar('\n');
}
