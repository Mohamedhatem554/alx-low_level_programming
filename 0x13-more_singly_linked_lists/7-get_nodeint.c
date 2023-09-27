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
	unsigned int i = 0;

	if (head == NULL)
	return (NULL);

	ptr = head;
	while (ptr && i < index)
	{
		ptr = ptr->next;
		i++;
	}

	return (ptr);
}
