#include "lists.h"
/**
 * add_nodeint_end --
 * @head: --
 * @n: --
 * Return: --
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p;
	listint_t *temp;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);

	p->n = n;
	p->next = NULL;

	if (*head == NULL)
	{
		*head = p;
		return (p);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;

	temp->next = p;
	return (p);
}
