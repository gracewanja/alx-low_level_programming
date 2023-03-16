#include <stdio.h>
/**
* main - print the string in the put function
*
*Description: using the main function
*this program prints the size of different data types
*Return: 0
*/
int main(void)
 {
printf("Size of char: %ld byte(s)\n", sizeof(char)); 
printf("Size of short int: %ld bytes\n", sizeof(short int));
printf("Size of int: %ld bytes\n", sizeof(int)); 
printf("Size of long int: %ld bytes\n", sizeof(long int));
printf("Size of long long int: %ld bytes\n", sizeof(long long int));
printf("Size of float: %ld bytes\n", sizeof(float));
return 0;
}
