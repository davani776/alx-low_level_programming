#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structre declaration
 * @name: store address of a character
 * @age: store float value
 * @owner: store address of a character
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
