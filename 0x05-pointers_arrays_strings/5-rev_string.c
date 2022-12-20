#include "main.h"
#include <stdio.h>
/**
 * rev_string - Reverses a string
 * @s: points to a string
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i = 0;
	int index = 0;
	char tmp;

	while (s[index++])
		i++;

	for (index = i - 1; index >= i / 2; index--)
	{
		tmp = s[index];
		s[index] = s[i - index - 1];
		s[i - index - 1] = tmp;
	}
}
