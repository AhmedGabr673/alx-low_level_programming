#include "main.h"

/**
 * print_last_digit - checks for lowercase character
 * @x: int to check
 * Return: the value of the last digit
 */

int print_last_digit(int x)
{
if (x < 0)
x = x * -1;
_putchar('0' + (x % 10));
return (x % 10);
}
