#include "lists.h"

/**
 * insert_nodeint_at_index - insert node
 * @head: header
 * @idx: index
 * @n: position
 * Return: new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;
	listint_t *ptr2;

	while (ptr && idx > 1)
	{
		ptr = ptr->next;
		idx--;
	}

	if (ptr || (idx == 1 || idx == 0))
	{
		ptr2 = malloc(sizeof(listint_t));
		if (ptr2)
		{
			ptr2->n = n;
			if (idx == 0)
			{
				ptr2->next = *head;
				*head = ptr2;
			}
			else
			{
				ptr2->next = ptr->next;
				ptr->next = ptr2;
			}
			return (ptr2);
		}
	}
	return (NULL);
}
