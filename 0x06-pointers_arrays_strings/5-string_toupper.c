#include "main.h"
/**
 * string_toupper --
 * @str: --
 * Return: --
 */
char *string_toupper(char *str)
{
	char array1[] = "abcdefghijklmnopqrstuvwxyz";
	char array2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *ptr = str;
	int i;

	while (*ptr)
	{
		for (int i = 0; array1[i]; i++)
		{
			if (*ptr == array1[i])
			{
				*ptr = array2[i];
				break;
			}
		}
			ptr++;
	}
	return (str);
}
