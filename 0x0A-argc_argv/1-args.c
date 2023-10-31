#include "main.h"

/**
 * main - prints number of arguments
 * @argc: number of program and argument
 * @argv: an array for the string arguments
 * Return: successfully ended
 */

int main(int argc, char **argv)
{
	(void) argv;
	(void) argc;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		printf("%d", (argc - 1));
	}
	return (0);
}
