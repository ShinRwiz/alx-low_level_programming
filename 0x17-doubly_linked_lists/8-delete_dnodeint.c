#include "lists.h"
/**
 * delete_dnodeint_at_index --
 * @head: --
 * @index: --
 * Return: --
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int c;

	if (head == NULL || *head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}
	for (c = 0; c < index; c++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	temp->prev->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
