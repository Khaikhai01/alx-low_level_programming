#include "main.h"

/**
 *_puts_recursion - function that prints a string followed by new line.
 *@s: the constant string that is to be printed.
 *
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}


