#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - entry point
 * @array: int
 * @size: size
 * @action: pointer to function
 * Return: Nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL || size <= 0)
	return;

	for (i = 0; i < size; i++)
	action(array[i]);
}
