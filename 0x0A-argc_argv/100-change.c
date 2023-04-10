#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - this function prints the minimum number of coins 
 * 	  to make change for an amount of money
 * @argc:
 * @argv:
 *
 * Return: 
 */

int main(int argc, char *argv[])
{

	int cents;
	int changea, changeb, sum;

	cents = 10;
	changea = 0;
	changeb = 0;
	sum = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		changea = (atoi(argv[1])) / cents;
		changeb = (atoi(argv[1])) % cents;
		sum = changea  + changeb;
		printf("%d\n", sum);
	}
	return (0);
}
