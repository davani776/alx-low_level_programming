#include "variadic_functions.h"
/**
 * print_numbers - a variadic function that display it's arguments
 * @separator: store the address of an argument to use it after every
 *argument
 * @n: number of arguments to be computed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print;
	size_t i;

	if (*separator == '\0')
	{
		return;
	}
	va_start(print, n);
	for (i = 0; i < n; i++)
	{
		int num;

		num = va_arg(print, int);
		_putchar(num + '0');
		if (i == n - 1)
			_putchar('\n');
		else
		{
			_putchar(*separator);
			_putchar(' ');
		}
	}
	va_end(print);
}
