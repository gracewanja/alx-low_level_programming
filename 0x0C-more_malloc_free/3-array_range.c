#include "main.h"
#include <stdlib.h>
/**
 * array_range -  creates an array of integers
 * @min: input parameters
 * @max: input parameters
 * Return: the pointer to the newly created array
 * return NULL If min > max or If malloc fails
 */

int *array_range(int min, int max)
{
	int *arr;
	int n, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
		arr[n] = min + n;

	return (arr);
}
