#include "main.h"
/**
 * main - prints name of program
 * @argc:number of commands
 * @argv: string command
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
