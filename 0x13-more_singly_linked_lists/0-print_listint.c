/*
* 0-print_listint.c - Print list
* Author: mbt371
* Date: April 25, 2022
*/

#include "lists.h"

/**
* print_listint - Print list of ints
* @h: const pointer
* Return: size_t
*/

size_t print_listint(const listint_t *h)
{
int i;
size_t howmany = 0;
/*walk the list */
	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
	howmany++;
	h = h->next;
	}
return (howmany);
}

