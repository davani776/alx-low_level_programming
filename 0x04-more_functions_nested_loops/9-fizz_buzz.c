#include <stdio.h>
/**i
 * main - The Fizz Buzz test
 *
 * Return: 0 for success
 */
int main(void)
{
	int i = 1;

	for (; i <= 100; i++)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
		{
			puts("FizzBuzz");
		}
		else if ((i % 3) == 0 && ((i % 5) != 0))
		{
		       puts("Fizz");
		}
		else if ((i % 5) == 0 && ((i % 3) != 0))
		{
			puts("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if ( i != 100)
		{
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
	}
	putchar('\n');
	return (0);
}
