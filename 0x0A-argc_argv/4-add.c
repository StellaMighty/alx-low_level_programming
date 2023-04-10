#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: this is the counter of the arguments passed
 * @argv: this are the pointers to the arguments passed
 *
 * Return: if it contains numbers, it returns 0
 * if there are non digits, it returns 1
 */
int main(int argc, char *argv[])
{
	int i, n;
	char *j;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (1);
	}

	for (i = 1; argv[i]; i++)
	{
		n = strtol(argv[i], &j, 10);
		if (*j)
		{

			printf("Error\n");
			return (1);
		}
		else
			sum += n;

	}
	printf("%d\n", sum);
	return (0);
}
