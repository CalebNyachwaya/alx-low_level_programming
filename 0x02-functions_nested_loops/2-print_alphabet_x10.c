#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Entry Point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
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
