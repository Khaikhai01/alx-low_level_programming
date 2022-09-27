#include "main.h"

void print_times_table(int n, int i)
{

	for (n = 0; n >= 0; n++)
	{
		if (n > 15 || n < 0)
		{
			_putchar('\n');
		}
		else
		{
			for (i = 0; i = n + 1; i++)
				_putchar(n);
				_putchar(i);
		}
	}
	_putchar('\n');
	
}
