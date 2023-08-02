#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of itself.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num_bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	char *address = (char *)main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", address[i] & 0xFF);

		if (i < num_bytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
