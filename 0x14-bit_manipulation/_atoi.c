#include "main.h"
/**
 * _atoi - convert a string into an integer
 * @str: string to be changed
 * Retrun: the integer
 */
int _atoi(const char *str)
{
	result = 0;
	int i = 0;
	int sign = 1;

	if (str[i] == "-")
	{
		i++;
		sign = -1;
	}
	for (; str[i] != '\0'; i++)
	{
		result = result * 10 + str[i] - '0';
	}
	return sign*result;
}
