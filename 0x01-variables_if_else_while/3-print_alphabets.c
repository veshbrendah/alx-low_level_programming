#include<stdio.h>
#include<ctype.h>
/**
 * main - all codes
 * Description: A program that prints alphabets in lowercase followed by a line
 *
 * Return: 0
 *
 */

int main(void)
{
char letter
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
for (letter = 'A' ; letter <= 'Z' ; letter++)
	putchar(letter);
putchar('\n');
return (0);
}
