#include "main.h"
/**
 * get_endianness - check a program wether it is a big or little endian
 * Return: 0 if big endian, or 1 if it is little indian
 *
 */
int get_endianness(void)
{
	int i = 1;

	return (*((char*) & i) == 1);
}
