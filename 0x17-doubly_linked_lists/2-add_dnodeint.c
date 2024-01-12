#include "lists.h"
/**
 * add_dnodeint --
 * @head: --
 * @n: --
 * Return: --
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nod;

	if (head == NULL)
		return (NULL);
	nod = malloc(sizeof(dlistint_t));
	if (nod == NULL)
		return (NULL);
	nod->n = n;
	nod->prev = NULL;
	nod->next = *head;
	*head = nod;
	if (nod->next != NULL)
		(nod->next)->prev = nod;
	return (nod);
}
