#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 */
void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			int c, d, e;

			c = a * b;
			d = c / 10;
			e = c % 10;
			if (c >= 10)
			{
				_putchar(d + '0');
				_putchar(e + '0');
				if ((a != 9) || (b != 9))
				{
					_putchar(',');
					_putchar(' ');
							}
			}
			else
			{
				_putchar(c + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
