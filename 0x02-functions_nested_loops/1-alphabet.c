#include "main.h"

/**
* print_aphabet - print alphabet
*
* Return: void
*
*/
void print_alphabet(void) /* returns nothing*/

{
char letter = 'a';

while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
