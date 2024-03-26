#include "main.h"
/**
 * _strncpy - copies string
 * @dest: destination of the copy path
 * @src: string to be copied
 * @n: size
 * Return: dest if successful
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	while (dest[i] != '\0')
	{
		dest[i] = *(dest + i);
		i++;
	}
	return (dest);
}
