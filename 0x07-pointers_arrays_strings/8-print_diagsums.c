/*
* File: 8-print_diagsums.c
* Author: mbt371
* Date: Monday 28 march 2022
*/

#include "main.h"
#include <stdio.h>
#include <stdio.h>

/**
* print_diagsums - print sum of diagonals
* @a:array
* @size: size of matrix
* Return:void
*/

void print_diagsums(int *a, int size)
{
int i;
int tm1 = 0;
int tm2 = 0;

	for (i = 0; i < size; i++)
	{
		tm1 += a[i];
		a += size;
	}
	a -= size;

	for (i = 0; i < size; i++)
	{
		tm2 += a[i];
		a -= size;
	}
printf("%d, %d\n", tm1, tm2);
}
