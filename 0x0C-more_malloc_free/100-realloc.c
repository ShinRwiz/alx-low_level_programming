#include "main.h"
#include <stdlib.h>
/**
 * _realloc --
 * @ptr: --
 * @old_size: --
 * @new_size: --
 * Return: --
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p1, *p2;
	unsigned int i;

	p2 = ptr;
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		p1 = malloc(new_size);
		if (p1 == NULL)
			return (NULL);
		free(ptr);
		return (p1);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p1 = malloc(new_size);
	if (p1 == NULL)
		return (NULL);

	if (p1 == NULL)
	{
		for (i = 0; i < old_size && i < new_size; i++)
		{
			p1[i] = p2[i];
		}
		free(ptr);
		return (p1);
	}
}
