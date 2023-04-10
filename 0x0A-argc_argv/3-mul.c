#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - this is the main function
 * @argc: this counts the number of arguments
 * @argv: this is an array of arguments
 *
 * Return: this returns 0
 */
int main(int argc, char *argv[])
{
	int p;
	int val1;
	int val2;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	val1 = atoi(argv[1]);
	val2 = atoi(argv[2]);
	p = val1 * val2;
	printf("%d\n", p);
	return (0);
}
