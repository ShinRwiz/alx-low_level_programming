#include <stdio.h>
#include <stdlib.h>
/**
 * main --
 * @argc: --
 * @argv: --
 * Return: --
 */
int main(int argc, char *argv[])
{
	int a, b = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		while (a > 0)
		{
			if (a >= 25)
				a -= 25;
			else if (a >= 10)
				a -= 10;
			else if (a >= 5)
				a -= 5;
			else if (a >= 2)
				a -= 2;
			else if (a >= 1)
				a -= 1;
			b += 1;
		}
	}
	printf("%d\n", b);
	return (0);
}
