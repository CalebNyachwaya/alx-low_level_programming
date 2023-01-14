#include "main.h"

/**
* _calloc - Function that allocates memory using malloc.
* @nmemb: The number of elements
* @size: is the size to find
*
* Return: s.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *mem;

	if (size == 0 || nmemb == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (size * nmemb); i++)
	{
		*(mem + i) = 0;
	}

	return ((void *)mem);

}
