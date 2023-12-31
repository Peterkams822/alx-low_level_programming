#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - frees your dog
 * @d: your dog
 *
 * Return: void
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
