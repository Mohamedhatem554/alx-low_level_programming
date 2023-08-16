#include <stdio.h>

/**
 * main - entry point
 * Return: 0 success
*/
int main(void)
{
	int i;

	double f1 = 0, f2 = 1, sum;

	for (i = 0; i < 98; i++)
	{
		sum = f1 + f2;

		printf("%.0lf", sum);

		f1 = f2;
		f2 = sum;

		if (i == 97)
		{
			printf("\n");

		}
		else
		{
			printf(", ");
		}
	}
	return (0);

}
