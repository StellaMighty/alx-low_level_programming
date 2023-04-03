#include"main.h"
/**
 * *_memset - sets the value of each byte in memory
 * @s: the pointer to the memory
 * @b: the value memory is to be set to
 * @n: the number of bytes
 *
 * Return: returns a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = (s[0] - '0'); i <= n; i++)
	{
		*s = (b);
	}
	return (s);
}
