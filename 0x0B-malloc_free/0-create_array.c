#include "main.h"
#include <stdlib.h>
/**
 * create_array --
 * @size: --
 * @c: --
 * Return: --
 */
char *create_array(unsigned int size, char c)
{
	char *a;

	if (size == 0)
		return (NULL);

	a = (char *)malloc(sizeof(char) * size);
	if (a == NULL)
		return (NULL);

	while (size--)
		a[size] = c;

	return (a);
}
