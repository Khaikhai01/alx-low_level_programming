#include "main.h"

/**
*swap_int - swaps two integers' values
*@a: first integer
*@b: second integer
*Return: return nothing
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
