#include <stdio.h>
/**
* main - A program that prints the alphabet in lowercase- uppercase
*
*Return: Always 0
*/
int main()
{
	 int i;
	for (i = 0; i < 26; i++)
	{	
	putchar('a' + i);
	}
	for (i = 0; i < 26; i++) 
	{
	putchar('A' + i);
	}
	putchar('\n');
	 return 0;
}
