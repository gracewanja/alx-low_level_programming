#include <stdio.h>
/**
* main - prints the size of different data types
*Warnings are allowed
*
*Return: Always 0
*/
int main(void)
{
char c;
int i;
long li;
long long lli;
float f;
printf("size of a char: %d byte(s)\n", sizeof(c));
printf("size of a int: %d byte(s)\n", sizeof(i));
printf("size of a long int: %d byte(s)\n", sizeof(li));
printf("size of a long long int: %d byte(s)\n", sizeof(lli));
printf("size of a float: %d byte(s)\n", sizeof(f));
return (0);
}
