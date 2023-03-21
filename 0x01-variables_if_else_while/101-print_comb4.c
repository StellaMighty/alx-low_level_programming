#include <stdio.h>
#include <stdlib.h>
/**
 * main - this is the entry function
 *
 * Return: always 0
 */
int main(void)
{
	int fd, sd;

	for (fd = 0; fd <= 9 ; fd++)
	{
		for (sd = fd + 1; sd <= 9; sd++)
		{
			putchar(fd + '0');
			putchar(sd + '0');
			if (fd == 8 && sd == 9)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
