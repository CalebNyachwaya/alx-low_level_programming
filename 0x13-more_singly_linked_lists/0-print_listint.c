#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */

size_t print_listint(const listint_t *h)
{
	size_t elements = 0;

	if (h == NULL)
	return (0);

	while (h)
	{
		elements++;
		/*
		 * _putchar((h->n) + '0');
		 * _putchar('\n');
		 */
		printf("%d\n", h->n);
		h = h->next;
	}
	return (elements);
}
