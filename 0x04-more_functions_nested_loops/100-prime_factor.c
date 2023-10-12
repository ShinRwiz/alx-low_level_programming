#include <stdio.h>
#include "main.h"
/**
 * main --
 * Return: --
 */
int main(void)
{
	int i = 2;
	int n = 612852475143;

	while (n > 1)
	{
		if (n % i == 0)
		{
			n /= i;
		}
	else
		i++;
	}
	return (i);
}
