#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - entry point
 * @size: int
 * @array: pointer to int
 * @cmp: pointer to function
 * Return: 1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
				return (i);
			}
		}
	}

	return (-1);
}
