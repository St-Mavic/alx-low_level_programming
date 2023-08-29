#include "lists.h"

/**
 * pop_listint - a function that deletes the head node
 * of a listint_t linked list, and returns the head node's data (n).
 * @head: a pointer to a pointer to head of list
 *
 * Return: head node's data, or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp_node;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	tmp_node = *head;
	*head = (*head)->next;
	free(tmp_node);

	return (n);
}
