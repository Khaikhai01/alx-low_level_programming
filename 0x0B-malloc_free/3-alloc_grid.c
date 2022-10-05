#include "main.h"

/**
 *alloc_grid - function that prints a grid of integers.
 *@width: width paramenter
 *@height: height parameter
 *Retrun: 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **pt;


	if (width <= 0 || height <= 0)
		return (NULL);

	pt = (int **)malloc(height * sizeof(int *));
	if (pt == NULL)
	{
		free(pt);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		pt[i] = (int *)malloc(width * sizeof(int));
		if (pt[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(pt[j]);
			free(pt);
		}
	}
	for (i = 0; j < width; j++)
		for (j = 0; j < width; j++)
			*(pt[i] + j) = 0;

	return (pt);
}
