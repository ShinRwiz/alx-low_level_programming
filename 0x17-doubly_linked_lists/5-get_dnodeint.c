#include "lists.h"
/**
 * get_dnodeint_at_index --
 * @head: --
 * @index: --
 * Return: --
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int cnt;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	for (cnt = 0; cnt < index; cnt++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
