#include "main.h"

/**
 * _abs - entry point
 * @i: number to be checked
 * Return: abs if i is negative
*/
int _abs(int i)
{



	if (i < 0)
	{
		int abs;

		abs = i * -1;
		return (abs);
	}
	return (i);
}
