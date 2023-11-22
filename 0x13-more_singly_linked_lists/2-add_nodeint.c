#include "lists.h"
/**
 * add_nodeint --
 * @head: --
 * @n: --
 * Return: --
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	p = malloc(sizeof(listint_t));
	if (head == NULL)
		return (NULL);
	if (p == NULL)
		return (NULL);

	p->n = n;
	p->next = *head;
	*head = p;

	return (p);
}
