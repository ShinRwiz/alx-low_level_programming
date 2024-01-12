#include "lists.h"
/**
 * add_dnodeint_end --
 * @head: --
 * @n: --
 * Return: --
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nod, *tmp;

	if (head == NULL)
		return (NULL);
	nod = malloc(sizeof(dlistint_t));
	if (nod == NULL)
		return (NULL);
	nod->n = n;
	nod->next = NULL;
	if (*head == NULL)
	{
		nod->prev = NULL;
		*head = nod;
		return (nod);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = nod;
	nod->prev = tmp;
	return (nod);
}
