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
		printf("%c", l);
		l--;
	}
	printf("\n");
	return (0);
}
