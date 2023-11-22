#include "lists.h"
/**
 * insert_nodeint_at_index --
 * @head: --
 * @idx: --
 * @n: --
 * Return: --
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nn, *current = *head;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	nn = malloc(sizeof(listint_t));
	if ((*head == NULL && idx != 0) || nn == NULL)
		return (NULL);

	nn->n = n;
	for (i = 0; head != NULL && i < idx - 1; i++)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
	}

	if (idx == 0)
	{
		nn->next = *head;
		*head = nn;
	}
	else if (current->next)
	{
		nn->next = current->next;
		current->next = nn;
	}
	else
	{
		nn->next = NULL;
		current->next = nn;
	}
	return (nn);
}
