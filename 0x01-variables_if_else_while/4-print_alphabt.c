#include<stdio.h>
/**
 * main - this is the main entry of the program
 *
 * Return: always 0
 */
int main(void)
{
	int bi;

	for (bi = 'a'; bi <= 'z'; bi++)
	{
		if (bi == 'e' || bi == 'q')
		{
			continue;

		}
		putchar(bi);
	}
	putchar('\n');
	return (0);
}
