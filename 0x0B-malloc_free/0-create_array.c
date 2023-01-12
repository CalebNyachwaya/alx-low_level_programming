#include <stdio.h>
#include "main.h"
#include <stdlib.h>


/**
 * create_array - creates ana array of chars and innitializes
 * it a specific char
 * @size: array size
 * @c: The char to be innitialized
 *
 * Return: Null if size == 0, else pointer to the array *
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		*(array + i) = c;

	return (array);
}

