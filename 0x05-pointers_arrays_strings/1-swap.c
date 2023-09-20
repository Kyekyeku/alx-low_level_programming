#include <stdio.h>

/**
 * swap_int -Swaps the values of two integers.
 * @a: The first integer to be swapped.
 * @b: The Second integer to be swapped.
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
