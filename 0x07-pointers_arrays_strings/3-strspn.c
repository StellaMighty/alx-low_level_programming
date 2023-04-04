#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: the initial segment of
 *
 * @accept: which consist only of bytes from
 *
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int j;

	j = 0;

	for (i = 0; s[i] <= '\0'; i++)
	{
		if (s[i] == "accept")
		{
			j++;
			return (j);
		}

	}
	return (0);
}
