#include "main.h"
/**
 * main - prints number of arguments passed in the command line
 * @argc: number of arguments
 * @argv: strings of argument
 * Return: 0 for success
 */
int main(int argc, char **argv)
{
	UNUSED(**argv);

	printf("%d\n", argc - 1);
	return (0);
}
