#include <stdio.h>
#include "function_pointers.h"

/**
 *print_name - prints the name
 *@name: name parameter
 *@f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
		putchar('\n');
	}
}
