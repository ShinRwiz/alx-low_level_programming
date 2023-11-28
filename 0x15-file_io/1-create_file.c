#include "main.h"
/**
 * create_file --
 * @filename: --
 * @text_content: --
 * Return: --
 */
int create_file(const char *filename, char *text_content)
{
	int file, w, len;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (!file)
		return (-1);

	if (!text_content)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	w = write(file, text_content, len);
	if (!w)
		return (-1);

	close(file);
	return (1);
}
