#include <stdio.h>
/**
* main - Prints the alphabet in lowercase,except for q and e
*
*Return: Always 0
*/
int main(void)
{
	 int i;

    // Print lowercase letters
    for (i = 0; i < 26; i++) {
        putchar('a' + i);
    }

    // Print uppercase letters
    for (i = 0; i < 26; i++) {
        putchar('A' + i);
    }

    // Print new line
    putchar('\n');

    return 0;
}
