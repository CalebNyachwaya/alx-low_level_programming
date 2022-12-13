#include <stdio.h>

/**
 * main - entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char Num = '0';

	while (Num < '10')
	{
		putchar(Num);
		Num++;
	}
	putchar('\n');
	return (0);
}
