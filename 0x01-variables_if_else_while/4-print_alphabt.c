#include <stdio.h>

/**
 * main - entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char l;

	l = 'a';

	while (l <= 'z')
	{
		if (l != 'e' && l != 'q')
			putchar(l);
	l++;
	}
	putchar('\n');
	return (0);
}
