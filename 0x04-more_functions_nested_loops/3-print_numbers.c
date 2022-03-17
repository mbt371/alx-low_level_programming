#include "main.h"

/**
 * print_numbers - priint the numbers from 0 t0 9
 * Description: you can only use _putchar twice
 *
 * Return: always 0
 */

void print_numbers(void)
{
int number;

for (number = '0'; number <= '9'; number++)
{
_putchar(number);
}
_putchar('\n');
}
