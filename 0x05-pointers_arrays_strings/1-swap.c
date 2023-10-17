#include "main.h"
/**
 * swap_int - swap a and b
 * @a : variable to be swapped and store value of b
 * @b : variable to be swapped
 * Return : 0
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
