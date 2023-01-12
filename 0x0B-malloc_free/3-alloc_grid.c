#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: is the width
 * @height: is the height
 *
 * Return: Always 0.
 */
int **alloc_grid(int width, int height)
{
	int **lane, i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	lane = malloc(sizeof(int *) * height);

	if (lane == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		lane[i] = malloc(sizeof(int) * width);

		if (lane[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(lane[i]);
			}
			free(lane);
			return (NULL);
		}
	}
	return (lane);
}
