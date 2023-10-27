#include "main.h"
/**
 * _strspn --
 * @s: --
 * @accept: --
 * Return: --
 */
unsigned int _strspn(char *s, char *accept)
{
	int c = 0, w, i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
	w = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				c++;
				w = 1;
				break;
			}
		}
			if (w == 0)
				break;
	}
	return (c);
}
