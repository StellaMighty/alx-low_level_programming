#include <stdio.h>
#include <stdlib.h>

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
	int i, j;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);

	}
	printf("%d\n", sum);
	return (0);
}
