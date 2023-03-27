#include "main.h"
/**
 * _strlen - finds the lenght of a string
 * @s: the string to be checked
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;) /* since the values are unknown*/
	{
		a++;
	}
	return (a);
}
