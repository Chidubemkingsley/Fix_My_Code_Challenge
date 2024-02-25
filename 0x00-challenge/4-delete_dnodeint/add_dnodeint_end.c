#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - this program adds a node at the end of the list
 *
 * @head: the shows the address of the first pointer to the first element
 * @n: This shows the number to be stored in the new element
 *
 * Return: visible pointer to the particular new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *l;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		return (new);
	}
	l = *head;
	while (l->next != NULL)
	{
		l = l->next;
	}
	l->next = new;
	new->prev = l;
	return (new);
}
