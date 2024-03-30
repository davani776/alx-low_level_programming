
#include "main.h"
/**
 * binary_to_uint - changes binary into it's unit
 * @b: a const pointer that accepts the address of the binary
 * Return: the unit number
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int num = 0;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		num <<= 1;
		if (b[i] == '1')
			num += 1;
	}
	return (num);
}
