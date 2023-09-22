#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - add new elements at the beggining
 * @head: the pointer to header
 * @str: string
 * Return: new header
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int count;

	for (count = 0; str[count] != '\0'; count++)
	;
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	return (NULL);
	temp->str = strdup(str);
	temp->len = count;
	temp->next = *head;
	*head = temp;
	return (temp);
}
