#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dog memory
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	free(d->name);
	frre(d->owner);
	free(d);
}
