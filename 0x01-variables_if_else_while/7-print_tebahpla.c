#include <stdio.h>
/**
 * main - prints alphabets in reverse order
 *
 * Return: success 0
 */
int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}

