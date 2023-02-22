#include "main.h"

/**
 * print_last_digit - checks for lowercase character
 * @x: int to check
 * Return: the value of the last digit
 */

int print_last_digit(int x)
{
_putchar('0'+(x%10));
return (x%10);
}