#include "main.h"
/**
 * main - prints commands
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 *
 */
int main(int argc, char **argv)
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
