#include "main.h"
/**
*_puts - outputs string
*
*@str: pointer to string
*/
void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
