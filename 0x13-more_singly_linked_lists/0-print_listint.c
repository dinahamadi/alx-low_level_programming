#include "lists.h"

/**
 * print_listint - check the code
 * @h: a linked list
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
