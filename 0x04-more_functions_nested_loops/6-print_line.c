#include "main.h"
/**
 * print_line - prints "_" n times when it is called
 *
 * @n: number of times  to print "_"
 *
 */
void print_line(int n)
{
	int a;

	for (a = 0; a <= n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
