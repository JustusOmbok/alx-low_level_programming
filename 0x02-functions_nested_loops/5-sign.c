#include "main.h"

/**
 * print_sign - check input if its positive, negative
 * @n: variable to determine if input is greater, less or equal to zero
 * Return: 0 if successful
 */

int print_sign(int n)
{
int i;
if (n > 0)
{
_putchar('+');
i = 1;
}
else if (n < 0)
{
_putchar('-');
i = -1;
}
else
{
_putchar('0');
i = 0;
}
return (i);
}
