#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, num = 0;

	for (;b[i] != '\0';i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		num<<=1;
		if(b[i] =='1')
			num+=1;
	}
	return (num);
}
