#include <stdio.h>
#include <string.h>

/**
 * generate_key - generates key
 * @username: username
 */

void generate_key(const char *username)
{
	int i;
	int len = strlen(username);
	char key[7] = {0};

	for (i = 0; i < len; i++)
		key[i % 6] += username[i];

	printf("%s\n", key);
}

/**
 * main - main
 * @argc: argc
 * @argv: argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Usage: %s <username>\n", argv[0]);
		return (1);
	}

	generate_key(argv[1]);

	return (0);
}
