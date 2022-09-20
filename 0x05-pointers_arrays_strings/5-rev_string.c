#include <stdio.h>
#include "main.h"

/**
*puts2 - prints every other character
*@s: the string
*
*Return: returns nothing
*/

void puts2(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (i % 2 == 0)
			putchar(*(s + i));
		i++;
	}

	putchar(10);
}
