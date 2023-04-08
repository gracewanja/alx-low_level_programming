#include "main.h"
#include <string.h>
/**
 * _strpbrk -  searches a string for any of a set of bytes
 * @s: input string success
 * @accept: accepts char
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (strchr(accept, *s) != 0)
		{
			return (s);
		}
		s++;
	}

	return (0);
}
