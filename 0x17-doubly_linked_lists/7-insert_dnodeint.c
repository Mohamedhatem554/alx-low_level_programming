#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node
 * @h: header
 * @idx: index
 * @n: data
 * Return: new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = malloc(sizeof(dlistint_t)), *ptr = *h;

	if (h == NULL)
	return (NULL);
	if (idx == 0)
	return (add_dnodeint(h, n));

	while (idx > 1 && ptr && ptr->next)
	{
		ptr = ptr->next;
		idx--;
	}


	if (!tmp || !ptr || idx > 1)
	return (NULL);

	tmp->n = n;

	if (ptr->next)
	ptr->next->prev = tmp;
	tmp->prev = ptr;
	tmp->next = ptr->next;
	ptr->next = tmp;
	return (tmp);
}
