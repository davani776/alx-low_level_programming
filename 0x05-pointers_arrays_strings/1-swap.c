#include "main.h"
/**
 * swap_int - interchange values of two inputs
 *
 * @a: swapping pointer
 *
 * @b: swapping pointer
 */
void swap_int(int *a, int *b)
{
	int n;
	
	n = *b;
	*b = *a;
	*a = n;
}
