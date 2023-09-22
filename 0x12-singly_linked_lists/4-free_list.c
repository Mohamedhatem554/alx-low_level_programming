#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free list
 * @head: header
*/
void free_list(list_t *head)
{
	list_t *ptr;
	int i;

	for (i = 0; head != NULL; i++)
	{
		ptr = head->next;
	free(head->str);
	free(head);
	head = ptr;
	}
}
