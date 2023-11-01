#include "main.h"
#include <stdlib.h>
/**
 * wc --
 * @s: --
 * Return: --
 */
int wc(char *s)
{
	int w = 0;

	while (*s != '\0')
	{
		if (*s == ' ')
			s++;
		else
		{
			while (*s != ' ' && *s != '\0')
				s++;
			w++;
		}
	}
	return (w);
}
/**
 * strtow --
 * @str: --
 * Return: --
 */
char **strtow(char *str)
{
	int i = 0, j, k, l, m = 0, n = 0;
	char **s;

	if (str == 0 || *str == '\0')
		return (NULL);

	n = wc(str);
	if (n == 1)
		return (NULL);

	s = (char **)malloc(n * sizeof(char *));
	if (s == NULL)
		return (NULL);

	s[n -  1] = NULL;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			s[m] = (char *)malloc(j * sizeof(char));
			j--;
			if (s[m] == NULL)
			{
				for (k = 0; k < m; k++)
					free(s[k]);
				free(s[n - 1]);
				free(s);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				s[m][l] = str[i + l];
			s[m][l] = '\0';
			m++;
			i += j;
		}
		else
			i++;
	}
	return (s);
}
