#include "main.h"

/**
 * _isupper - check if in char is upper case
 * @c: int check
 * Return: return 1 if upper case
 */

int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
