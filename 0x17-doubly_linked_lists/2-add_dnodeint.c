#include "lists.h"

/**
 * add_dnodeint - add node at beginning
 * @head: header
 * @n: data
 * Return: new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = malloc(sizeof(dlistint_t));

	if (!tmp)
		return (NULL);

	tmp->n = n;
	tmp->prev = NULL;

	if (*head == NULL)
	{
		tmp->next = NULL;
		*head = tmp;
	}
	else
	{
	tmp->next = *head;
	if (*head)
		(*head)->prev = tmp;

	*head = tmp;
	}

	return (tmp);
}
