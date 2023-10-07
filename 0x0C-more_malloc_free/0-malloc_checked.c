#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc when
 * function is called
 * @b: The size of memory to be allocated
 * Return: Nothing
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
