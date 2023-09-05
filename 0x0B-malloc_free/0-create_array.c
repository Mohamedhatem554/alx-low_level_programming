#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;

	if (size != 0)
	{
		array = (char *)malloc(sizeof(char) * size);
		if (array != NULL)
		{
			for (i = 0; i < size; i++)
			array[i] = c;
		}
	}
	if (size == 0)
	return (NULL);
	return (array);
}
