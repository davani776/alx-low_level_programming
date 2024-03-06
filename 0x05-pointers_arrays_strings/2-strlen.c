#include "main.h"
/**
 * _strlen - counts the length of a string
 * @s: a string
 * Return: length
 *
 */
int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		s++;
		n++;
	}
	return (n);
}
