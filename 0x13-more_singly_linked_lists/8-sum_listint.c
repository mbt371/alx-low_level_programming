/*
* 8-sum_listint.c - sum nodes
* Author: mbt371
* Date: April 25, 202
*/

#include "lists.h"

/**
* sum_listint - sum nodes
* @head: Pointer
* Return: int sum or ZERO
*/

int sum_listint(listint_t *head)
{

int n = 0;

	if (head == NULL)
		return (0);

	while (head->next)
	{
		n += head->n;
		head = head->next;
	}
	n += head->n;
return (n);
}

