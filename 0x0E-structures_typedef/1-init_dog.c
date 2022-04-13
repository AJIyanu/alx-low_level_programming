#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - a funtion to initialize dog
 * @d: struct name
 * @name: name
 * @age: how old
 * @owner: wbo get am
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

