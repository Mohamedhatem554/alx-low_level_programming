#include "hash_tables.h"

/**
 * hash_table_delete - function
 * @ht: hash table
 * Return: nothing
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *pointer = NULL, *head = NULL;
	unsigned int i = 0;

	while (i < ht->size)
	{
		pointer = ht->array[i];
		while (pointer)
		{
		head = pointer->next;
		free(pointer->value);
		free(pointer->key);
		free(pointer);
		pointer = head;
		}

		i++;
	}
	free(ht->array);
	free(ht);

}
