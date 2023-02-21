#include "main.h"

/**
 * print_alphabet_x10 - check the code
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int i = 0;
while (i <= 9)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
i++;
}
}

