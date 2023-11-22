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
	listint_t *nn = malloc(sizeof(listint_t)), *current = *head;
	unsigned int i, count = 0;

if (head == NULL)
	return (NULL);

	for (i = 0; head != NULL && i < idx - 1; i++)
	{
		current = current->next;
		if (current == NULL)
		return (NULL);
	}
	if (nn == NULL)
		return (NULL);

	nn->n = n;
	if (idx != 0)
	{
		current = *head;
		for (i = 0; i < idx - 1 && current != NULL; i++)
		{
			current = current->next;
			count++;
		}
	if (current == NULL)
		return (NULL);
	}
	if (count < idx)
		return (NULL);
	if (idx == 0)
	{
		nn->next = *head;
		*head = nn;
		return (nn);
	}
	nn->next = current->next;
	current->next = nn;
	return (nn);
}
