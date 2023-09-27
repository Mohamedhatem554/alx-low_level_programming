#include "lists.h"

/**
 * delete_nodeint_at_index - delete node
 * @head: header
 * @index: position
 * Return: 1 if success
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head;
	listint_t *ptr2;

	if (ptr && index == 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}
	while (ptr)
	{
		if (index != 0)
		{
			ptr2 = ptr->next;
			if (ptr2)
			{
				ptr->next = ptr2->next;
				free(ptr2);
				return (1);
			}
		}
		ptr = ptr->next;
		index--;
	}
	return (-1);
}
