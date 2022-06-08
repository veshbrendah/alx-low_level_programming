#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (success)
 * _putchar - writes the character c
 * 0-putchar.c - returns _putchar
 */
int main(void)
{
	char c[] = "_putchar”;

	int x=0;
	while (c[x] !='\0')
	{
		putchar(c[x]);
		x++;
	}
	_putchar('\n');
	return (0);
}
