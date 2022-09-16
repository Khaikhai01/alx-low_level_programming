#include <stdio.h>
#include "main.h"

/**
* print_numbers - function that prints numbers from 0 to 9.
*
* Return: Always 0.
*/

void print_numbers(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}

	putchar(10);
}
