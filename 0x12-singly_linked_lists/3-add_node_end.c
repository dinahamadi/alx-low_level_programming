#include "lists.h"

/**
 * add_node_end - check the code
 * @head: the head of the linked list
 * @str: the string of the new element
 * Return: the address of the new element or null if failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	if (*head == NULL)
		*head = new;
	else
	{
		temp = (*head);
		while ((temp)->next != NULL)
			temp = temp->next;
	}
	temp->next = new;
	return (*head);
}
