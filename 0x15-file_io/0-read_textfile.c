#include "main.h"
/**
 * read_textfile --
 * @filename: --
 * @letters: --
 * Return: --
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t r, w;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	r = read(file, buffer, letters);
	if (r == -1)
		return (0);

	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1 || r != w)
		return (0);

	free(buffer);
	close(file);
	return (w);
}
