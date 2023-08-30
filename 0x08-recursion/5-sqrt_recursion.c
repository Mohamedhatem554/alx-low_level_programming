#include "main.h"


/**
 * sqrt2 - square root function
 * @a: num 1
 * @b: num 2
 * Return: Square
*/
int sqrt2(int a, int b)
{
	if (b * b == a)
	return (b);
	if (b * b > a)
	return (-1);
	return (sqrt2(a, b + 1));
}

/**
 * _sqrt_recursion - square root
 * @n: square root
 * Return: square
*/
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
