#include "main.h"
/**
 * reverse_array - revers the elements of an array
 * @a: a pointer stores the array
 * @n: number of elements
 *
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - 1 - i] = temp;
	}
}

