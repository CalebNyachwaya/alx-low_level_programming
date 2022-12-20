#include "main.h"

/**
 * puts2 - prints every character of a string, starting with the 1st character
 * @str: The string containing characters.
 *
 * Return: 0
 */
void puts2(char *str)
{
	int i = 0;
	int len = 0;

	while (str[i++])
		len++;

	for (i = 0; i < len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
