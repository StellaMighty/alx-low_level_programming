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
 * add_node_end - function that adds a node to the end of the list
 * @head: a double pointer to the start of the list
 *
 * @str: the value to be added to the list
 *
 * Return: returns the new node, NUll on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	list_t *last_node;


	if (str == NULL)
		return (NULL);


	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(new_node->str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	last_node = *head;

	while (last_node->next)
	{
		last_node = last_node->next;
	}
		last_node->next = new_node;

	return (new_node);
}
