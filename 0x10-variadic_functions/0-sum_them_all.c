#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - a variadic funcion that adds numbers
 * @n: counter
 * Return: sum of the arguments
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list addall;
	unsigned int i = 0;
	int sum = 0, j;

	va_start(addall, n);
	if (n == 0)
		return (0);
	for (; i < n; i++)
	{
		j = va_arg(addall, int);
		sum = sum + j;
	}
	va_end(addall);
	return (sum);
}
