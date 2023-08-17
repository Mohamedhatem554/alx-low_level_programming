#include <stdio.h>
#include "main.h"

/**
 * _isupper - entry point
 * @c: number to be checked
 * Return: 1 if success
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}