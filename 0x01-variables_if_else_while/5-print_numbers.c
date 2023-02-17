#include <stdio.h>
/**
 * main - entry point
 *
 * prints
 * Return: Always 0 (success)
 */
int main(void)
{
	char num = '0';
	
	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
