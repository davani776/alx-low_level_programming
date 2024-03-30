#include "main.h"
/**
 * clear_bit - change the bit of an index to 0
 * @n: number whose bit to be set
 * @index: index of the bit to be set
 * Return: 1 for success of -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int clear_bit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	clear_bit = 1 << index;
	*n = *n & ~(clear_bit);
	return (1);
}
