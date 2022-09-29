#include "main.h"

/**
 *_pow_recursion - function that returns the value of x raise to the power of y
 *@x: the floating point base value
 *@y: the floating point power value
 *Return: returns the result of raising x to the power y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
