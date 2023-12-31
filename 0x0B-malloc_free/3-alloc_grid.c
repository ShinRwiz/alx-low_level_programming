#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid --
 * @width: --
 * @height: --
 * Return: --
 */
int **alloc_grid(int width, int height)
{
	int **a, i, j;

	a = malloc(height * sizeof(int *));
	if (width <= 0 || height <= 0 || a == 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			while (i >= 0)
			{
				free(a[i]);
				i--;
			}
			free(a);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}
	return (a);
}
