#include <stdio.h>
#include "lists.h"

/**
 * print_listint -prints all the Element of a list
 * @h: list type
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		s++;
		printf("%d\n", h->n);
		h =h->next;
	}
	return (s);
}
