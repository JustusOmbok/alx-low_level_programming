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
	int num1, num2;

	if (arg != 3)
		printf("Error\n");
	else
	{
		num1 = atoi(argv[1], 0, 10);
		num2 = atoi(argv[2], 0, 10);
		printf("%d\n", num1 * num2);
	}

	return (0);
}
