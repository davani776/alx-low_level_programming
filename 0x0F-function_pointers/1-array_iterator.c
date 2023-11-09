#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * @array: a pointer that stores the address of  an array
 * @size: size of the array
 * @action: a pointer to a function as an argument
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(*array);
		array++;
	}
}
