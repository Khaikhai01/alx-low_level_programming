#include <stdio.h>
#include "main.h"

/**
* main - Entry point.
* prints alphabets in lowercase using void print_alphabet(void)
*
* Return: Always 0 (success)
*/
void print_alphabet(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
}

int main(void)
{
	print_alphabet();
	return 0;
}
