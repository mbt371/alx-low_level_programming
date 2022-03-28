/*
* File: 3-strspn.c
* Author: Rodrigo Zárate Algecira
* Date: Monday 06 july 2021
*/

#include "holberton.h"

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
[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[D[D[D[A[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[Cmain.h"[A[A[A[C[C[C[C[C[C[C[C[C[2[D[D[D[D[D[March [D[D[D[D[D[D28[A[C[C[C[C[C[C[C[Cmbt371[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B