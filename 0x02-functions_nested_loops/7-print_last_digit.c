#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - entry point
 * @i: number to be checked
 * Return: Lastdigit
*/
int print_last_digit(int i)
{
	int lastdigit;

	lastdigit = i % 10;

	return (lastdigit);
}
