#include "lists.h"
/**
 * print_list - check the code
 * @h: a list
 * Return: number od elements in the lint.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
	}
	return (count);
}
