#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - fn that prints a struct dog 'struct dog'
 * @d: struct dog
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: nil\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: nil");
		else
			printf("Owner: %s\n", d->owner);
	}

}
