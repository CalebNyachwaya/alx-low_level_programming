#include "main.h"
#include <stdio.h>
/**
 * _strchr -  function that locates a character in a string
 * @s: is a pointer which stores the addresses
 * @c: is the constant variable that receives
 * Return: (s + i).
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; *(s + index) != '\0' ; index++)
		if (*(s + index) == c)
			return (s + index);
	if (*(s + index) == c)
		return (s + index);
	return (NULL);
}
