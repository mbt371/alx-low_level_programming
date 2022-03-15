#include "main.h"
/**
* print_last_digit - a function that prints the last digit
* @n: n is an integer
*
* Return: integer
*/

int print_last_digit(int n)
{
n = n % 10;

if (n < 0)
n = -n;
_putchar(n + '0');

return (n);
}
