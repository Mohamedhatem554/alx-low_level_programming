#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - program to calculate
 * @argc: int
 * @argv: array
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int (*operate)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operate = get_op_func(argv[2]);

	if (operate == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", operate(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
