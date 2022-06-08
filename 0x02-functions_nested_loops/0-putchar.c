#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (success)
 * _putchar - writes the character c
 * 0-putchar.c - returns _putchar
 */
int main(void)
{
	char c[9] = “_putchar”;
	int i = 0;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}
	return (0);
}
