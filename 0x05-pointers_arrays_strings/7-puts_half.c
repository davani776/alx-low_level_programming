#include "main.h"
/**
 *
 *
 *
 */
void puts_half(char *str)
{
	int i, j, len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	if ((len % 2) != 0)
	{
		i = (len - 1) / 2;
	}
	else
	{
		i = len / 2;
	}
	for (j = 0; j < i; j++)
	{
		_putchar(str[j + i]);
	}
}
