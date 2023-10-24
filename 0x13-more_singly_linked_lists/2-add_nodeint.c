#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a listint_t list.
 * @head: linked lists pointer head
 * @h: Integer to be linked
 * Return: address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *Kye_kyek;

	Kye_kyek = malloc(sizeof(listint_t));

	if (Kye_kyek == NULL)
		return (NULL);

	Kye_kyek->n = n;
	Kye_kyek->next = *head;

	*head = Kye_kyek;

	return (Kye_kyek);
}
