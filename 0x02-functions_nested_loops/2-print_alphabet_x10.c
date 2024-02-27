#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times in lower case
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int num = 1;

	while (num <= 10)
	{
		char letter = 'a';
		
		for (; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		num++;
	}
}
