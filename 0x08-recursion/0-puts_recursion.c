#include "main.h"

/**
 * _puts_recursion - prints a string and a new line
 * @s: pointer to char
 * Return: number
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
