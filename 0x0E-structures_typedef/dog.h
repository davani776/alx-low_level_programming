#ifndef DOG_H
#define DOG_H
/**
 * struct dog - user defined data type for information taking
 * @name: string to store name
 * @age: int to store age
 * @owner:string
 */
struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
