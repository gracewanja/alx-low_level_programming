#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _isdigit - Checks if a character is a digit
 * @c: The character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 *
 * Return: The integer value of s
 */
int _atoi(char *s)
{
	int res = 0;
	int sign = 1;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}

	while (*s != '\0')
	{
		if (_isdigit(*s))
		{
			res = res * 10 + (*s - '0');
		}
		else
		{
			printf("Error\n");
			exit(98);
		}
		s++;
	}

	return (res * sign);
}

/**
 * print_number - Prints a positive integer
 * @n: The integer to print
 */
void print_number(unsigned int n)
{
	if (n / 10)
		print_number(n / 10);
	putchar((n % 10) + '0');
}

/**
 * main - Multiplies two positive numbers
 * @argc: The number of arguments
 * @argv: The arguments
 *
 * Return: 0 if successful, 98 otherwise
 */
int main(int argc, char **argv)
{
	int num1, num2, res, i, j;
	char *s;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	if (num1 < 0 || num2 < 0)
	{
		printf("Error\n");
		return (98);
	}

	s = malloc(sizeof(char) * (num1 + num2 + 1));
	if (s == NULL)
	{
		printf("Error\n");
		return (98);
	}

	for (i = 0; i < num1 + num2; i++)
	{
		s[i] = '0';
	}
	s[i] = '\0';

	for (i = num1 - 1; i >= 0; i--)
	{
		res = 0;
		for (j = num2 - 1; j >= 0; j--)
		{
			res += (argv[2][j] - '0') * (argv[1][i] - '0') + (s[i + j + 1] - '0');
			s[i + j + 1] = (res % 10) + '0';
			res /= 10;
		} s[i + j + 1] = res + '0'; }
i = 0;
while (s[i] == '0')
{
i++;
}
if (s[i] == '\0')
{
putchar('0');
}
else
{
while (s[i] != '\0')
{
putchar(s[i]);
i++;
}
}
putchar('\n');
free(s);
return (0);
}
