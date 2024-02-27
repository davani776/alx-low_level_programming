#include <stdio.h>

/**
 * main - prints one digit numbers
 *
 * Return:success 0
 */

int main(void)
{
	int b = 0;

	while (b < 10)
	{
		printf("%d", b);
		b++;
	}
	putchar('\n');
	return (0);
}
