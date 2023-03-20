#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize variable of type `struct dog`
 * @d: struct dog
 * @name: pointer to name of dog
 * @age: dog age
 * @owner: pointer to name of dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
