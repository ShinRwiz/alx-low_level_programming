#include <stdio.h>

/**
 * main - Entry point
 * Description: -
 * Return: Always O (Success)
 */
int main(void)
{
	int nb, sm = 0;

	for (nb = 0; nb < 1024; nb++)
	{
		if ((nb % 3) == 0 || (nb % 5) == 0)
			sm += nb;
	}

	printf("%d\n", sm);

	return (0);
}
