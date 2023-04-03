#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: Returns a pointer to the memory area
 * @b: input value
 * @n: input value
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char* p = s;
	while (n--) 
	{
		*p++ = b;
	}
	_putchar('\n');
	return s;
}
