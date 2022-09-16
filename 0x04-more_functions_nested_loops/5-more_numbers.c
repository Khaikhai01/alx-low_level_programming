#include <stdio.h>
#include "main.h"

/**
* more_numbers - prints numbers 0 to 14.
*
* Return: returns nothing
*/

void more_numbers(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 <= 14; num2++)
		{
			if (num2 > 9)
			{
				putchar((num2 / 10) + '0');
			}
			putchar((num2 % 10) + '0');
		}
		putchar(10);
	}
}
