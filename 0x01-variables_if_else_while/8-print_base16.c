#include <stdio.h>

/**
 * main -main function
 *
 * Return: always 0
 */

int main(void)
{
	int s;
	char o;

	for (s = 0 ; s < 10 ; s++)
		putchar(s + '0');
	for (o = 'a' ; o <= 'f' ; o++)
		putchar(o);
	putchar('\n');
	return (0);
}
