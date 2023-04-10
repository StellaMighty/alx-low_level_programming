#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - this is the main function
 * @argc: this is the counter of the arguments passed
 * @argv: this are the pointers to the arguments passed
 *
 * Return: it returns an integer
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("sum is %d\n", sum);
	return (0);
}
