#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks if a character is upper case or not
 * @c: this is th echaracter to be checked
 * Return: the value to returned is 1 if c is upper case otherwise it is 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
