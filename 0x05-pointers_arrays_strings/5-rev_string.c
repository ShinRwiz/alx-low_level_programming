#include "main.h"
/**
 * rev_string --
 * @s: --
 * Return: --
 */
void rev_string(char *s)
{
	int c1, c2, t;
	char x;

	c1 = 0;
	while (s[c1] != '\0')
	{
		c1++;
	}
	t = c1 - 1;
	for (c2 = 0; t >= 0 && c2 < t; t--, c2++)
	{
		x = s[c2];
		s[c2] = s[t];
		s[t] = x;
	}
}
