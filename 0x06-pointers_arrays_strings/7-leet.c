#include "main.h"
/**
 * leet --
 * @s: --
 * Return: --
 */
char *leet(char *s)
{
	int i, j;
	char a1[] = "aAeEoOtTlL";
	char a2[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a1[j] == s[i])
				s[i] = a2[j];
		}
	}
	return (s);
}
