#include<stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
char charType;
int intType;
long int long_int;
long long int longType;
float floatType;
printf("size of a char: %ld byte(s)\n", sizeof(charType));
printf("size of an int: %ld byte(s)\n", sizeof(intType));
printf("size of a long int: %ld byte(s)\n", sizeof(long_int));
printf("size of a long long int: %ld byte(s)\n", sizeof(longType));
printf("size of a float: %ld byte(s)\n", sizeof(floatType));
return (0);
}
