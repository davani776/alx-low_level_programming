#include "main.h"
/**
 * print_rev - reverse a string intered
 *
 * @s: a parameter that stores string
 *
 *
 */
void print_rev(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		s++;
		n++;
	}
	while (n >= 0)
	{
		_putchar(*s);
		s--;
		n--;
	}
	_putchar('\n');
}
