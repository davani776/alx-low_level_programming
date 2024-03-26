#include "main.h"
/**
 * _isalpha - checks for a lower and upper case letters
 *
 * @c: takes an integer value
 *
 * Return: 1 if it is successsful otherwise 0
 *
 */
int _isalpha(int c)
{
	if ((c >= 65) && (c <= 122))
		return (1);
	else
		return (0);
}
