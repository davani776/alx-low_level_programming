#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - length of a string
 * @s: string
 * Return: length of astring
 *
 */
int _strlen(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
		counter++;
	return (counter);
}
/**
 * _strcpy - copy a string pointed by src to dest
 * @dest: pointer to the buffer in which to copy the string
 * @src: string to be copied
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0, counter;

	while (src[len] != '\0')
		len++;
	for (counter = 0; counter < len; counter++)
		dest[counter] = src[counter];
	dest[counter] = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age:age
 * @owner: owner
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int num1, num2;
	
	num1 = _strlen(name);
	num2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char)*(num1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (num2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	_strcpy(dog->name, name);
	dog->age = age;
	_strcpy(dog->owner, owner);
	return (dog);
}




















