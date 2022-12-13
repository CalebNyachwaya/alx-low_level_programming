#include <stdio.h>

/**
 * main - entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int cal;

	for (cal = 0; cal <= 9; cal++)
	{
		putchar((cal % 10) + '0');
		if (cal == 9)
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
}
