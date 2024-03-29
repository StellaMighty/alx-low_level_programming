#include "main.h"

/**
 * _memcpy - this function copies memory area
 *
 * @dest: this is the destination area
 * 
 * @src: this is the source
 * 
 * @n: the number of bytes
 *
 * Return: returns a pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
