#include <stdio.h>
#include <unistd.h>
/**
 * main - unix stdout fput
 *
 * Return:1 success
 *
 */
int main(void)
{
	fputs("and that piece of art is useful\" - ", stdout);
	fputs("Dora Korpar, 2015-10-19\n", stdout);
	return (1);
}
