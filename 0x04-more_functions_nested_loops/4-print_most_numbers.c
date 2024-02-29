#include "main.h"
/**
 *print_most_numbers - prints 1 digit numbers except 2 and 4
 *
 * Return: ...
 */
void print_most_numbers(void)
{
	char c = '0';

	for (; c <= '9'; c++)
	{
		if ((c != '2') && (c != '4'))
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
