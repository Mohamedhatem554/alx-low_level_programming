#include <stdio.h>
#include "main.h"

/**
 * _isdigit - entry point
 * @c: number to be checked
 * Return: 1 if success
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
