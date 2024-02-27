#include <stdio.h>

/**
 * main - contains the built in function while to print lower case
 *alphabets
 * Return: if it is success return 0
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
