#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add the node at the beggining
 * @head: header
 * @n: the element
 * Return: header with new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));
	
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	if (!head)
	return (NULL);
	return (*head);

}
