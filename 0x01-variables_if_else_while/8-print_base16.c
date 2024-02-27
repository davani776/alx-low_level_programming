#include <stdio.h>
/**
 * main - prints base 16 numbers in loweer case
 *
 * Return: success 0
 */
int main(void)
{
	int a = 48;
	char b = 'a';

	for (; a <= 57; a++)
		putchar(a);
	for (; b <= 'f'; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
