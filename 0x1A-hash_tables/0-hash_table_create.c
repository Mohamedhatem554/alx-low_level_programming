#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_create - create a hash table
 * @size: size of hash table
 * Return: the adress of new hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t = NULL;
	hash_node_t **hash_a = NULL;

	hash_a = malloc(sizeof(char *) * size);

	if (hash_a == NULL)
	{
		free(hash_a);
		return (NULL);
	}
	hash_t = malloc(sizeof(hash_table_t) * 1);

	if (hash_t == NULL)
		return (NULL);


	hash_t->size = size;
	hash_t->array = hash_a;
	return (hash_t);

}









#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    printf("%p\n", (void *)ht);
    return (EXIT_SUCCESS);
}
