#include "lists.h"

/**
 * sum_dlistint - return sum
 * @head: header
 * Return: the sum
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
