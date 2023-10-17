#include "main.h"
#include <stdio.h>
/**
 *
 *
 *
 *
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


