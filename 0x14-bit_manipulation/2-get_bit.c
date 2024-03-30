#include "main.h"
/**
 * get_bit - finds the bit at a specific index
 *
 * @n: a number whose bit will be checked at a specfic index
 *
 * @index: index at which bit will be checked
 *
 * Return: value of the bit or -1 incase of failure
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	check = n & div;
	if (check == div)
		return (1);
	return (0);
}
