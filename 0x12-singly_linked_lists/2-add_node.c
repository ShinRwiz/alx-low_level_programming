#include "lists.h"
/**
 * print_list --
 * @h: --
 * Return: --
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *n = malloc(sizeof(list_t));
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;

	if (n == NULL)
		return (NULL);

	n->str = strdup(str);
	n->len = len;
	n->next = (*head);
	(*head) = n;

	return (*head);
}
