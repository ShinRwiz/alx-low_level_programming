#include "lists.h"
/**
 * free_listint --
 * @head: --
 * Return: --
*/
void free_listint(listint_t *head)
{
	listint_t *x;

	while (head != NULL)
	{
		x = head->x;
		free(head);
		head = x;
	}
}
