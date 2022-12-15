#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to be checked
 *
 * Return: Always 0
 */

int print_last_digit(int n)
{
	int last = n % 10;
	int t = last * -1;

	if (last < 0)
		_putchar(t + '0');

	return (last);
}
