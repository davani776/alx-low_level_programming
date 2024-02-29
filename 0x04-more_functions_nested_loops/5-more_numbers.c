#include "main.h"
/**
 *more_numbers - prints numbers from 0-14 ten times
 *
 */
void more_numbers(void)
{
	int a, c, d;

	for (d = 1; d <= 10; d++)
	{
		for (a = 0; a <= 14; a++)
		{
			c = a % 10;
			if (a > 9)
			{
				_putchar('1');
			}
			_putchar(c + '0');
		}
		_putchar('\n');
	}
}
