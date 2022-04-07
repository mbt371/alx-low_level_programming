/*
* 3-array_range.c - creates an array of integers
* Author: mbt371
* Date: April 7 2022
*/

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* array_range - create array
* @min: int
* @max: int
* Return: void pointer or NULL
*/

int *array_range(int min, int max)
{
/* int pointer to match */
int *p;
/* using convention i j k */
int i, j = 0;

/* If min > max, return NULL */
	if (min > max)
	{
		return (NULL);
	}

/* include max and min */
p = malloc(sizeof(int) * (max - min + 1));

	if (p == NULL)
	{
	/* memory allocation fails */
		return (NULL);
	}

	/* space in p[j] start in 0 filled with value of i an so on */
	for (i = min; i <= max; i++)
	{
		p[j] = i;
		j++;
	}
/* thats all folks */
/* return the pointer */
return (p);
}

