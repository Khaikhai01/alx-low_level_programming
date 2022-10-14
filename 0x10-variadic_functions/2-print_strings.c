#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_strings - prints the strings
 *@separator: string to be printed between the strings
 *@n: number of strings passed to the function
 *
 *Return: Always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int counter;
	char *str;
	va_list string;

	va_start(string, n);

	for (counter = 0; counter < n; counter++)
	{
		str = va_arg(string, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", str);

		if (separator != NULL)
		{
			if (counter < (n - 1))
				printf("%s", separator);
		}
	}
	va_end(string);
	putchar('\n');
}
