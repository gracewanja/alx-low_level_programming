#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers
 * @a: inputs in a pointer to an array of integers
 * @size: the size of the square matrix
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, x;

	sum1 = 0;
	sum2 = 0;

	for (x = 0; x < size; x++)
	{
		sum1 += a[x * size + x];
		sum2 += a[x * size + (size - 1 - x)];
	}
	printf("%d, %d\n", sum1, sum2);
}
