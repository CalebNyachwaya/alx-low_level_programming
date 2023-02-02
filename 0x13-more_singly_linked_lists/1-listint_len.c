#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: head of the struct.
 * Return: number of elements in a linked list_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;
        const listint_t *ptr = NULL;

        if (h == NULL)
        return (0);

        ptr = h;
        while (ptr != NULL)
        {
                elements++;
                ptr = ptr->next;
        }
        return (elements);
}

