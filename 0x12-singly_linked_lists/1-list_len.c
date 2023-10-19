#include "lists.h"
/**
 * list_len - check the code
 * @h: a list
 * Return: number od elements in the lint.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
