#include <stddef.h>
#include "main.h"
/**
 * binary_to_uint - changes binary into it's unit
 * @b: a const pointer that accepts the address of the binary
 * Return: the unit number
 *
 */
unsigned int binary_to_uint(const char *b)
{
	int i, len = 0;
	int sum = 0;

	while (b[len] != '\0')
		len++;
	if (b == NULL)
		return (0);
	for (i = 0; i < len; i++)
	{
		if (b[i] != 0 || b[i] != 1)
			break;
		return (0);
	}
	for (i = 0; i < len; i++)
	{
		sum <<= 1;
		if (b[i] == '1')
		{
			sum += 1;
		}
	}
	return (sum);
}
