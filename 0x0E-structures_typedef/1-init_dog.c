#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialise a variable of type 'struct dog'
 * @d: struct dog
 * @name: char string for dog name
 * @age: int for dog age
 * @owner: char string for name of dog owner
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
