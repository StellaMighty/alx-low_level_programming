#include "lists.h"
#include <stdlib.h>

/**
 * free_list -  function that frees a list
 * @head: a pointer to the list
 * Return: returns void
 */


void free_list(list_t *head)
{
	if (head != NULL)
	{
		free_list(head->next);
		if (head->str != NULL)
			free(head->str);
		free(head);
	}
}
