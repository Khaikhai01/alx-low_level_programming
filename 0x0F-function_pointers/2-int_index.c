#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 *int_index - returns the index of the first element
 *for which the cmp function does not return
 *@array: array parameter
 *size -  the number of elements in the array array
 *@cmp: pointer to the function to be used to compare values
 *
 *Return: -1 if no element matches
 *        -1 if size is less than or equal to 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	if (i == size)
	{
		return (-1);
	}

	return (-1);
}
