/*
* 2-add_nodeint.c - Add node to list
* Author: mbt371
* Date: April 25, 2022
*/

#include "lists.h"

/**
* add_nodeint - Node in head
* @head: Head node
* @n: int
* Return: new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newnode;
newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
newnode->next = *head;
newnode->n = n;

*head = newnode;
return (newnode);
}

