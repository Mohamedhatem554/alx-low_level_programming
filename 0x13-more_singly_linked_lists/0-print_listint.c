#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - print all elements
 * @h: header
 * Return: Number of nodes
*/
size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}
