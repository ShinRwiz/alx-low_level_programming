#include <stdio.h>
/**
 * main --
 * Return: --
 */
int main(void)
{
	unsigned long int i;
	unsigned long int n;

	i = 2;
	n = 612852475143;

	while (n > 1)
	{
		if (n % i == 0)
		{
			n /= i;
		}
	else
		i++;
	}
	printf("%lu\n", i);
	return (0);
}
