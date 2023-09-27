#include "main.h"

/*
 * _memset -Entery point
 * @s: pointed destination
 * @n: bytes
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int o;

	for (o = 0; o < n; o++)
		s[o] = b;
	return (s);
}
