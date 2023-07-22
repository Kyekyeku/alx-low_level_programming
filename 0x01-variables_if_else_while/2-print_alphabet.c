#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: Prints the alphabet in lowercase, fallowed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
