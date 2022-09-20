#include <stdio.h>
#include "main.h"

/**
* print_array - prints  elements of array
*@a: array
*@n: number of elements
*Return: nothing
*/

void print_array(int *a, int n)
{
	int arr;

	for (arr = 0; arr < n; arr++)
	{
		if (arr != n - 1)
			printf("%d, ", a[arr]);
		else
			printf("%d", a[arr]);
	}
	putchar(10);
}
