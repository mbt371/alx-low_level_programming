/*
* 6-pop_listint.c - pop list
* Author: mbt371
* Date: April 25, 2022
*/

#include "lists.h"

/**
* pop_listint - pop list
* @head: Pointer
* Return: int or zero if fail
*/

int pop_listint(listint_t **head)
{
	listint_t *verbatim;
	int i;
	/* copy info */
	verbatim = *head;
	/* set i */
	if (verbatim == NULL)
	{
		return (0);
	}
	else
	{
		i = verbatim->n;
	}
	/* change content of head */
	*head = verbatim->next;
	/* free list */
	free(verbatim);
return (i);
}

