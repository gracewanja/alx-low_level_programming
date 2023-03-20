#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - print if the number is positive, zero, or negative
*
*Description: using the main function
*this program prints "programming is positive, zero, or negative"
*Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
	printf("last digit of %d is %d and is  greater than 5", n);
	}
	else if (n == 0)
	{
	printf("last digit of %d is %d and is  0", n);
	}
	else
	{
	printf("last digit of %d is %d and is  less than 6 and not 0", n);
	}
	return (0); }
