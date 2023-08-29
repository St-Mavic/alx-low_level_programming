#include "lists.h"
/**
 * free_listint -  a function that frees a listint_t list.
 * @head: a pointer to head of list
 *
 * Return: no value
 */

void free_listint(listint_t *head)
{
	listint_t *tmp_node;

	while (head != NULL)
	{
		tmp_node = head;
		head = head->next;
		free(tmp_node);
	}
}
