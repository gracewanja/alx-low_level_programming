#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 * Return: the square root of n, or -1
 * if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	int b = 1;
	int result = 1;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	while (result <= n)
	{
		b++;
		result = b * b;
	}

	return ((result == n) ? b : _sqrt_recursion(n - 1));
}
