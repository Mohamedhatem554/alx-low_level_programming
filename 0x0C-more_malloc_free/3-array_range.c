#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - entry point
 * @min: int
 * @max: int
 * Return: to the pointer p
*/
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
	return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
	return (NULL);

	for (i = 0; p[i] <= max; i++)
	{
	p[i] = min + i;
	}
	return (p);
}
