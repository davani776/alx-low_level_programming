#include <stdio.h>
/**
 * main - print aa letters except q and e
 *
 * Return: success 0
 *
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if ((a == 'q') || (a == 'e'))
			a++;
		else
		{
			putchar(a);
			a++;
		}
	}
	putchar('\n');
	return (0);
}
