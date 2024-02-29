#include "main.h"
/**
 * _isdigit - checks or digit characters
 *
 * @c: character to be checked
 *
 * Return: 1 for success 0 for faliure
 *
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
