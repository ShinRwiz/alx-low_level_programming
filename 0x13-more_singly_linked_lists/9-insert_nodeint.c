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

	for (i = 0; head != NULL && i < idx - 1; i++)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
	}
	nn = malloc(sizeof(listint_t));
	if (nn == NULL)
		return (NULL);
	nn->n = n;
	if (idx == 0)
	{
		nn->next = *head;
		*head = nn;
		return (nn);
	}
	nn->next = temp->next;
	temp->next = nn;
	return (nn);
}
