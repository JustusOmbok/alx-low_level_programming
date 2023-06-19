#include "main.h"

/**
 * _isupper - writes uppercase letters
 * @c: looks for uppercase letters
 *
 * Return: 0 always success
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
return (0);
}
