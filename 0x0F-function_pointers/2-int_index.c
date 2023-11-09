#include "function_pointers.h"

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, x, j = 0;

	for (i = 0; i < size; i++)
	{
		x = cmp(*array);
		if (x == 1)
			j++;
		array++;
	}
	return (0);
}
