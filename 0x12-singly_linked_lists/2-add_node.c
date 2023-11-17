#include "lists.h"
/**
 * add_node --
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

	if (*head == NULL)
		n->next = NULL;
	else
		n->next = *head;

	n->str = strdup(str);
	n->len = len;
	*head = n;

	return (*head);
}
