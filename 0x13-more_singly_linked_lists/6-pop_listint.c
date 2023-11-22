#include "lists.h"
/**
 * pop_listint --
 * @head: --
 * Return: --
*/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *x;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;
	x = (*head)->next;
	free(*head);
	*head = x;
	return (n);
}
