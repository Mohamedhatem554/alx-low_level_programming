#include "hash_tables.h"

/**
 * hash_table_set - hash table insert
 * @ht: hash table
 * @key: key
 * @value: the value
 * Return: 1 if success
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp = NULL, *nody = NULL;
	unsigned long int i;

	if (!ht || !key || !value || !*key)
	return (0);

	i = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[i];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}

	nody = malloc(sizeof(hash_node_t));

	if (nody == NULL)
	{
		free(nody);
		return (0);
	}

	nody->key = strdup(key);
	nody->value = strdup(value);
	nody->next = ht->array[i];
	ht->array[i] = nody;
	return (1);
}
