#include "main.h"
/**
 * _strncpy --
 * @dest: --
 * @src: --
 * @n: --
 * Return: --
 */
char *_strncpy(char *dest, char *src, int n)
{
	int t = 0;

	while (src[t] != '\0' && t < n)
	{
		dest[t] = src[t];
		t++;
	}
	while (t < n)
	{
		dest[t] = '\0';
		t++;
	}
	return (dest);
}
