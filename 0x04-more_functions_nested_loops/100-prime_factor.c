#include<stdio.h>
#include"main.h"
/**
 * main - prints the largest prime factor of 612852475143
 * Return: always 0
 */
int main(void)
{
	unsigned long int p, n = 612852475143;

	for (p = 3; p < 782849; p = p + 2)
	{
		while ((n % p == 0) && (n != p))
			n = n / p;
	}
	printf("%lu\n", n);
	return (0);
}
