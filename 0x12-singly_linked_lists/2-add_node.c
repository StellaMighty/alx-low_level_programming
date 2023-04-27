#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strlen - a function to count the lenght of a string
 * @str: string whose lenght is to be determined
 * Return: an integer
 */

int _strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}

/**
 * add_node - this adds a new node to the start of a list
 * @head: a pointer to the head pointer
 * @str: the value to be added
 * Return: a new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
