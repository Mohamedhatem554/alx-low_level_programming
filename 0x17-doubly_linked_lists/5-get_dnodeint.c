#include "lists.h"

/**
 * get_dnodeint_at_index - get node
 * @head: header
 * @index: index
 * Return: header
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head && index != 0)
	{
		head = head->next;
		index--;
	}
	if (head && index == 0)
		return (head);
	return (NULL);
}
