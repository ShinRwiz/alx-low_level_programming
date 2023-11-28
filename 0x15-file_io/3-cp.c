#include "main.h"
/**
 * main --
 * @argc: --
 * @argv: --
 * Return: --
 */
int main(int argc, char **argv)
{
	int from, to, r, w;
	char buffer[1024];

	if (argc != 3)
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]), exit(97);
	from = open(argv[1], O_RDONLY);
	if (from == -1)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to == -1)
		dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((r = read(from, buffer, 1024)) > 0)
	{
		if (r == -1)
			dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
		w = write(to, buffer, r);
		if (w == -1 || w != r)
			dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	close(from);
	close(to);
	if (close(from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", from), exit(100);
	}
	if (close(to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", to), exit(100);
	}
	return (0);
}
