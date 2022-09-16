#include <stdio.h>
#include "main.h"

/**
*print_triangle - prints a triangle
*@size: size parameter of triangle
*Return: returns nothing
*/

void print_triangle(int size)
{
	int n1, n2;

	if (size > 0)
	{
		for (n1 = 1; n1 <= size; n1++)
		{
			for ((n2 = size - n1); n2 > 0; n2--)
			{
				putchar(' ');
			}

			for (n2 = 0; n2 < n1; n2++)
			{
				putchar('#');
			}

			if (n1 == size)
			{
				continue;
			}

			putchar('\n');
		}
	}
	putchar('\n');
}
