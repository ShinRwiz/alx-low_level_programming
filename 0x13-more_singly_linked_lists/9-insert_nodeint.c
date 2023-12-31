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
	listint_t *current, *nn = malloc(sizeof(listint_t));
	unsigned int i;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		current = *head;
		for (i = 0; i < idx - 1 && current != NULL; i++)
		{
			current = current->next;
		}
		if (current == NULL)
			return (NULL);
	}
	if (nn == NULL)
		return (NULL);
	nn->n = n;
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
