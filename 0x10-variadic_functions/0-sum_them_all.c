#include "variadic_functions.h"
/**
 * sym_them_all - add the arguments passed to it
 * @n: store the number of arguments
 * Return: if there is a passed integer argument other than that n...
 * it will give the sum of those arguments
 */


int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	size_t i, sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(add,n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(add, int);
	}
	va_end(add);
	return (sum);
}
