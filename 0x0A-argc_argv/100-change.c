#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum num of coins to make change for an amount of money
 * @argc: the number of arguments
 * @argv: an array containing the arguments
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int coins = 0, cents, remainder;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins += cents / 25;
	remainder = cents % 25;

	coins += remainder / 10;
	remainder = remainder % 10;

	coins += remainder / 5;
	remainder = remainder % 5;

	coins += remainder / 2;
	remainder = remainder % 2;

	coins += remainder;

	printf("%d\n", coins);
	return (0);
}

