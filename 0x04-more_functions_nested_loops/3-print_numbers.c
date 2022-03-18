#include "main.h"

/**
 * print_numbers - priint the numbers from 0 t0 9
 * Description: you can only use _putchar twice
 *
 * Return: always 0
 */

void print_numbers(void)
{
int i;

while (i < 10)
{
_putchar (i + '0');
i++;
}

_putchar ('\n');
}
