/*
* 1-strdup.c - exercise to try malloc
* Author: mbt371
* Date: 4 April 2022
*/

#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer to a newly allocated space in memory
* @str: string
* Return: NULL or a pointer
*/

char *_strdup(char *str)
{
/* hold the new str */
char *newstr;
/* fo counters */
int i;
/* to get end position */
int lengtstr = 0;
	/* case: str= NULL */
	if (str == NULL)
	{
		return (NULL);
	}
	/* walk the string */
	for (i = 0; str[i]; i++)
	{
		lengtstr++;
	}

	newstr = malloc((lengtstr + 1) * sizeof(char));
	/* malloc fail */
	if (newstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		newstr[i] = str[i];
	}
	/* end of line */
	newstr[lengtstr] = '\0';

return (newstr);

}

