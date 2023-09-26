#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free list
 * @head: header
*/
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head)
	{
		while (*head)
		{
			ptr = *head;
			*head = ptr->next;
			free(ptr);
		}
	}
}
