#include <stdio.h>

/**
 * main - prints the program name, followed by a new line
 * @argc: the number of arguments supplied to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: always o.
 */
int main(int _attribute_((_unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
