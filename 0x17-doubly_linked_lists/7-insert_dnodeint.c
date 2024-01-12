#include "lists.h"

/**
 * insert_dnodeint_at_index --
 * @h: --
 * @idx: --
 * @n: --
 * Return: --
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nnod;
	dlistint_t *head;
	unsigned int cnt;

	nnod = NULL;
	if (idx == 0)
		nnod = add_dnodeint(h, n);
	else
	{
		head = *h;
		cnt = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (cnt == idx)
			{
				if (head->next == NULL)
					nnod = add_dnodeint_end(h, n);
				else
				{
					nnod = malloc(sizeof(dlistint_t));
					if (nnod != NULL)
					{
						nnod->n = n;
						nnod->next = head->next;
						nnod->prev = head;
						head->next->prev = nnod;
						head->next = nnod;
					}
				}
				break;
			}
			head = head->next;
			cnt++;
		}
	}
	return (nnod);
}
