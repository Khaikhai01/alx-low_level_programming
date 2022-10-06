#include "main.h"

/**
 *array_range - creates array of integers
 *@min: minimum value
 *@max: maximum value
 *
 *Return: Pointer to newly created array
 */
int *array_range(int min, int max)
{
	int i, length, *array;

	if (min > max)
		return (NULL);

	length = max - min + 1;

	array = malloc(sizeof(int) * length);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
