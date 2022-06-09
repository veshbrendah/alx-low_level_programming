#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	c = 'A';
	_isupper("%c: %d\n", c, _isupper(c));
	c = 'a';
	_isupper("%c: %d\n", c, _isupper(c));
	return (0);
}
