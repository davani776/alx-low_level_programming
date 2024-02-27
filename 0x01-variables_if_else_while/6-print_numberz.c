#include <stdio.h>
/**
 * main - prints int numebrs with putchar
 *
 * Return: success 0
 *
 */

int main(void)
{
	int a = 48;

	while (a <= 57)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
