#include "main.h"

/**
 *factorial - function that returns the factorial of a given number.
 *@n: integer parameter.
 *Return: returns -1 if n is lower than 0 to indicate an error.
 *	  returns factorial i n is greater than 0.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return n * factorial(n -1);
}
