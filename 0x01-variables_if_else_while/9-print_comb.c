#include<stdio.h>
/**
 * main - this is the entry function
 *
 * Return: always 0
 */
int main(void)
{
	int ba;

	for (ba = 0; ba <= 9; ba++)
	{
		putchar(ba + '0');
		if (ba == 9)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);

}
