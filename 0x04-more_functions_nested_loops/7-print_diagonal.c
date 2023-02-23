// #include "main.h"
#include <stdio.h>
void print_diagonal(int n);
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n : integer
 * Return: void
 */

int main(){
    print_diagonal(10);
}
void print_diagonal(int n)
{
int lines;
int space;
for (lines = 0; lines < n; n++)
{
    for (space = 0; space < lines; space++)
    {
        // _putchar (' ');
        printf(" ");
    }
// _putchar ('\\');
// _putchar ('\n');
printf("\\");
printf("\n");
}
}
