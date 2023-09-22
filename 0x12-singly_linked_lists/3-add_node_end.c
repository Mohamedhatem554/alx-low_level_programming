#include <stdlib.h>
#include "lists.h"


/**
 * add_node_end - add node at the end
 * @head: header
 * @str: string
 * Return: new temp
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *ptr;
	int count;

	ptr = *head;
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	return (NULL);

	if (str != NULL)
	{
		for (count = 0; str[count] != '\0'; count++)
		;
		temp->str = strdup(str);
		temp->len = count;
	}
	else
	{
		temp->str = NULL;
		temp->len = 0;
	}
	temp->next = NULL;

	if (*head)
	{
	while (ptr->next != NULL)
	ptr = ptr->next;

	ptr->next = temp;
	}
	else
	*head = temp;
	return (temp);

}
