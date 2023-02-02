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
	const listint_t *ptr = NULL;

	if (h == NULL)
	return (0);

	ptr = h;
	while (ptr != NULL)
	{
		elements++;
		_putchar((ptr->n) + '0');
		_putchar('\n');
		ptr = ptr->next;
	}
	return (elements);
}
