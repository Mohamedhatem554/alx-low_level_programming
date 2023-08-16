#include <stdio.h>
#include "main.h"

/**
 * _islower - entry point
 * @c: the character to be checked
 * Return: 1 if success
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

		return (0);

}


