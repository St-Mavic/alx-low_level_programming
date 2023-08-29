#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new
 * node at a given position.
 * @head: pointer to  head of list
 * @idx: index element to be added
 * @n: element to be added
 *
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *tmp_node;
	unsigned int a = 0;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	tmp_node = *head;

	while (tmp_node)
	{
		if (a == idx - 1)
		{
			new_node->next = tmp_node->next;
			tmp_node->next = new_node;
			return (new_node);
		}
		tmp_node = tmp_node->next;
		a++;
	}
	free(new_node);
	return (NULL);
}
