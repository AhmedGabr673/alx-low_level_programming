#include "main.h"

/**
 * print_numbers - print 0 to 9 except 2 & 4
 * Return: void
 */

void print_numbers(void)
{
int n = 0;
for (n = '0'; n <= '9'; n++)
{
if ((n == 2) || (n == 4))
{
continue;
}
_putchar (n);
}
_putchar ('\n');
}
