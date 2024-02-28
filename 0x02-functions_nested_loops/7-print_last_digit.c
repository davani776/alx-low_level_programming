#include "main.h"
/**
 * print_last_digit - give the last digit
 *
 * @n: number whose last digi willl be taken
 *
 * Return:0 if positive or -r for negative
 */
int print_last_digit(int n)
{
	int r;

	r = n % 10;
	if (n >= 0)
	{
		_putchar(r + '0');
		return (0);
	}
	else
	{
		_putchar(-r + '0');
		return (-r);
	}
	_putchar('\n');
}
