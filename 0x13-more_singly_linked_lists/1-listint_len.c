#include "lists.h"
/**
 * listint_len --
 * @h: --
 * Return: --
*/
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
