#include "hash_tables.h"

/**
 * hash_table_print - function
 * @ht: pointer to hash table structure
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
	unsigned int i = 0, temp = 0;

	if (ht == NULL)
	return;
	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i] == NULL)
		{
			i++;
			continue;
		}
		if (temp == 1)
			printf(", ");
		temp = 1;
		tmp = ht->array[i];
		while (tmp)
		{
			printf("'%s': '%s'", tmp->key, tmp->value);
			if (tmp->next != NULL)
			printf(", ");
			tmp = tmp->next;
		}
		i++;
	}
	printf("}\n");
}
