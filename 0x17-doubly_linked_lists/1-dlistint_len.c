#include "lists.h"

/**
 * dlistint_len - this function returns the
 * number of elements in a doubly linked list
 * @h: pointer to the list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
