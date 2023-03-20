#include<stdio.h>
/**
 * main - this is the entry function
 *
 * Return: always 0
 */
int main(void)
{
	char am;

	for (am = 'z'; am >= 'a'; am--)
	{
		putchar(am);
	}
	putchar('\n');
	return (0);
}
