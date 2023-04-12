#include "main.h"
#include <stdlib.h>

/**
 * _strdup - this function duplicates a string into the heap memory
 * @str: this is the string to be duplicated
 *
 * Return: returns NULL if the string is null
 */
char *_strdup(char *str)
{
	char *c_str;
	int i, j, len = 0;

	i = 0;

	if (str == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
	{
		len++;
	}

	c_str = malloc(sizeof(char) * (len + 1));

	if (c_str == NULL)
		return (NULL);

	while (*c_str)
		c_str[i++] = *str++;

	c_str[len] = '\0';

	return (c_str);

}
