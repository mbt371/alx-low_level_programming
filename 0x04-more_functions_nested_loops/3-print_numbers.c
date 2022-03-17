#include "main.h"

/**
 * print_numbers - priint the numbers from 0 t0 9
 * Description: you can only use _putchar twice
 *
  Return: void
 */

void print_numbers(void)
{
int numbers;

numbers = 0;
while (numbers < 10)
{
_putchar(numbers + '0');
numbers++;
}
_putchar('\n);
}
