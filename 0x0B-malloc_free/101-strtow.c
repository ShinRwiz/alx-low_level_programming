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

}
