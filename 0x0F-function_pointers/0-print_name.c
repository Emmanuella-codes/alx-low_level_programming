#include "function_pointers.h"

/**
 * print_name - prints a name using function pointer
 * @name: Name to print
 * @f: Function pointer to print the name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
