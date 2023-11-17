#include "lists.h"
/**
 * add_node_end --
 * @head: --
 * @str: --
 * Return: --
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n = malloc(sizeof(list_t)), *temp = *head;
	int len = 0;

	if (str == NULL)
		len = 0;

	while (str[len] != '\0')
		len++;
	if (n == NULL)
		return (NULL);

	n->str = strdup(str);
	n->len = len;
	n->next = NULL;

	return (n);
}
