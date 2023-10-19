#include "main.h"
/**
 * cap_string --
 * @s: --
 * Return: --
 */
char *cap_string(char *s)
{
	int i = 0, j = 0;
	char sr[] = " \t\n,;.!?\"(){}";

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			if (i == 0)
			{
				s[i] -= 32;
			}
			else
			{
				for (j = 0; sr[j] != '\0'; j++)
				{
					if (s[i - 1] == sr[j])
					{
						s[i] -= 32;
						break;
					}
				}
			}
		}
		i++;
	}
	return (s);
}
