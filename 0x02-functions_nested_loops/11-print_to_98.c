#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints out numbers 1 to 98
 *@n: variable to determine if input is greater, less or equal than 98
 *
 */

void print_to_98(int n)
{
if (n > 98)
{
for (; n >= 98; n--)
{
printf("%d", n);
if (n != 98)
printf(", ");
else
printf("\n");
}
}
else if (n < 98)
{
for (; n <= 98; n++)
{
printf("%d", n);
if (n != 98)
printf(", ");
else
printf("\n");
}
}
else
{
printf("%d\n", n);
}
}

