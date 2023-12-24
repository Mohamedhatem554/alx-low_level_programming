#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_create - create a hash table
 * @size: size of hash table
 * Return: the adress of new hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash = malloc(sizeof(hash_table_t) * 1);

	if (hash == NULL)
	{
		return (NULL);
	}

	hash->array = malloc(sizeof(char *) * size);
	if (hash->array == NULL)
	{
		free(hash->array);
		return (NULL);
	}
	hash->size = size;
	return (hash);

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
