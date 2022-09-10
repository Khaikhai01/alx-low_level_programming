#include <stdio.h>

/**
* main - prints digits from 0 to 10 using putchar twice.
*
* Return: Always(Success)
*/
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}
