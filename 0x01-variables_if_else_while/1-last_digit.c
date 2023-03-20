#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - print if the number is positive, zero, or negative
*
*Description: using the main function
*this program prins "programming is positive, zero, or negative"
*Return: 0
*/
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	printf("Last digit of %d is %d ", n, l);
	if (l > 5)
	{
	printf("and is greater than 5");
	}
	if (l == 0)
	{
	printf("and is 0);
	}
	if (x < 6 && l != 0)
	{
	printf("and is less than 6 and not 0");
	}
	printf("\n");
	return (0);
}
	 

