#include "lists.h"

/**
 * print_listint -  function that prints all
 * the elements of a listint list.
 * @h: a pointer to the head node
 *
 * Return: returns the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
