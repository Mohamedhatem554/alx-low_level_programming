#include <stdio.h>

/**
 * main - entry point
 * @argc: int
 * @argv: string
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[1]);
	return (0);
}
