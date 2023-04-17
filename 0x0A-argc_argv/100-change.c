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

	int cents[5];
	int changea, changeb, sum;

	cents = {25, 10, 5, 2, 1};
	changea = 0;
	changeb = 0;
	sum = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (*argv[1] <= 150 || *argv[1] >= 100)
	{
		changea = (atoi(argv[1])) / cents[0];
		changeb = (atoi(argv[1])) % cents[0];
	}
	if else (argv[1] <= 25 || argv[1] >= 10)
	{
		changea = (atoi(argv[1])) / cents[1];
                changeb = (atoi(argv[1])) % cents[1];
	}
	if else (argv[1] <= 10 || argv[1] >= 2)
        {
                changea = (atoi(argv[1])) / cents[3];
                changeb = (atoi(argv[1])) % cents[3];
        }

	sum = changea  + changeb;
	printf("%d\n", sum);
	
	return (0);
}
