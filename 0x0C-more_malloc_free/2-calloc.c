#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _calloc - allocates memory for an array, using malloc
 *  @nmemb: specify the number of elements
 *  @size: size of each element
 *  Return: returns NULL If malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, total_size);

	return (ptr);
}
