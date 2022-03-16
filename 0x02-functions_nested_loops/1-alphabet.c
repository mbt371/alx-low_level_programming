#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
/**
* print_aphabet - a function that prints the alphabet, in lowercase
*
* Return: void
*
*/

void print_alphabet(void)
{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}

_putchar('\n');

}

