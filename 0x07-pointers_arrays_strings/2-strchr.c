#include "main.h"
/**
 * _strchr - this function searches for a character in a string
 * @s: this is the string in question
 * @c: this is the character
 *
 * Return: it returns a character
 */
char *_strchr(char *s, char c)
{
	int i;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
