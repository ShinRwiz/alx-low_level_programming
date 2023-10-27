#include <stdio.h>
#include <string.h>
/**
 * main --
 * @argc: --
 * @argv: --
 * Return: --
 */
int main(int argc, char *argv[])
{
	int a = 0;
	char *b;

	while (--argc > 0)
	{
		for (b = argv[argc]; *b; b++)
			if (*b < '0' || *b > '9')
			{
				return (printf("Error\n"), 1);
			}
			a += atoi(argv[argc]);
	}
	printf("%d\n", a);
	return (0);
}
