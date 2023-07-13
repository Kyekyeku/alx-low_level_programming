#include <stdio.h>
/**
 * main - A program which prints the size of various computer types
 * Return: 0 (Success)
 */
int main(void)
{
char a;
short b;
int c;
long int d;
long long e;
float f;
double g;
long double h;

printf("Size of char: %zu bytes\n", sizeof(a));
printf("Size of short: %zu bytes\n", sizeof(b));
printf("Size of int: %zu bytes\n", sizeof(c));
printf("Size of long: %zu bytes\n", sizeof(d));
printf("Size of long long: %zu bytes\n", sizeof(e));
printf("Size of float: %zu bytes\n", sizeof(f));
printf("Size of double: %zu bytes\n", sizeof(g));
printf("Size of long double: %zu bytes\n", sizeof(h));
return (0);
}
