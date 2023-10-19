#include "main.h"
/**
 * string_toupper --
 * @s: --
 * Return: --
 */
char *string_toupper(char *s)
{
	char array1[] = "abcdefghijklmnopqrstuvwxyz";
	char array2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *ptr = str;
	int i;

	while (*ptr)
	{
		for (i = 0; array1[i]; i++)
		{
			if (*ptr == array1[i])
			{
				*ptr = array2[i];
				break;
			}
		}
			ptr++;
	}
	return (s);
}
