#include <stdio.h>


/**
 * main - entry point
 * Return: 0 success
*/
int main(void)
{
	int i;
	unsigned long f1, f2, sum;

	f1 = 0;
	f2 = 1;
	for (i = 0; i <= 50; i++)
	{
	   sum = f1 + f2;

		printf("%lu\n", sum);


		f1 = f2;
		f2 = sum;
	}

	return (0);
}
