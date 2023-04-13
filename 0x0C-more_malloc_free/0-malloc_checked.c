#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked -  allocates memory using malloc
 * @b: specifies the number of bytes to allocate using malloc
 * Return:  pointer to the allocated memory if malloc fails,status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
