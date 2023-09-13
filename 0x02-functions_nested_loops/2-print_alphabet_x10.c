#include "main.h"

/**
 * print_alphabet_x10 - make alphabet x10 times
 * Return: void
 */

void print_alphabet_x10(void)

{
	char c;
	int s = 0;

	while (s <= 9)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	s++;
	}
}
