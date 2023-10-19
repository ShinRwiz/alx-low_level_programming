#include "main.h"
/**
 * _strcat --
 * @dest: --
 * @src: --
 * Return: --
 */
char *_strcat(char *dest, char *src)
{
	int t = 0, c = 0;

	while (dest[t] != '\0')
		t++;

	while (src[c] != '\0')
	{
		dest[t] = src[c];
		c++;
		t++;
	}
	dest[t] = '\0';
	return (dest);
}
