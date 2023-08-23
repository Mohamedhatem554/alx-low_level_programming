#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Return: 0 if success
*/
int main(void)
{
	int N = 10;
	int i = 0;

	int randomizer = 0;

	srand((unsigned int)(time(NULL)));


	char numbers[] = "0123456789";

	char lower[] = "abcdefghijklmnoqprstuvwyzx";

	char UPPER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";

	char symbols[] = "!@#$^&*?";

	char password[N];

	randomizer = rand() % 4;

	for (i = 0; i < N; i++) {

		if (randomizer == 1) {
			password[i] = numbers[rand() % 10];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 2) {
			password[i] = symbols[rand() % 8];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 3) {
			password[i] = UPPER[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else {
			password[i] = lower[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
	}
	return (0);
}