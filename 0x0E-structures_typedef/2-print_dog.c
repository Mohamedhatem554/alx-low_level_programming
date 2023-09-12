#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - entry point
 * @d: struct
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
				else
				printf("Name: (nil)\n");


				printf("Age: %f\n", d->age);

				printf("Age: (nil)\n");

				if (d->owner)
				printf("Owner: %s\n", d->owner);
				else
				printf("Owner: (nil)\n");
	}
}
