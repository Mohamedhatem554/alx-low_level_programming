#include "lists.h"

/**
 * dlistint_len - return the number of nodes
 * @h: header node
 * Return: number of node
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t num = 0;

	while (ptr)
	{
		ptr = ptr->next;
		num++;
	}
	return (num);
}
