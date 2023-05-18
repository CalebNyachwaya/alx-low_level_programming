#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to the head of the list
 * @n: value to be stored in the new node
 * Return: pointer to the newly added node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* Variable to store the new node */
	dlistint_t *new_node;

	if (head == NULL)
		return (0);

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (0);

	/* Assign the value to the new node */
	new_node->n = n;

	if (*head == NULL)
	{
		/* Make the new node the head */
		*head = new_node;
		return (new_node);
	}

	/* Set the next pointer of the new node to the current head */
	new_node->next = *head;

	/* Set the previous pointer of the current head to the new node */
	(*head)->prev = new_node;

	/* Make the new node the head */
	*head = new_node;

	/* Return a pointer to the newly added node */
	return (new_node);
}
