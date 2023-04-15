#include"main.h"
/**
 * _strcat - concatenate 2 strings
 * @dest: this is the destination pointer
 * @src: this is the source pointer
 *
 * Return: returns a pointer to a string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;


	while (dest[i] != '\0')
	{
		++dest;
		i++;
	}
	while (src[j] != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		j++;
	}
	*dest = '\0';
	return (dest);

}
