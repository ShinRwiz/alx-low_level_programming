#include "main.h"
#include <stdlib.h>
/**
 * argstostr --
 * @ac: --
 * @av: --
 * Return: --
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, c = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	s = malloc((c + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';
	return (s);
}
