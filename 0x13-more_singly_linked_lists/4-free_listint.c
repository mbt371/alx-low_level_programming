/*
* 4-free_listint.c - free list
* Author: mbt371
* Date: April 25, 2022
*/

#include "lists.h"

/**
* free_listint - free list
* @head: Pointer
* Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *nodenext, *verbatim;
	/* copy info */
	verbatim = head;
	/* walk list */
	while (verbatim)
	{
		/* assign */
		nodenext = verbatim->next;
		/* free item by item */
		free(verbatim);
		/* move to next */
		verbatim = nodenext;
	}
}

