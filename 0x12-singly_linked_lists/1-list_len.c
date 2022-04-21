/*
* 1-list_len.c - Count elements list
* Author: mbt371
* Date: April 21, 2022
*/

#include "lists.h"

/**
* list_len - Number of elements in list
* @h: pointer to const list
* Return: number of elements
*/

size_t list_len(const list_t *h)
{

int i;
const list_t *dt = h;
size_t howmany = 0;
/* walk list */
	for (i = 0; dt; i++)
	{
	dt = dt->next;
	howmany++;
	}
return (howmany);
}

