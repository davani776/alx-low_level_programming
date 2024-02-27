#include <stdio.h>
/**
 * main - prints alphabet in lower and upper case using while loop
 *
 * Return: success 0
 *
 */

int main(void)
{
	char a = 'a';
	char A = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (A <= 'Z')
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
