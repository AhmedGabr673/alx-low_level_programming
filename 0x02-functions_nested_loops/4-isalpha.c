#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: character to check
 * Return: 1 if lowercase or uppercase, 0 if otherwise
 */

int _islower(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
return (0);
}
