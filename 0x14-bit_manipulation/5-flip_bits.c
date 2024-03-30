#include "main.h"
/**
 * flip_bits - number bits to flipbitween two numbers
 * @n: the first number
 * @m: the second number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, bit_count = 0;
	unsigned long int num, mum = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		num = mum >> i;
		if (num & 1)
			bit_count++;
	}
	return (bit_count);
}
