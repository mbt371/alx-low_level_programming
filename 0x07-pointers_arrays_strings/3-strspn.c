/*
* File: 3-strspn.c
* Author: mbt371
* Date: Monday 28 march 2022
*/

#include "main.h"

/**
* _strspn - Find characters in beggining of string.
* @s: char
* @accept: char
* Return: the number of bytes in s from accept
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int x;
int i;
x = 0;
	while (*s)
	{
	/* walk the string */
		for (i = 0; accept[i]; i++)
		{
		/* run until null */
			if (*s == accept[i])
			{
				x++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
			/* if gets the end */
				return (x);
			}
		}
		s++;
	}
return (x);
}
