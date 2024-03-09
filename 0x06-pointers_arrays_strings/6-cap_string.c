#include "main.h"
/**
 *
 *
 *
 *
 *
 */
char *cap_string(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
	if ((n[i] >= 'a') && (n[i] <= 'z'))
	{

		if ((n[i - 1] = ' ') || (n[i - 1]  = '\n'))
		{
			n[i] = n[i] - 32;
		}
	}
	i++;
	}
	return (n);
}
