#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delete header
 * @head: header
 * Return: new element
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int re;

	if (*head == NULL)
	return (0);
	else
	{
	temp = *head;
	re = temp->n;
	*head = (*head)->next;
	free(temp);
	temp = NULL;
	}
	return (re);

}
