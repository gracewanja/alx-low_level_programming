#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: input value
 * @src: input value
 * @n: number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int m = 0;
	int i = n;

	for (; m < i; m++)
	{
		dest[m] = src[m];
		n--;
	}
	return (dest);
}
