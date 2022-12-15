#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char az;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (az = 'a'; az <= 'z'; az++)
		{
			_putchar(az);
		}
		_putchar('\n');
	}
}
