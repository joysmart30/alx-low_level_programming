#include "lists.h"

/**
 * add_node - Adds a new node at the beginning
 *            of a list.
 * @head: A pointer to the head of the list.
 * @str: is a chracter array.
 *
 * Return: a pointer to the first node.
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	char *duplicate;


	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	duplicate = strdup(str);


	new_node->str = duplicate;
	new_node->len = i;
	new_node->next = *head;

	*head = new_node;

	return (*head);
}
