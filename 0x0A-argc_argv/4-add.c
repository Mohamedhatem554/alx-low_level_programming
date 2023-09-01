#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: int
 * @argv: string
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int a, b, add;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add = add + strtol(argv[a], NULL, 10);
	}
	printf("%d\n", add);
	return (0);
}
