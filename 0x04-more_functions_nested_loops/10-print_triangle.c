#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: The size of the triangle.
 */

void print_triangle(int size)
{
	int tr, index;

	if (size > 0)
	{
		for (tr = 1; tr <= size; tr++)
		{
			for (index = size - tr; index > 0; index--)
				_putchar(' ');

			for (index = 0; index < tr; index++)
				_putchar('#');

			if (tr == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
