#include <stdio.h>
#include "main.h"

/**
*print_rev - function to print string in reverse followed by new line.
*@s: string to reverse
*Return: nothing
*/
void print_rev(char *s)
{
	int len = 0, index;

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		putchar(s[index]);

	putchar('\n');
}
