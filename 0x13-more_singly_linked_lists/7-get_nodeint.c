#include "lists.h"

/**
 * get_nodeint_at_index - get node
 * @head: header
 * @index: index
 * Return: ptr
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	if (head == NULL)
	return (NULL);

	ptr = head;
	for (i = 0; i < index; i++)
		ptr = ptr->next;


	return (ptr);
}
