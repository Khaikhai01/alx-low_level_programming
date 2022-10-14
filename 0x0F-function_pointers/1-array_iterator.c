#include <stdio.h>
#include "function_pointers.h"

/**
 *array_iterator - executes a function given as a parameter
 *on each element of an array.
 *@array: array pointer
 *@size - size of the array
 *@action: pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size; i++)
	{
		if (array != NULL && action != NULL)
		{
			action(array[i]);
		}
	}
}
