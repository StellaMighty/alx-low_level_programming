#include "lists.h"
#include <stdlib.h>

/**
 * free_list -  function that frees a list
 * @head: a pointer to the list
 * Return: returns void
 */


void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
