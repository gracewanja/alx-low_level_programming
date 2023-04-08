#include "main.h"
#include <string.h>
/**
 * _strstr - locates a substring
 * @haystack: inputs pointer to the string
 * @needle: inputs pointer to the substring
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (0);
}
