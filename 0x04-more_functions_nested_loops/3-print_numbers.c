#include "main.h"
/**
 * print_numbers - print 1 digit numebrs
 *
 */
void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
