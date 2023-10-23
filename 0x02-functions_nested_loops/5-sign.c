#include "main.h"
/**
 * print_sign - display the sign of a number
 * @n :- value to be checked
 * Return : 1 for positive or 0 for 0 and -1 for negative
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
