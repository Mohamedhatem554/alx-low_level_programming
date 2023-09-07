#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - entry point
 * @nmemb: int
 * @size: int
 * Return: to pointer: p
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
	return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
	return (NULL);

	for (int n = 0; n < nmemb * size; n++)
		p[n] = 0;
		return (p);
}
