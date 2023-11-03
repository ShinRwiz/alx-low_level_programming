#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat --
 * @s1: --
 * @s2: --
 * @n: --
 * Return: --
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, sl1 = 0, sl2 = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[sl1] != '\0')
		sl1++;
	while (s2[sl2] != '\0')
		sl2++;

	if (n >= sl2)
		n = sl2;

	s = malloc(sl1 + n + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; j < n ; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[i] = '\0';
	return (s);
}
