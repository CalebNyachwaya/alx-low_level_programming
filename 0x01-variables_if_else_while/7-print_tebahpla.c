#include <stdio.h>

/**
 * main - entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char l;

	l = 'z';
	while (l >= 'a')
	{
		putchar(l);
		l--;
	}
	putchar("\n");
	return (0);
}
