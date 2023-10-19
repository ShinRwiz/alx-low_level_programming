#include "main.h"
/**
 * leet --
 * @s: --
 * Return: --
 */
char *leet(char *s)
{
	int i, j;
	char array1[] = "aAeEoOtTlL";
	char array2[] = "44370171";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; array1[j]; j++)
		{
			if (s[i] == array1[j])
			{
				s[i] = array2[j];
			}
		}
	}
	return (s);
}

