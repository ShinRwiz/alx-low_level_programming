#include "lists.h"
/**
 * delete_nodeint_at_index --
 * @head: --
 * @index: --
 * Return: --
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *pr, *next;

	if (!head|| !*head)
		return (-1);

	if (!index)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	pr = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (pr->next == NULL)
			return (-1);
		pr = pr->next;
	}
	next = pr->next;
	pr->next = next->next;
	free(next);
	return (1);

}
