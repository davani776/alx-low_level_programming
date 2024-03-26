#include "variadic_functions.h"
/**
 * print_strings - print a variadic function
 * @separator: comma
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list print;
	size_t i;
	char *str;

	if (*separator == '\0')
		return;
	va_start(print, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(print, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != n - 1)
			printf("%s ", separator);
	}
	printf("\n");
	va_end(print);
}
