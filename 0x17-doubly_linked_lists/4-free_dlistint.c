#include "lists.h"

/**
 * free_dlistint - free node
 * @head: header
 *
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;

	while (ptr)
	{
		head = head->next;
		free(ptr);
		ptr = head;

	}
}
