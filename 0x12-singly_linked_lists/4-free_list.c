#include "lists.h"

/**
 * free_list - check the code
 * @head: the head of the linked list
 * Return: no return.
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head->next == NULL)
		free(head);
	
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return;
	temp = head;
		while ((temp)->next != NULL)
			head = temp->next;
		free(temp);
}
