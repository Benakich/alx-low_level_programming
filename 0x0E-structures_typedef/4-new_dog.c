#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * new_dog - fn that creates a struct dog type  var new_dog
 * @name: name of dog,char
 * @age: Age of dog, int
 * @owner: owner of dog, char
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *dogptr;
	int i, j, k;
	char *n, *o;

	dogptr = malloc(sizeof(struct dog));
	if (dogptr == NULL)
		return (NULL);

	i = 0;
	while (name[i] != '\0')
		i++;
	j = 0;
	while (owner[j] != '\0')
		j++;

	n = malloc(sizeof(*name) * i + 1);
	if (n == NULL)
	{
		free(dogptr);
		return (NULL);
	}
	o = malloc(sizeof(*owner) * j + 1);
	if (o == NULL)
	{
		free(n);
		free(dogptr);
		return (NULL);
	}

	for (k = 0; k <= i; k++)
		n[k] = name[k];
	for (k = 0; k <= j; k++)
		o[k] = owner[k];

	dogptr->name = n;
	dogptr->age = age;
	dogptr->owner = o;

	return (dogptr);
}
