#include "main.h"
/**
 *_strlen_recursion - counts string lengh
 *@s: string
 *Return: string length
 *
 */
int _strlen_recursion(char *s)
{
	int i = 1;

	if (!*s)
		return (0);
	else
		return (i + _strlen_recursion(s + 1));
}
