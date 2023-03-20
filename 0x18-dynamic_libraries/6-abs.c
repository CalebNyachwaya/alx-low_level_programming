#include "main.h"

/**
 *_abs - comptes the absolute value of an interger
 * @n: number to be checked
 *
 * Return: n if n is greater than 1 and -n if n is less than 0
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
