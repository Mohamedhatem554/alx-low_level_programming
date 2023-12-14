#include "main.h"

/**
 * add - op function
 * @a: first number
 * @b: second number
 * Return: operator number
*/
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - op function
 * @a: first number
 * @b: second number
 * Return: operator number
*/
int sub(int a, int b)
{
	return (a - b);
}
/**
 * div - op function
 * @a: first number
 * @b: second number
 * Return: operator number
*/
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a / b);

}
/**
 * mul - op function
 * @a: first number
 * @b: second number
 * Return: operator number
*/
int mul(int a, int b)
{
	return (a * b);

}
/**
 * mod - op function
 * @a: first number
 * @b: second number
 * Return: operator number
*/
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);

	}
	return (a % b);
}
