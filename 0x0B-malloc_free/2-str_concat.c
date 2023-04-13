#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - this function concats 2 strings and allocates memory
 * dynamically to the concatenated string
 * @s1: the first string
 * @s2: the second string
 *
 * Return: returns a pointer to the newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len = 0;
	char *c_str;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
		len++;

	for (j = 0; s2[j] != '\0'; j++)
		len++;

	c_str = malloc(sizeof(char) * (len + 1));

	if (c_str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		c_str[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		c_str[i + j] = s2[j];
	}

	return (c_str);
}
