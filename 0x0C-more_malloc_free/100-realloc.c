#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _realloc - entry point
 * @ptr: void
 * @old_size: int
 * @new_size: int
 * Return: ptr
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *p;

	if (old_size < new_size || ptr == NULL)
	{
		p = malloc(new_size);
		free(ptr);
		return (p);
	}
	if (old_size == new_size)
	{
		return (ptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
