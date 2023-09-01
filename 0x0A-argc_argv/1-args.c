#include <stdio.h>

/**
 * main - entry point
 * @argc: int
 * @argv: string
 * Return: 0
*/
int main(int argc, char __attribute__((unused)) *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	;
	printf("%d\n", i - 1);
	return (0);
}
