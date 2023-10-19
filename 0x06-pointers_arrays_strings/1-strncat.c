#include "main.h"
/**
 * _strncat --
 * @dest: --
 * @src: --
 * @n: --
 * Return: --
 */
char *_strncat(char *dest, char *src, int n)
{
	int t = 0, c = 0;

	while (dest[t] != '\0')
		t++;
	while (src[c] != '\0' && c < n)
	{
		dest[t] = src[c];
		t++;
		c++;
	}
	dest[t] = '\0';
	return (dest);
}
