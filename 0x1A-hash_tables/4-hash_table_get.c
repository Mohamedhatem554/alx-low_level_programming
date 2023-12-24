#include "hash_tables.h"

/**
 * hash_table_get - hash table get
 * @ht: hash table
 * @key: key
 * Return: NULL if failed
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ptr = NULL;
	unsigned int i;

	if (key && ht)
	{
		i = key_index((unsigned char *) key, ht->size);
		ptr = ht->array[i];
		if (ptr == NULL)
			return (NULL);
		while (strcmp(ptr->key, key) != 0)
		{
			ptr = ptr->next;

		}
		return (ptr->value);
	}
	return (NULL);
}
