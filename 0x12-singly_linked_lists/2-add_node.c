#include "lists.h"

/**
 * add_node - check the code
 * @head: the head of the linked list
 * @str: the string of the new element
 * Return: the address of the new element or null if failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}
