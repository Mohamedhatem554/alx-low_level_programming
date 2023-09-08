#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: int
 * @argv: string
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int a = 0, b = 0;

	if (argc > 2)
	{
		a = strtol(argv[1], NULL, 10);
		b = strtol(argv[2], NULL, 10);
		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
