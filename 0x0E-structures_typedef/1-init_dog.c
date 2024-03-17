#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - entry point
 * @d: a pointer to a struct
 * @name: pointer for name
 * @age: pointer for age
 * @owner: pointer for owner
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
