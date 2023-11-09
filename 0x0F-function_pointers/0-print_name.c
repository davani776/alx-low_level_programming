#include "function_pointers.h"
/**
 * print_name - a call function to print name
 *@name:take a name argument
 *@f: a function to pointer parameter
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
