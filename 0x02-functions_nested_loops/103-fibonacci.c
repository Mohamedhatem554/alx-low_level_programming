#include <stdio.h>


/**
 * main - entry point
 * Return: 0 success
*/
int main(void)
{
	int i;
	unsigned long f1, f2, sum;
	float totalsum;

	f1 = 0;
	f2 = 1;

	for (i = 0; i < 100; i++)
	{
		sum = f1 + f2;

		f1 = f2;
		f2 = sum;
		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)

			totalsum += sum;

	}
	printf("%.0f\n", totalsum);

	return (0);
}

