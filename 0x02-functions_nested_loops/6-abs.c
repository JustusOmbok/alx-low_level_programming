#include "main.h"

/**
 * _abs - determine the absolute value of an integer
 * @i: variable to determine absolute value of an integer
 * Return: i if successful
 */

int _abs(int i)
{
if (i < 0)
i *= -1;
return (i);
}
