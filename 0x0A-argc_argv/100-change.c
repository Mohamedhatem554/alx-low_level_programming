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
	int total, cents;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = strtol(argv[1], NULL, 10);

	for (total = 0; cents > 0; total++)
	{
		if (cents - 25 >= 0)
			cents = cents - 25;
		else if (cents - 10 >= 0)
			cents = cents - 10;
		else if (cents - 5 >= 0)
			cents = cents - 10;
		else if (cents - 2 >= 0)
			cents = cents - 2;
		else if (cents - 1 >= 0)
		cents = cents - 1;
	}
	printf("%d\n", total);
	return (0);
}
