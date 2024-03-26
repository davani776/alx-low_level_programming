#include "main.h"
/**
 * _isupper - checks ir upper case characters
 *
 * @c: character to be checked
 *
 * Return: 1 for success or 0 for faliure
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
		return (0);
}
