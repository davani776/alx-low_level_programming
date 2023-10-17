#include "main.h"
#include <stdio.h>
/**
 * _strlen - function to find lengh of a string
 * @st_r :- initialzie string
 * @s : string to be checked
 * return : return lengh of string
 */
int _strlen(char *s)
{
	int st_r = 0;

	while (s[st_r])
		st_r++;
	return (st_r);
}


