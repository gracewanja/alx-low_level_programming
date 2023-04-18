#include <stdio.h>

#define ABS(x) ((x < 0) ? (-x) : (x))

int main(void)
{
	int x = -5;
	int y = 10;

	printf("The absolute value of %d is %d\n", x, ABS(x));
	printf("The absolute value of %d is %d\n", y, ABS(y));

	return 0;
}
