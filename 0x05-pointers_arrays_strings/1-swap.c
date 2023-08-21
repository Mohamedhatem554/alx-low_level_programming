#include <stdio.h>
#include "main.h"


/**
 * swap_int - entry point
 * @a:number to be swaped
 * @b: number to be swaped
 * Return: Nothing
*/
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
