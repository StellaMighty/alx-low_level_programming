#include "main.h"
#include  <stdio.h>

/**
 * main - this is the main function
 * @argc: this is the count for the number of agruments
 * @argv: this is the pointer to the array of parameter passed
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
