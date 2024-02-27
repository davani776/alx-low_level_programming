#include <stdio.h>
/**
 * main - prints one digit numbers with comma
 *
 * Return:success 0
 *
 */
int main(void)
{
	int a = 48;

	while (a < 58)
	{
		if (a == 57)
		{
			putchar(a);
			a++;
		}
		else
		{
			putchar(a);
			putchar(',');
			putchar(' ');
			a++;
		}
	}
	return (0);
}
