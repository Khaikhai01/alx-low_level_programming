#include <stdio.h>

/**
*main - prints alphaets except e and q.
*
*Return: Always(Success)
*/
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		if (letters != 'e' && letters != 'q')
			putchar(letters);
	}

	putchar('\n');

	return (0);
}
