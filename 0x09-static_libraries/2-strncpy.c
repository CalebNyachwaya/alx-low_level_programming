#include <stdio.h>
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: string to be copied into
 * @src: 2nd string
 * @n: third string
 *
 * Return: returns to the string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, l = 0;

	while (src[i++])
		l++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = l; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
