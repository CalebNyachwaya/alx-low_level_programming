#include "main.h"

/**
* array_range - Function that creates an array of integers.
* @min: The first value of the array
* @max: The last value of the array
*
* Return: array_range.
*/
int *array_range(int min, int max)
{
	int i, l = (max - min) + 1;
	int *array_range;

	if (min > max)
	{
		return (NULL);
	}

	array_range = malloc(l * sizeof(*array_range));

	if (array_range == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; min++, i++)
	{
		*(array_range + i) = min;
	}

	return (array_range);
}
