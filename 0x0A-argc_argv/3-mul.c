#include <stdio.h>
/**
 * main --
 * @argc: --
 * @argv: --
 * Return: --
 */
int main(int argc, char *argv[])
{
	int m;

	if (argc == 3)
	{
		m = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", m);
	}
	else
	{
		printf("Something ain't Right\n");
		return (1);
	}
	return (0);
}
