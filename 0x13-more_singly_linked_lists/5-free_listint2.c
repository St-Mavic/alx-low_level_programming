#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: a pointer to a pointer to head list
 *
 * Return: no value
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp_node;

	while (*head != NULL)
	{
		tmp_node = *head;
		*head = (*head)->next;
		free(tmp_node);
	}
}
