#include "main.h"

/**
 * _islower - Entry point
 * @c: we are checking the character
 *
 * Return: 1 if c is lowercase
 */

int _islower(int c)
{
/*
*	if (c >= 'a' && c <= 'z')
*		return (1);
*	else
*		return (0);
*/
	if (islower(c) == 0)
		return (0);
	else
		return (1);
}
