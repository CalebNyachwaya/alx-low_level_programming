#include "main.h"
#include <stdio.h>
/**
 * rev_string - Reverses a string
 * @s: pointis to a string
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int a, b;

	char *begin, *end = s;

	for (a = 0; s[a] != '\0' && s[a + 1] != '\0'; a++)
	{
		end++;
	}
	b = a + 1;
	begin = s;
	for (a = 0; a < b / 2; a++)
	{
		char x;

		x = *end;
		*end = *begin;
		*begin = x;
		begin++;
		end--;
	}
	end[b + 1] = '\0';
}
