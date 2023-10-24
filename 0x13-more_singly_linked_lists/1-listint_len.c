#include "lists.h"

/**
 * listint_len - check the code
 * @h: a linked list
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (!h)
		return (0);
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
