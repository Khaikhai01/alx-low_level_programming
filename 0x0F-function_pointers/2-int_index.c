#include <stdio.h>
#include "function_pointers.h"

/**
 *int_index - searches for an index
 *@array: array parameter to be searched
 *@size:  the number of elements in the array
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
