#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - entry point
 * @width: int
 * @height: int
 * Return: newarr
*/
int **alloc_grid(int width, int height)
{
	int **newarr;
	int i, j;

	if (width <= 0)
	return (NULL);
	if (height <= 0)
	return (NULL);

	newarr = (int **)malloc(sizeof(int *) * height);
	if (newarr == NULL)
	return (NULL);

	for (i = 0; i < height; i++)
	{
		newarr[i] = (int **)malloc(sizeof(int) * width);
		if (newarr[i] == NULL)
		{
			for (i -= 1; i >= 0; i--)
			free(newarr[i]);
			free(newarr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			newarr[i][j] = 0;
		}
	}
	return(newarr);
}
