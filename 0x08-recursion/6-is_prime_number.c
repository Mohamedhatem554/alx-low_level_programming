#include "main.h"

/**
 * prime - entry point
 * @a: num1
 * @b: num2
 * Return: 1 if success
*/
int prime(int a, int b)
{
	if (a == b)
	return (1);
	if (a % b == 0)
	return (0);
	return (prime(a, b + 1));
}

/**
 * is_prime_number - function that return prime number
 * @n: number
 * Return: 1 if success
*/
int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
	return (prime(n, 2));
}
