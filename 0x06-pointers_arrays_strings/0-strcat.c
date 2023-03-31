#include "main.h"
/**
 * _strcat - concatenate 2 strings
 * @dest: this is the destination pointer
 * @src: this is the source pointer
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	char string1[20];
	char string2[20];
	int i = 0;
	int j = 0;

	dest = string1;
	src = string2;

	while (string1[i] != '\0')
	{
		++dest;
		i++;
	}
	while (string2[j] != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		j++;
	}
	*dest = '\0';
	return (dest);

}
