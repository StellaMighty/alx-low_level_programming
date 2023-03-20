#include<stdio.h>
/**
 * main - main entry
 *
 * Return: is always 0
 */
int main(void)
{
	int i, bi;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (bi = 'A'; bi <= 'Z'; bi++)
	{
		putchar(bi);
	}
	putchar('\n');
	return (0);
}
