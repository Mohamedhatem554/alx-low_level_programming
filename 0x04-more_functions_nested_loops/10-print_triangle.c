#include <stdio.h>
#include "main.h"

/**
 * print_triangle - entry point
 * @size: the size of the square
 * Return: nothing
*/
void print_triangle(int size)
{
	int i, s, t;
    int size;

    size = 6;
	if (size <= 0)
	{
		putchar('\n');
	}
	for (i = 0; i < size; i++)
    {
        for (s = 0; s < size; s++)
        {
            for (t = 0; t < s; t++)
            {
                putchar('#');
               
            }
             putchar('\n');
        }
        
    }
}
