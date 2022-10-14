#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, x;

	va_list nums;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(nums, int);
		if (separator != NULL)
		{
			printf("%d ", x);
		}

	}
	va_end(nums);
	putchar('\n');
}
