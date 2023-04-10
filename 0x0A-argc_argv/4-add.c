#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: Array of argument
 *
 * Return: 0 if successful 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i, n, sum = 0;

	for (i = 1; i < argc; i++)
	{
		n = atoi(argv[i]);
		if (n == 0 && *argv[i] != '0')
		{
			printf("Error\n");
			return (1);
		}
		if (n < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += n;
	}

	printf("%d\n", sum);

	return (0);
}
