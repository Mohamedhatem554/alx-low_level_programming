#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - entry point
 * @b: int
 * Return: to the pointer
*/
void *malloc_checked(unsigned int b)
{
	int *p = NULL;

	p = malloc(b);

	if (p == NULL)
	exit(98);

	return (p);
}
