#include <stdio.h>
/**
 * main - size of buit in function
 *
 * Return:succes 0
 *
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of a char: %d byte(s)\n", sizeof(a));
	printf("size of an int: %d byte(s)\n", sizeof(b));
	printf("size of a long int: %d byte(s)\n", sizeof(c));
	printf("sizeof a long long int: %d byte(s)\n", sizeof(d));
	printf("sizeof a float: %d byte(s)\n", sizeof(e));
	return (0);
}
