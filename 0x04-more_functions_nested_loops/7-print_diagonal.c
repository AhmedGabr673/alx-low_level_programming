#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n : integer
 * Return: void
 */

void print_diagonal(int n)
{
int lines;
int space;
for (lines = 0; lines < n; lines++)
{
for (space = 0; space < lines; space++)
{
_putchar (' ');
}
_putchar ('\\');
_putchar ('\n');
}
}
