#include "lists.h"
/**
 * print_list --
 * @h: --
 * Return: --
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *n = = malloc(sizeof(list_t));
	unsigned int c = 0;

	while (str[c] != '\0')
		c++;

	if (n == NULL)
		return (NULL);

	n->str = strdup(str);
	n->c = c;
	n->next = (*head);
	(*head) = n;

	return (*head);
}
