#include "main.h"
/**
 * error_98 --
 * @s: The error message to print
 */
void error_98(const char *s)
{
	dprintf(STDERR_FILENO, "%s\n", s);
	exit(98);
}
/**
 * main --
 * @argc: --
 * @argv: --
 * Return: --
 */
int main(int argc, char **argv)
{
	int file;

	if (argc != 2)
		error_98("Usage: elf_header elf_filename");

	file = open(argv[1], O_RDONLY);
	if (file == -1)
		error_98("Error: Can't open file");

	close(file);
	return (0);
}
