#include "main.h"

/**
 * puts2 - print every other char of a string
 * @str: string to reverse
 */

void puts2(char *str)
{

int len = 0;

while (*str != '\0')
	{
		len++;
		str+=2;
        _putchar(*str);
	}
     _putchar('\n');
}
