#include "main.h"


/**
 * square - square root function
 * @a: num 1
 * @b: num 2
 * Return: Square
*/
int square(int a, int b)
{
	if (b * b == a)
	return (b);
	if (b * b > a)
	return (-1);
	return (square(a, b + 1));
}

/**
 * _sqrt_recursion - square root
 * @n: square root
 * Return: square
*/
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
