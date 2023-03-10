#include <stdio.h>
#include <stdlib>

/**
 * main - prints the multiplication of two nums followed by a new line
 * @argc: the number of arguments supplied tothe program
 * @argv: an array of pointers to the arguments
 *
 * Return: if prog recieves 2 arguments  -0
 *         if not two arguments - 1
 */
int main(int argc, char *argv[])
{
	int num1, num2, prod;

	if (arg != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);

	return (0);
}
