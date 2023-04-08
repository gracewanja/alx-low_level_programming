#include "main.h"
#include <string.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: input success value
 * @accept: set of char
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int q = 0;
	char *j = s;

	while (*j != '\0' && strchr(accept, *j) != 0)
	{
		q++;
		j++;
	}

	return (q);
}
