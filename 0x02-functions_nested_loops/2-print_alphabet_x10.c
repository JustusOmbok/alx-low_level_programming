#include "main.h"

/**
 * print_alphabet_x10 - prints out alphabet
 * main -uses built in function
 * Return: 0 if successful
 */

void print_alphabet_x10(void)
{
char i;
int x;
x = 0;

while (x < 10)
{
for (i = 'a'; i <= 'z'; i++)
_putchar(i);
_putchar('\n');
x++;
}
}
