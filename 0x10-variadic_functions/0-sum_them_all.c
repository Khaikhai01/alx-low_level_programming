#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all variables
 *@n: int parameter
 *Return: Always 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);

		if (n == 0)
		{
			return (0);
		}
	}

	va_end(args);
	return (sum);
}
