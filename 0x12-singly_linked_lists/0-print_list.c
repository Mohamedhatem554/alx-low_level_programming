#include <stdio.h>
#include <stdlib.h>
#include "lists.h"



/**
 * print_list -  prints all the elements of a list_t list.
 * @h: header
 * Return: counter
*/
size_t print_list(const list_t *h)
{
	const list_t *p = NULL;
	int count = 0;

	p = h;
	if (p->str == NULL)
	{
		printf("[0] (nil)\n");
	}

	while (p != NULL)
	{
		if (p->str != NULL)
		printf("[%d] %s\n", p->len, p->str);
		p = p->next;
		count++;
	}
	return (count);
}
