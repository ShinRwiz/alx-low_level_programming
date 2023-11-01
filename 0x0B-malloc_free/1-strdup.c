#include "main.h"
#include <stdlib.h>
/**
 * _strdup --
 * @str: --
 * Return: --
 */
char *_strdup(char *str)
{
	char *s;
	int i, size = 0;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	s = (char *)malloc((sizeof(char) * size) + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = str[i];
	s[size] = '\0';

	return (s);
}
