#include "main.h"
#include <string.h>
/**
 * is_palindrome - checks if is an empty string
 * @s: the string to check
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	else
	{
		int len = strlen(s);

		if (*s == s[len - 1])
			return (is_palindrome(s + 1) && 1);
		else
			return (0);
	}
}
