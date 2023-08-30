#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes
 * the node at index index of a listint_t linked list.
 * @head: pointer to a pointer to head of list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp_node, *prev_node;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp_node = *head;
		*head = (*head)->next;
		free(tmp_node);
		return (1);
	}

	prev_node = NULL;
	tmp_node = *head;
	for (i = 0; tmp_node != NULL && i < index; i++)
	{
		prev_node = tmp_node;
		tmp_node = tmp_node->next;
	}
	if (tmp_node == NULL)
		return (-1);

	prev_node->next = tmp_node->next;
	free(tmp_node);

	return (1);

}
