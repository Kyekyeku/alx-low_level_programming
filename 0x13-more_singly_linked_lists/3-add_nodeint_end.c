#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - adds a newnode to the end of a list
 * @head: head of list
 * @n: value for newnode
 * Return: address of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *Kye_kyek = *head;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	Kye_kyek = *head;
	while (Kye_kyek->next)
	{
		Kye_kyek = Kye_kyek->next;
	}

	Kye_kyek->next = newnode;

	return (newnode);
}
