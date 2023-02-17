#include <stdio.h>
/**
 * main - entry point
 *
 * return: always 0 (success)
 */
int main(void)
{
int nums;

for (nums = '0'; nums <= '9'; nums++)
{
putchar(nums);
}
putchar('\n');
return (0);
}
