#include "main.h"
#include <stdio.h>
/**
 * _strlen - function to find lengh of a string
 * @string_len :- initialzie string
 * @s : string to be checked
 * return : return lengh of string
 */
int _strlen(char *s)
{
	int string_len = 0;

	while (s[string_len])
	{
		string_len++;
	}
	return (string_len);
}


