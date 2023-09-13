#include "main.h"

/**
 * print_alphabet_x10 - make alphabet x10 times
 * Return: void
 */

void print_alphabet_x10(void)

{
	char s;
	int o = 0;

	while (o <= 9)
	{
	for (s = 'a'; s <= 'z'; s++)
	{
	_putchar(s);
	}
	_putchar('\n');
	s++;
	}
}
