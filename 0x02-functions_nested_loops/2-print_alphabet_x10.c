#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Entry Point
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
int count = 0;
	char az;

	while (count++ <= 9)
	{
		for (az = 'a'; az <= 'z'; az++)
			_putchar(az);
		_putchar('\n');
	}
}
