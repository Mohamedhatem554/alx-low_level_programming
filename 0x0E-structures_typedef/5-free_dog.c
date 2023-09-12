#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - entry point
 * @d: struct
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
		free(d->name);
		if (d->owner)
		free(d->owner);
		if (d == 0)
		return;

		free(d);
	}
}
