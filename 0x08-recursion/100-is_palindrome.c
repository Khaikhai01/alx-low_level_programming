#include "main.h"
#include <string.h>

/**
 *is_palindrome - checks if a string is palindrome.
 *@s: the character parameter
 *@ch: string to be reversed
 *Return: return 1 if s is palindrome,  if not.
 */
int is_palindrome(char *s, char ch)
{
	if ()
		return (1);
	else if (s[0] != s[len -1])
		return (0);
	else
		return (is_palindrome(s + 1, len - 2));
}
