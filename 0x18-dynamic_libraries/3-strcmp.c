#include "main.h"
/**
 * _strcmp - compares the number of strings
 * @s1: string to be compared
 * @s2: string to be compared
 * @Return: -15, 15, 0 based on the if else staement
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (i < j)
	{
		return (-15);
	}
	else if (i > j)
	{
		return (15);
	}
	else
		return(0);
}
