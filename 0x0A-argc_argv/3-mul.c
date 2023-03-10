#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of two nums followed by a new line
 * @argc: the number of arguments supplied tothe program
 * @argv: an array of pointers to the arguments
 *
 * Return: if prog recieves 2 arguments  -0
 * if not two arguments - 1
 */
int main(int argc, char *argv[])
{
	int x, y;

	if (argc != 3)
		printf("Error\n");
	else
	{
		x = strtol(argv[1], 0, 10);
		y = strtol(argv[2], 0, 10);
		printf("%d\n", x * y);
	}
	return (0);
}
