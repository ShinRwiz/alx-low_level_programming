#include "main.h"
/**
 * leet --
 * @s: --
 * Return: --
 */
char *leet(char *s)
{
	char *p = s;
	char array1[] = "aAeEoOtTlL";
	char array2[] = "44370171";
	int i;

	while (*p != '\0'; p++)
	{
		for (i = 0; array1[i] != '\0'; i++)
		{
			if (*p == array1[i])
			{
				*p = array2[i];
				break;
			}
		}
	}
	return (s);
}
