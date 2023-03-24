#include<stdio.h>
/**
 * main - the main function entry
 *
 * Return: void
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("fizz");
			continue;
		}
		if  (i % 5 == 0)
		{
			printf("Buzz");
			continue;
		}
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
			continue;
		}
		else
		{
			printf("%d", i);
		}
		if (i < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
