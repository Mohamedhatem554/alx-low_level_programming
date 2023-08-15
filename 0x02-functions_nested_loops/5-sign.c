#include "main.h"

/**
 * print_sign - entry point
 * @n: Number to be checked
 * Return: 1 if n positive
*/
int print_sign(int n)
{
    if (n > 0)
    {
        return (1);
    }
    else if (n < 0)
    {
        return (-1);
    }
    return (0);
}

