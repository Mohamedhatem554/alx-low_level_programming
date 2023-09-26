#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add node
 * @head: header
 * @n: element
 * Return: new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = NULL, *temp = malloc(sizeof(listint_t));

	if (!temp)
	return (NULL);

	ptr = *head;
	if (ptr)
	{
	while (ptr->next != NULL)
	ptr = ptr->next;
	}

	temp->n = n;
	temp->next = NULL;

	if (ptr)
	{
	ptr->next = temp;
	}
	else
	*head = temp;

	return (temp);
}
