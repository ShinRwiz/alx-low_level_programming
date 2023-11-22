#include "lists.h"
/**
 * delete_nodeint_at_index --
 * @head: --
 * @index: --
 * Return: --
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *x = *head, *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(x);
		return (1);
	}
	while (i < index - 1)
	{
		if (!x || !(x->next))
			return (-1);
		x = x->next;
		i++;
	}
	current = x->next;
	x->next = current->next;
	free(current);
	return (1);
}
