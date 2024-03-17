#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print info
 * @d: a struct pointer
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	if (d->name == NULL)
		printf("Name: (nil)");
	printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", (*d).age);
	if (d->owner == NULL)
		printf("Name: (nil)");
	printf("Owner: %s\n", (*d).owner);
}
