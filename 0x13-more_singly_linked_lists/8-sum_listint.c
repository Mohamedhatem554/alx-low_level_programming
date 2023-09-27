#include "lists.h"

/**
 * sum_listint - get sum
 * @head: header
 * Return: sum
*/
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	if (head == NULL)
	return (0);
	ptr = head;
	while (ptr)
	{
		sum = sum + ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
