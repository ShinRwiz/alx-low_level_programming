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

	while (--argc)
	{
		for (b = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"));
			a += atoi(argv[argc]);
	}
	printf("%d\n", a);
	return (0);
}
