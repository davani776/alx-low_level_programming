#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory where is stored
 * @src: memory where to copy from
 * @n: number of byted to copy
 * Return: copied memory dest if successful
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		if (src[i] == 6)
		{
			dest[i] = src[i + 1];
		}
		else
		{
			dest[i] = src[i];
		}
		i++;
	}
	return (dest);
}
