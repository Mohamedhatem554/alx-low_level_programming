#include "lists.h"

/**
 * add_dnodeint_end - add node at the end
 * @head: header
 * @n: data
 * Return: new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t)), *tp = NULL;

	if (!ptr)
	return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		ptr->prev = NULL;
		*head = ptr;
	}
	else
	{
		tp = *head;
		while (tp && tp->next)
			tp = tp->next;

		tp->next = ptr;
		ptr->prev = tp;


	}
	return (ptr);

}
