#include <stdio.h>
/**
 * main - entry point
 *
 * description - printing three number digits
 *
 * return: always 0 (success)
 */
int main(void) /*printing three digits*/
{
	int i;
	int j;
	int k;

	for (i = '0'; i <= '7'; i++)
	{
	for (j = i + 1; j <= '9'; j++)
	{
	for (k = j + 1; k <= '9'; k++)
	{
	putchar(i);
	putchar(j);
	putchar(k);
	if (i == '7' && j == '8' && k == '9')
	break;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
