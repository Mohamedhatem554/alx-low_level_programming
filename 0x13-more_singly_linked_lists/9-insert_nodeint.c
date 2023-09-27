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
	listint_t *ptr2 = malloc(sizeof(listint_t));

	if (ptr2 == NULL || ptr == NULL || *head == NULL)
	return (NULL);
	else
	{
	ptr2->n = n;
	ptr2->next = NULL;

	while (idx != 1)
	{
		ptr = ptr->next;
		idx--;
	}
	ptr2->next = ptr->next;
	ptr->next = ptr2;

	return (ptr);
	}
	return (NULL);
}
