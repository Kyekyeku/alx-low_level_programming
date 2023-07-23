#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase,
 *              followed by the alphabet in uppercase,
 *              and then a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}

	while (uppercase <= 'z')
	{
		putchar(uppercase);
		uppercase++;
	}

	putchar('\n');

	return (0);
}
