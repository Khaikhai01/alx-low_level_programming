#include <stdio.h>
#include "main.h"

/**
*print_rev - function to print string in reverse followed by new line.
*@s: string to reverse
*Return: nothing
*/
void print_rev(char *s)
{
	if (*s)
	{
		reverse(s + 1);
		printf("%c", *s);
	}
	putchar('\n');
}
