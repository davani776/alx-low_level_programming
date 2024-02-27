#include "main.h"

/**
 * _islower - checks if an input is lower case letter or not
 *
 * @c:the character to be printed that accepts integer value
 *
 *Return: 1 if it is successful or 0 if it is not
 *
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
}
