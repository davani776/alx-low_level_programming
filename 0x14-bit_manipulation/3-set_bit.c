#include "main.h"
/**
 * set_bit - change the value of a bit at a specific index to 1
 * @n: number to be seted
 * @index: index at which the bit gonna be set
 * Return: 1 for success or -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int div;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	div = 1 << index;
	*n = *n | div;
	return (1);
}
