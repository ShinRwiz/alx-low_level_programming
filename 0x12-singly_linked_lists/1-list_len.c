#include "lists.h"
/**
 * list_len --
 * @h: --
 * Return: --
*/
size_t list_len(const list_t *h)
{
	size_t cn = 0;

	while (h)
	{
		cn++;
		h = h->next;
	}
	return (cn);
}
